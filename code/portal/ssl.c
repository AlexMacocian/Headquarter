#ifdef PORTAL_SSL_C
#error "ssl.c included more than once"
#endif
#define PORTAL_SSL_C

static void sha1_swap_word(const void *data, size_t size, uint8_t *digest)
{
    const uint8_t *bytes = (const uint8_t *)data;
    // @Robustness: Type aliasing
    mbedtls_sha1(bytes, size, digest);

    le32enc(digest,      be32dec(digest));
    le32enc(digest + 4,  be32dec(digest + 4));
    le32enc(digest + 8,  be32dec(digest + 8));
    le32enc(digest + 12, be32dec(digest + 12));
    le32enc(digest + 16, be32dec(digest + 16));
}

static int compute_static_verifier(struct ssl_sts_connection *ssl,
    const char *username, size_t username_len, const char *password, size_t password_len)
{
    uint16_t buffer[256];
    const size_t buffer_len = ARRAY_SIZE(buffer);

    if (buffer_len < (username_len + password_len))
        return 1;

    // @Cleanup: We should do a proper utf8 -> unicode.
    size_t i = 0;
    for (size_t j = 0; j < password_len; j++, i++)
        buffer[i] = htole16(password[j] & 0xffff);
    for (size_t j = 0; j < username_len; j++, i++)
        buffer[i] = htole16(username[j] & 0xffff);

    static_assert(20 == sizeof(ssl->static_verifier_hash), "We expect exactly 20 bytes to store the digest");
    sha1_swap_word(buffer, (password_len + username_len), ssl->static_verifier_hash);
    return 0;
}

void ssl_sts_connection_init(struct ssl_sts_connection *ssl)
{
    memset(ssl, 0, sizeof(*ssl));

    ssl->fd = INVALID_SOCKET;
    ssl->state = AWAIT_CLIENT_HELLO;

    array_init(ssl->read, 1024);
    array_init(ssl->write, 1024);
}

void ssl_sts_connection_free(struct ssl_sts_connection *ssl)
{
    if (ssl->fd != INVALID_SOCKET) {
        closesocket(ssl->fd);
        ssl->fd = INVALID_SOCKET;
    }

    array_reset(ssl->read);
    array_reset(ssl->write);
}

void ssl_sts_connection_upgrade_sts_connection(struct ssl_sts_connection *ssl, struct sts_connection *sts)
{
    ssl->fd = sts->fd;
    sts->fd = INVALID_SOCKET;
}

int ssl_sts_connection_init_srp(struct ssl_sts_connection *ssl, const char *username, const char *password)
{
    int ret;

    size_t username_len = strlen(username);
    size_t password_len = strlen(password);
    if ((ret = compute_static_verifier(ssl, username, username_len, password, password_len)) != 0) {
        return ret;
    }

    if (sizeof(ssl->srp_username) < username_len) {
        return 1;
    }

    memcpy(ssl->srp_username, username, username_len);
    ssl->srp_username_len = username_len;

    return 0;
}

#define SSL_HS_CLIENT_HELLO            1
#define SSL_HS_SERVER_HELLO            2
#define SSL_HS_SERVER_KEY_EXCHANGE     12
#define SSL_HS_CLIENT_KEY_EXCHANGE     16

#define TLS_SRP_SHA_WITH_AES_256_CBC_SHA 0xC020
#define TLS_SRP_SHA_WITH_AES_128_CBC_SHA 0xC01D

#define SSL_MSG_CHANGE_CIPHER_SPEC     20
#define SSL_MSG_ALERT                  21
#define SSL_MSG_HANDSHAKE              22
#define SSL_MSG_APPLICATION_DATA       23
#define SSL_MSG_CID                    25

static void array_add_be_uint16(array_uint8_t *buffer, uint16_t value)
{
    uint8_t *ptr = array_push(*buffer, sizeof(value));
    be16enc(ptr, value);
}

static void ssl_srp_start_handshake_msg(array_uint8_t *buffer, size_t *pos, uint8_t hs_type)
{
    /*
     * Reserve 4 bytes for hanshake header.
     *    ...
     *    HandshakeType msg_type;
     *    uint24 length;
     *    ...
     */

    // Save the position of the header to later write the appropriate size.
    *pos = array_size(*buffer);

    array_add(*buffer, hs_type);
    (void)array_push(*buffer, 3);
}

