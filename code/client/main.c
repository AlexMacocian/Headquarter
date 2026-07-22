#ifdef CORE_MAIN_C
#error "main.c included more than once"
#endif
#define CORE_MAIN_C

bool quit;
uint32_t fps;
GwClient *client;

// Lifecycle status written to HEADQUARTER_HEALTH_FILE (empty/unset disables it)
// so an external healthcheck can see what the bot is doing and, via the
// appended timestamp, whether it is still alive.
static const char *health_file;
static char health_status[32];
static msec_t health_last_ms;

void sighandler(int signum)
{
    (void)signum;
    quit = true;
}

static void set_health_status(const char *status)
{
    if (health_file == NULL || health_file[0] == 0)
        return;

    msec_t now = time_get_ms();
    bool changed = strcmp(health_status, status) != 0;
    if (!changed && health_last_ms != 0 && (now - health_last_ms) < 5000)
        return;

    safe_strcpy(health_status, sizeof(health_status), status);
    health_last_ms = now;

    FILE *f = fopen(health_file, "w");
    if (f == NULL)
        return;
    fprintf(f, "%s %" PRIu64 "\n", status, get_time_since_epoch());
    fclose(f);
}

// Wait HEADQUARTER_LOGIN_BACKOFF seconds after a login failure so a restarting
// supervisor doesn't hammer the login endpoint while rate-limited.
static void login_backoff(void)
{
    const char *env = getenv("HEADQUARTER_LOGIN_BACKOFF");
    if (env == NULL || env[0] == 0)
        return;

    int secs = atoi(env);
    if (secs <= 0)
        return;

    LogInfo("Backing off %d seconds after login failure", secs);
    time_sleep_sec((unsigned int)secs);
}

void main_loop(void)
{
    uint32_t frame_count = 0;
    struct timespec t0, t1;
    struct timespec last_frame_time;

    while (!quit) {
        frame_count += 1;
        get_wall_clock_time(&t0);

        long frame_delta_nsec = time_diff_nsec(&t0, &last_frame_time);
        msec_t frame_delta = frame_delta_nsec / 1000000;

        //
        // Update the client asynchronous operations such as:
        // - Connecting to an GuildWars account.
        // - Connecting to a game server or transferring game server.
        //
        if (client->state == AwaitAccountConnect) {
            AccountLogin(client);
        }

        // @Enhancement:
        // We gotta think a bit more about theses condition
        if (client->state == AwaitPlayCharacter) {
            assert(NetConn_IsShutdown(&client->game_srv));

            DECLARE_KSTR(charname_kstr, 20);
            if (!kstr_read_ascii(&charname_kstr, options.charname, 20)) {
                LogError("Failed to read '%s' in a kstr", options.charname);
                return;
            }

            PlayCharacter(client, &charname_kstr, options.online_status);
        }

        if (client->state == AwaitGameServerDisconnect &&
            NetConn_IsShutdown(&client->game_srv))
        {
            client->ingame = false;
            client->loading = true;
            client->state = AwaitGameServerTransfer;

            World *world;
            if ((world = get_world(client)) != NULL) {
                Event event;
                Event_Init(&event, EventType_WorldMapLeave);
                broadcast_event(&client->event_mgr, &event);
                reset_world(world);
            }
        }

        if (client->state == AwaitGameServerTransfer &&
            NetConn_IsShutdown(&client->game_srv)) {

            TransferGameServer(client);
        }

        //
        // Update the network connection.
        // It will send the data out and check if new data was received.
        //
        NetConn_Update(&client->auth_srv);
        NetConn_Update(&client->game_srv);

        //
        // Update worlds
        // @TODO: Rename to "simulate world"?
        //
        client_frame_update(client, frame_delta);

        //
        // trigger all timers event
        //
        process_timers();

        set_health_status((client->ingame && !client->loading) ? "running" : "connecting");

        {
            long frame_target_nsec = 1000000000 / fps;

            get_wall_clock_time(&t1);
            long diff_nsec = time_diff_nsec(&t1, &t0);
            long sleep_time_nsec = frame_target_nsec - diff_nsec;
            if (sleep_time_nsec > 0)
                time_sleep_ns(sleep_time_nsec);
        }

        last_frame_time = t0;
    }
}