static int ssl_srp_finish_handshake_msg(array_uint8_t *buffer, size_t header_pos, uint8_t hs_type)
{
    const size_t HANDSHAKE_HDR_LEN = 4;
    assert((header_pos + HANDSHAKE_HDR_LEN) <= array_size(*buffer));
    assert(array_at(*buffer, header_pos) == hs_type);

    uint8_t *content_begin = array_begin(*buffer) + HANDSHAKE_HDR_LEN;
    size_t content_length = array_end(*buffer) - content_begin;

    const size_t UINT24_MAX = 0xFFFFFF;
    if (UINT24_MAX <= content_length)
        return 1;

    uint8_t *hs_len_ptr = array_begin(*buffer) + 1;
    hs_len_ptr[header_pos + 0] = (content_length >> 16) & 0xFF;
    hs_len_ptr[header_pos + 1] = (content_length >> 8) & 0xFF;
    hs_len_ptr[header_pos + 2] = content_length & 0xFF;
    return 0;
}

static void ssl_srp_write_srp(array_uint8_t *buffer,
    const char *username, size_t length)
{
    assert(length < (UINT8_MAX - 1));

    static const uint16_t EXTENSION_SRP = 12;
    array_add_be_uint16(buffer, EXTENSION_SRP);

    // The length of the extension which effectively encode the length of the
    // username on 1 byte and then the actual username. So, it's length + 1.
    array_add_be_uint16(buffer, (uint16_t)(length + 1));
    array_add(*buffer, (uint8_t)length);

    // Add the username.
    array_insert(*buffer, length, (uint8_t *)username);
}

static int ssl_srp_write_extension(struct ssl_sts_connection *ssl)
{
    // We first need to write the length on a `uint16be_t`, but we don't know
    // it yet. Instead, we reserve those bytes and we will write it later.
    size_t extensions_len_pos = array_size(ssl->write);
    (void)array_push(ssl->write, 2);

    // The first extension is undocumented and doesn't contain any data.
    // So we simply hardcode it.
    array_add_be_uint16(&ssl->write, 0xADAE);
    array_add_be_uint16(&ssl->write, 0); // Length is 0

    // The second extension is SRP specifying the username. (i.e., email)
    ssl_srp_write_srp(&ssl->write, ssl->srp_username, ssl->srp_username_len);

    size_t extension_len = array_size(ssl->write) - (extensions_len_pos + 2);
    if ((size_t)UINT16_MAX < extension_len)
        return 1;

    be16enc(&array_at(ssl->write, extensions_len_pos), (uint16_t)extension_len);
    return 0;
}

static int ssl_srp_write_client_hello_body(struct ssl_sts_connection *ssl)
{
    // The version is always "\x03\x03". (i.e., TLS v1.2)
    array_add(ssl->write, 0x03);
    array_add(ssl->write, 0x03);

    // Write random bytes.
    {
        // This pointer gets invalidated whenever we do anything with the
        // array.
        uint8_t *random_time_ptr = array_push(ssl->write, 4);
        be32enc(random_time_ptr, ssl->client_random.time);
    }

    array_insert(ssl->write, sizeof(ssl->client_random.bytes), ssl->client_random.bytes);

    // The session id is always null
    array_add(ssl->write, 0);

    // Write cipher suites
    static const uint16_t ciphers[] = {
        TLS_SRP_SHA_WITH_AES_256_CBC_SHA,
        TLS_SRP_SHA_WITH_AES_128_CBC_SHA,
        0xFF02, // No ideas what this is...
        0xFF01, // No ideas what this is...
        0xFF04, // No ideas what this is...
        0xFF03, // No ideas what this is...
    };

    assert(sizeof(ciphers) <= UINT16_MAX);
    array_add_be_uint16(&ssl->write, (uint16_t)sizeof(ciphers));
    for (size_t i = 0; i < ARRAY_SIZE(ciphers); ++i) {
        array_add_be_uint16(&ssl->write, ciphers[i]);
    }

    // Write compression methods.
    // This is hardcoded and means 1 compression methods named "null".
    // Not sure if required, but simply reproducing the behavior of the
    // official DLL.
    array_add(ssl->write, 1);
    array_add(ssl->write, 0);

    if (ssl_srp_write_extension(ssl) != 0) {
        return 1;
    }

    return 0;
}

static int ssl_srp_write_client_hello(struct ssl_sts_connection *ssl)
{
    size_t header_pos;
    ssl_srp_start_handshake_msg(&ssl->write, &header_pos, SSL_HS_CLIENT_HELLO);

    if (ssl_srp_write_client_hello_body(ssl) != 0) {
        return 1;
    }

    if (ssl_srp_finish_handshake_msg(&ssl->write, header_pos, SSL_HS_CLIENT_HELLO) != 0) {
        return 1;
    }

    // @Cleanup: We need to calculate the checksum for the hashmac.

    ssl->state = AWAIT_SERVER_HELLO;
    return 0;
}

static void ssl_srp_start_handhsake_msg(struct ssl_sts_connection *ssl, size_t *header_pos)
{
    *header_pos = array_size(ssl->write);

    array_add(ssl->write, SSL_MSG_HANDSHAKE);

    // The version is always "\x03\x03". (i.e., TLS v1.2)
    array_add(ssl->write, 0x03);
    array_add(ssl->write, 0x03);

    // Reserve two bytes to later write the length.
    (void)array_push(ssl->write, 2);
}

static int ssl_srp_finish_handhsake_msg(struct ssl_sts_connection *ssl, size_t header_pos)
{
    const size_t MSG_HDR_LEN = 5;
    assert((header_pos + MSG_HDR_LEN) <= array_size(ssl->write));
    assert(array_at(ssl->write, header_pos) == SSL_MSG_HANDSHAKE);

    size_t msg_size = array_size(ssl->write) - (header_pos + MSG_HDR_LEN);
    if ((size_t)UINT16_MAX < msg_size)
        return 1;

    uint8_t *p = &array_at(ssl->write, header_pos + 3);
    be16enc(p, (uint16_t)msg_size);
    return 0;
}

/*
int ssl_srp_write_client_key_exchange(array_uint8_t *buffer, const uint8_t *key, size_t key_len)
{
    ssl_srp_start_handshake_msg(buffer, SSL_HS_CLIENT_KEY_EXCHANGE);

    array_add_be_uint16(buffer, (uint16_t)key_len);
    array_insert(*buffer, key_len, key);

    if (ssl_srp_finish_handshake_msg(buffer, SSL_HS_CLIENT_KEY_EXCHANGE) != 0) {
        return 1;
    }

    return 0;
}
*/

void ssl_srp_write_change_cipher_spec(array_uint8_t *buffer)
{
    array_add(*buffer, SSL_MSG_CHANGE_CIPHER_SPEC);

    // The version is always "\x03\x03". (i.e., TLS v1.2)
    array_add(*buffer, 0x03);
    array_add(*buffer, 0x03);

    // We hardcode the length of the message, because we only send one.
    array_add_be_uint16(buffer, 1);

    array_add(*buffer, 1);
}

#define ERR_SSL_CONTINUE_PROCESSING    1
#define ERR_SSL_UNEXPECTED_MESSAGE     2
#define ERR_SSL_UNSUPPORTED_PROTOCOL   3
#define ERR_SSL_BAD_INPUT_DATA         4

static int parse_tls12_handshake(const uint8_t *data, size_t length,
    uint8_t content_type, const uint8_t **subdata, size_t *sublen)
{
    const size_t HEADER_LEN = 5;
    // The packet starts with 1 byte defining the content type, 2 bytes defining
    // the version and 2 bytes defining the length of the payload.
    if (length < HEADER_LEN)
        return ERR_SSL_CONTINUE_PROCESSING;

    if (data[0] != content_type)
        return ERR_SSL_UNEXPECTED_MESSAGE;

    if (data[1] != 3 && data[2] != 3)
        return ERR_SSL_UNSUPPORTED_PROTOCOL;

    uint16_t client_sublen = be16dec(&data[3]);

    // This can't overflow, we checked it before.
    if ((length - HEADER_LEN) < client_sublen)
        return ERR_SSL_CONTINUE_PROCESSING;

    *subdata = &data[HEADER_LEN];
    *sublen = client_sublen;
    return 0;
}

static uint32_t be24dec(const void *pp)
{
    uint8_t const *p = (uint8_t const *)pp;
    return (((unsigned)p[0] << 16) | (p[1] << 8) | p[2]);
}

static int chk_stream_read8(const uint8_t **data, size_t *length, uint8_t *out)
{
    if (*length < sizeof(*out))
        return ERR_SSL_BAD_INPUT_DATA;

    *out = **data;
    *data += sizeof(*out);
    *length -= sizeof(*out);
    return 0;
}

static int chk_stream_read16(const uint8_t **data, size_t *length, uint16_t *out)
{
    if (*length < sizeof(*out))
        return ERR_SSL_BAD_INPUT_DATA;

    *out = be16dec(*data);
    *data += sizeof(*out);
    *length -= sizeof(*out);
    return 0;
}