int main(int argc, char **argv)
{
    int err;

    if (log_init() != 0)
        return 1;

    parse_command_args(argc - 1, argv + 1);

    if (options.print_version) {
        printf("Headquarter %d.%d\n", HEADQUARTER_VERSION_MAJOR, HEADQUARTER_VERSION_MINOR);
        return 0;
    }

    if (argc < 2 || options.print_help) {
        print_help(false);
        return 0;
    }

    unsigned int seed = (unsigned int)time(NULL);
    srand(seed);

    health_file = getenv("HEADQUARTER_HEALTH_FILE");
    set_health_status("starting");

    signal(SIGINT, sighandler);
    time_init();
    init_timers();

    if (log_set_file_output(options.log_file) != 0) {
        log_error("log_set_file_output failed");
        return 1;
    }

    if (options.verbose)
        log_set_level(LOG_DEBUG);
    if (options.trace)
        log_set_level(LOG_TRACE);

#ifdef _WIN32
    timeBeginPeriod(1);
#endif
    fps = 60;

    // read the version data
    if ((err = data_init(options.data_dir[0] != 0 ? options.data_dir : NULL)) != 0) {
        log_error("data_init failed, %d", err);
        return 1;
    }

    Network_Init();

    LogInfo("Initialization complete, running with client version %u", options.game_version);

    uint32_t latest_client_file_id;
    if ((err = FsGetLatestExeFileId(&latest_client_file_id)) != 0) {
        log_error("Couldn't get the lastest file id");
        return 1;
    } else if (g_GameData.version.file_id != latest_client_file_id) {
        log_warn("Latest game file id is %" PRIu32, ", got %" PRIu32, latest_client_file_id, g_GameData.version.file_id);
        return 1;
    }

    client = malloc(sizeof(*client));
    init_client(client);

    AuthSrv_RegisterCallbacks(&client->auth_srv);
    GameSrv_RegisterCallbacks(&client->game_srv);

    if (!init_auth_connection(client, options.auth_srv)) {
        LogInfo("Auth connection try failed.");
        exit(1);
    }

    {
        kstr_hdr_read_ascii(&client->email, options.email, ARRAY_SIZE(options.email));
        kstr_hdr_read_ascii(&client->charname, options.charname, ARRAY_SIZE(options.charname));

        DECLARE_KSTR(password, 100);
        kstr_read_ascii(&password, options.password, ARRAY_SIZE(options.password));

        const char *secret;
        if (options.secret_2fa[0] == 0) {
            secret = NULL;
        } else {
            secret = options.secret_2fa;
        }

        set_health_status("logging_in");
        if (options.use_portal) {
            struct portal_login_result result;
            int ret = portal_login(&result, options.email, options.password, secret);
            if (ret != 0) {
                log_error("Failed to connect to portal");
                login_backoff();
                return 1;
            }

            client->portal_token = result.token;
            client->portal_user_id = result.user_id;
        } else {
            if (webgate_init() != 0) {
                log_error("webgate_init failed");
                return 1;
            }

            struct webgate_login_result result;
            if (webgate_login(&result, options.email, options.password, secret, options.game_version) != 0) {
                log_error("Failed to connect to webgate");
                login_backoff();
                return 1;
            }

            webgate_cleanup();

            client->portal_token = result.token;
            client->portal_user_id = result.user_id;
        }
        set_health_status("logged_in");

    #if defined(HEADQUARTER_CONSOLE)
        SetConsoleTitleA(options.charname);
    #endif
    }

    if (!plugin_load(options.script)) {
        LogError("Couldn't load the plugin '%s'", options.script);
        return 1;
    }
    LogInfo("Plugin loaded, %s", options.script);

    main_loop();

    set_health_status("closing");

    while (!list_empty(&plugins)) {
        Plugin *it = plugin_first();
        plugin_unload(it);
    }

    Network_Shutdown();
    log_cleanup();
    printf("Quit cleanly !!\n");

    return 0;
}