static int chk_stream_read32(const uint8_t **data, size_t *length, uint32_t *out)
{
    if (*length < sizeof(*out))
        return ERR_SSL_BAD_INPUT_DATA;

    *out = be32dec(*data);
    *data += sizeof(*out);
    *length -= sizeof(*out);
    return 0;
}

static int chk_stream_read(const uint8_t **data, size_t *length, uint8_t *out, size_t out_len)
{
    if (*length < out_len)
        return ERR_SSL_BAD_INPUT_DATA;

    memcpy(out, *data, out_len);
    *data += out_len;
    *length -= out_len;
    return 0;
}

static int parse_server_hello(struct ssl_sts_connection *ssl, const uint8_t *data, size_t length)
{
    int ret;
    // The type is encoded on 1 byte and the length on 3 bytes.
    const size_t MIN_LEN = 4;

    if (length < MIN_LEN)
        return ERR_SSL_BAD_INPUT_DATA;

    if (data[0] != SSL_HS_SERVER_HELLO)
        return ERR_SSL_UNEXPECTED_MESSAGE;

    uint32_t content_len = be24dec(&data[1]);
    if ((length - MIN_LEN) != content_len) {
        // At this point, we should already know we have the complete data.
        return ERR_SSL_BAD_INPUT_DATA;
    }

    const uint8_t *content = &data[MIN_LEN];

    uint16_t version;
    if ((ret = chk_stream_read16(&content, &content_len, &version)) != 0)
        return ret;
    // @Cleanup: Maybe not the best error code to return...
    if (version != 0x0303)
        return ERR_SSL_BAD_INPUT_DATA;

    if ((ret = chk_stream_read32(&content, &content_len, &ssl->server_random.time)) != 0)
        return ret;
    if ((ret = chk_stream_read(&content, &content_len, ssl->server_random.bytes,
                               sizeof(ssl->server_random.bytes))) != 0) {
        return ret;
    }

    uint8_t session_id_len;
    if ((ret = chk_stream_read8(&content, &content_len, &session_id_len)) != 0)
        return ret;

    // @Cleanup: Should we distinguish with unsupported input data?!?
    if (session_id_len != 0)
        return ERR_SSL_BAD_INPUT_DATA;

    uint16_t cipher_suite;
    if ((ret = chk_stream_read16(&content, &content_len, &cipher_suite)) != 0)
        return ret;

    // @Cleanup:
    // In theory any of the ciphers we told the cipher should work...
    if (cipher_suite != TLS_SRP_SHA_WITH_AES_256_CBC_SHA)
        return ERR_SSL_BAD_INPUT_DATA;

    uint8_t compression_method;
    if ((ret = chk_stream_read8(&content, &content_len, &compression_method)) != 0)
        return ret;
    if (compression_method != 0)
        return ERR_SSL_BAD_INPUT_DATA;

    uint16_t extension_len;
    if ((ret = chk_stream_read16(&content, &content_len, &extension_len)) != 0)
        return ret;
    if (content_len != extension_len)
        return ERR_SSL_BAD_INPUT_DATA;

    // @Cleanup: Should we read the extension and ensure we get what we expect?
    return 0;
}

static int ssl_srp_process_server_hello(struct ssl_sts_connection *ssl)
{
    int ret;
    const uint8_t *inner_data;
    size_t inner_len;

    ret = parse_tls12_handshake(
        ssl->read.data, ssl->read.size, SSL_MSG_HANDSHAKE,
        &inner_data, &inner_len);
    if (ret != 0) {
        return ret;
    }

    if ((ret = parse_server_hello(ssl, inner_data, inner_len)) != 0)
        return ret;

    ssl->state = AWAIT_SERVER_KEY_EXCHANGE;
    return 0;
}

static int parse_server_key_exchange(struct server_key *key, const uint8_t *data, size_t length)
{
    int ret;
    // The type is encoded on 1 byte and the length on 3 bytes.
    const size_t MIN_LEN = 4;

    if (length < MIN_LEN)
        return ERR_SSL_BAD_INPUT_DATA;

    if (data[0] != SSL_HS_SERVER_KEY_EXCHANGE)
        return ERR_SSL_UNEXPECTED_MESSAGE;

    uint32_t content_len = be24dec(&data[1]);
    if ((length - MIN_LEN) != content_len) {
        // At this point, we should already know we have the complete data.
        return ERR_SSL_BAD_INPUT_DATA;
    }

    const uint8_t *content = &data[MIN_LEN];

    // Currently, we support only an hardcoded format, with specified length
    // for every integers. This isn't a requirement of the protocol, but it's
    // simpler for us.

    uint16_t prime_len;
    if ((ret = chk_stream_read16(&content, &content_len, &prime_len)) != 0)
        return ret;
    if (prime_len != sizeof(key->prime)) {
        // @Cleanup: Add trace prints.
        return ERR_SSL_UNSUPPORTED_PROTOCOL;
    }
    if ((ret = chk_stream_read(&content, &content_len, key->prime, sizeof(key->prime))) != 0)
        return ret;

    uint16_t generator_len;
    if ((ret = chk_stream_read16(&content, &content_len, &generator_len)) != 0)
        return ret;
    if (generator_len != sizeof(key->generator)) {
        // @Cleanup: Add trace prints.
        return ERR_SSL_UNSUPPORTED_PROTOCOL;
    }
    if ((ret = chk_stream_read(&content, &content_len, key->generator, sizeof(key->generator))) != 0)
        return ret;

    uint8_t salt_len;
    if ((ret = chk_stream_read8(&content, &content_len, &salt_len)) != 0)
        return ret;
    if (salt_len != sizeof(key->salt)) {
        // @Cleanup: Add trace prints.
        return ERR_SSL_UNSUPPORTED_PROTOCOL;
    }
    if ((ret = chk_stream_read(&content, &content_len, key->salt, sizeof(key->salt))) != 0)
        return ret;

    uint16_t server_public_len;
    if ((ret = chk_stream_read16(&content, &content_len, &server_public_len)) != 0)
        return ret;
    if (server_public_len != sizeof(key->server_public)) {
        // @Cleanup: Add trace prints.
        return ERR_SSL_UNSUPPORTED_PROTOCOL;
    }
    if ((ret = chk_stream_read(&content, &content_len, key->server_public, sizeof(key->server_public))) != 0)
        return ret;

    if (content_len != 0)
        return ERR_SSL_BAD_INPUT_DATA;

    return 0;
}

static int ssl_srp_process_server_key_exchange(struct ssl_sts_connection *ssl)
{
    int ret;
    const uint8_t *inner_data;
    size_t inner_len;

    if ((ret = parse_tls12_handshake(ssl->read.data, ssl->read.size, SSL_MSG_HANDSHAKE,
                                     &inner_data, &inner_len)) != 0) {
        return ret;
    }

    if ((ret = parse_server_key_exchange(&ssl->server_key, inner_data, inner_len)) != 0)
        return ret;

    ssl->state = AWAIT_SERVER_HELLO_DONE;
    return 0;
}

int sts_process_server_done(struct ssl_sts_connection *ssl)
{
    int ret;
    const uint8_t *inner_data;
    size_t inner_len;

    if ((ret = parse_tls12_handshake(ssl->read.data, ssl->read.size, SSL_MSG_HANDSHAKE,
                                     &inner_data, &inner_len)) != 0) {
        return ret;
    }

    char expected[] = "\x0e\x00\x00\x00";
    if (inner_len != (sizeof(expected) - 1))
        return ERR_SSL_BAD_INPUT_DATA;

    if (memcmp(inner_data, expected, inner_len) != 0)
        return ERR_SSL_BAD_INPUT_DATA;

    ssl->state = AWAIT_CLIENT_KEY_EXCHANGE;
    return 0;
}

int ssl_sts_connection_step(struct ssl_sts_connection *ssl)
{
    int ret = 0;

    size_t header_pos;
    ssl_srp_start_handhsake_msg(ssl, &header_pos);

    switch (ssl->state) {
        case AWAIT_CLIENT_HELLO:
            ret = ssl_srp_write_client_hello(ssl);
            break;

        case AWAIT_SERVER_HELLO:
            ret = ssl_srp_process_server_hello(ssl);
            break;

        case AWAIT_SERVER_KEY_EXCHANGE:
            ret = ssl_srp_process_server_key_exchange(ssl);
            break;

        case AWAIT_SERVER_HELLO_DONE:
            ret = sts_process_server_done(ssl);
            break;

        case AWAIT_CLIENT_KEY_EXCHANGE:
        case AWAIT_CLIENT_CHANGE_CIPHER_SPEC:
            ret = 1;
            break;
    }

    if (ret != 0) {
        // @Cleanup: Should we kill the connection here?
        return ret;
    }

    // This is actually broken, this function may not send any data...
    if ((ret = ssl_srp_finish_handhsake_msg(ssl, header_pos)) != 0) {
        return ret;
    }

    return 0;
}