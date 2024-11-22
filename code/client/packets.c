#ifdef CORE_PACKETS_C
#error "packets.c included more than once"
#endif
#define CORE_PACKETS_C

MsgField AUTH_CLIENT_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0001[3] = {
    {TYPE_MSG_HEADER, 1},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
};

MsgField AUTH_CLIENT_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0003[5] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_BLOB, 20},
    {TYPE_STRING_16, 26},
};

MsgField AUTH_CLIENT_0004[1] = {
    {TYPE_MSG_HEADER, 4},
};

MsgField AUTH_CLIENT_0005[6] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 20},
    {TYPE_BLOB, 20},
    {TYPE_STRING_16, 64},
};

MsgField AUTH_CLIENT_0006[3] = {
    {TYPE_MSG_HEADER, 6},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0007[3] = {
    {TYPE_MSG_HEADER, 7},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0008[3] = {
    {TYPE_MSG_HEADER, 8},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0009[4] = {
    {TYPE_MSG_HEADER, 9},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_ARRAY_8, 64},
};

MsgField AUTH_CLIENT_0010[3] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0011[5] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0012[4] = {
    {TYPE_MSG_HEADER, 12},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0013[2] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0014[2] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0015[1] = {
    {TYPE_MSG_HEADER, 15},
};

MsgField AUTH_CLIENT_0016[2] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0017[2] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_CLIENT_0018[1] = {
    {TYPE_MSG_HEADER, 18},
};

MsgField AUTH_CLIENT_0019[1] = {
    {TYPE_MSG_HEADER, 19},
};

MsgField AUTH_CLIENT_0020[6] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_CLIENT_0021[2] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0022[2] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0023[2] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0024[3] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
};

MsgField AUTH_CLIENT_0025[5] = {
    {TYPE_MSG_HEADER, 25},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 20},
    {TYPE_BLOB, 20},
};

MsgField AUTH_CLIENT_0026[5] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0027[4] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0028[3] = {
    {TYPE_MSG_HEADER, 28},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 26},
};

MsgField AUTH_CLIENT_0029[3] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0030[4] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 26},
};

MsgField AUTH_CLIENT_0031[23] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 16},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 64},
};

MsgField AUTH_CLIENT_0032[3] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 512},
};

MsgField AUTH_CLIENT_0033[3] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0034[2] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0035[2] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0036[4] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 16},
};

MsgField AUTH_CLIENT_0037[7] = {
    {TYPE_MSG_HEADER, 37},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
};

MsgField AUTH_CLIENT_0038[2] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_BYTE, 0},
};

MsgField AUTH_CLIENT_0039[2] = {
    {TYPE_MSG_HEADER, 39},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0040[9] = {
    {TYPE_MSG_HEADER, 40},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 28},
};

MsgField AUTH_CLIENT_0041[7] = {
    {TYPE_MSG_HEADER, 41},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0042[4] = {
    {TYPE_MSG_HEADER, 42},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0043[4] = {
    {TYPE_MSG_HEADER, 43},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 128},
    {TYPE_ARRAY_32, 128},
};

MsgField AUTH_CLIENT_0044[23] = {
    {TYPE_MSG_HEADER, 44},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 10},
    {TYPE_STRING_16, 6},
    {TYPE_ARRAY_32, 128},
    {TYPE_ARRAY_32, 128},
};

MsgField AUTH_CLIENT_0045[2] = {
    {TYPE_MSG_HEADER, 45},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0046[1] = {
    {TYPE_MSG_HEADER, 46},
};

MsgField AUTH_CLIENT_0047[1] = {
    {TYPE_MSG_HEADER, 47},
};

MsgField AUTH_CLIENT_0048[2] = {
    {TYPE_MSG_HEADER, 48},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0049[2] = {
    {TYPE_MSG_HEADER, 49},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0050[3] = {
    {TYPE_MSG_HEADER, 50},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 10},
};

MsgField AUTH_CLIENT_0051[6] = {
    {TYPE_MSG_HEADER, 51},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 18},
};

MsgField AUTH_CLIENT_0052[4] = {
    {TYPE_MSG_HEADER, 52},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0053[2] = {
    {TYPE_MSG_HEADER, 53},
    {TYPE_DWORD, 0},
};

MsgField AUTH_CLIENT_0054[23] = {
    {TYPE_MSG_HEADER, 54},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 256},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 12},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 28},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 10},
    {TYPE_ARRAY_32, 128},
    {TYPE_ARRAY_32, 128},
};

MsgField AUTH_CLIENT_0055[4] = {
    {TYPE_MSG_HEADER, 55},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_CLIENT_0056[5] = {
    {TYPE_MSG_HEADER, 56},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_SERVER_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0001[3] = {
    {TYPE_MSG_HEADER, 1},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0003[3] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0004[3] = {
    {TYPE_MSG_HEADER, 4},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 2048},
};

MsgField AUTH_SERVER_0005[1] = {
    {TYPE_MSG_HEADER, 5},
};

MsgField AUTH_SERVER_0006[7] = {
    {TYPE_MSG_HEADER, 6},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0007[6] = {
    {TYPE_MSG_HEADER, 7},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_ARRAY_8, 64},
};

MsgField AUTH_SERVER_0008[5] = {
    {TYPE_MSG_HEADER, 8},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 24},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0009[6] = {
    {TYPE_MSG_HEADER, 9},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 24},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0010[5] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_SERVER_0011[5] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_SERVER_0012[4] = {
    {TYPE_MSG_HEADER, 12},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_SERVER_0013[5] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_SERVER_0014[4] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 32},
};

MsgField AUTH_SERVER_0015[1] = {
    {TYPE_MSG_HEADER, 15},
};

MsgField AUTH_SERVER_0016[7] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_SERVER_0017[12] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 200},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0018[7] = {
    {TYPE_MSG_HEADER, 18},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 256},
};

MsgField AUTH_SERVER_0019[2] = {
    {TYPE_MSG_HEADER, 19},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0020[3] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0021[7] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0022[3] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_8, 2048},
};

MsgField AUTH_SERVER_0023[2] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_ARRAY_8, 4096},
};

MsgField AUTH_SERVER_0024[5] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 8},
    {TYPE_BLOB, 8},
    {TYPE_ARRAY_8, 200},
};

MsgField AUTH_SERVER_0025[1] = {
    {TYPE_MSG_HEADER, 25},
};

MsgField AUTH_SERVER_0026[5] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_DWORD, 0},
    {TYPE_NESTED_STRUCT, 11},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField AUTH_SERVER_0027[5] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0028[3] = {
    {TYPE_MSG_HEADER, 28},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0029[4] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0030[10] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField AUTH_SERVER_0031[4] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_32, 16},
};

MsgField AUTH_SERVER_0032[6] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_SERVER_0033[6] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
};

MsgField AUTH_SERVER_0034[3] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 12},
};

MsgField AUTH_SERVER_0035[7] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 16},
};

MsgField AUTH_SERVER_0036[7] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 4},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 16},
};

MsgField AUTH_SERVER_0037[1] = {
    {TYPE_MSG_HEADER, 37},
};

MsgField AUTH_SERVER_0038[3] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0001[1] = {
    {TYPE_MSG_HEADER, 1},
};

MsgField GAME_CLIENT_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0003[2] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0004[1] = {
    {TYPE_MSG_HEADER, 4},
};

MsgField GAME_CLIENT_0005[3] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0006[1] = {
    {TYPE_MSG_HEADER, 6},
};

MsgField GAME_CLIENT_0007[1] = {
    {TYPE_MSG_HEADER, 7},
};

MsgField GAME_CLIENT_0008[1] = {
    {TYPE_MSG_HEADER, 8},
};

MsgField GAME_CLIENT_0009[2] = {
    {TYPE_MSG_HEADER, 9},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0010[15] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_BLOB, 16},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 12},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0011[1] = {
    {TYPE_MSG_HEADER, 11},
};

MsgField GAME_CLIENT_0012[1] = {
    {TYPE_MSG_HEADER, 12},
};

MsgField GAME_CLIENT_0013[4] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0014[4] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0015[4] = {
    {TYPE_MSG_HEADER, 15},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0016[2] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0017[2] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0018[1] = {
    {TYPE_MSG_HEADER, 18},
};

MsgField GAME_CLIENT_0019[3] = {
    {TYPE_MSG_HEADER, 19},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0020[3] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0021[3] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0022[2] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0023[2] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0024[3] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0025[4] = {
    {TYPE_MSG_HEADER, 25},
    {TYPE_AGENT_ID, 0},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0026[3] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0027[5] = {
    {TYPE_MSG_HEADER, 27},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0028[4] = {
    {TYPE_MSG_HEADER, 28},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0029[2] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0030[2] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0031[2] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0032[3] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0033[3] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0034[3] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_BYTE, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0035[3] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0036[4] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0037[3] = {
    {TYPE_MSG_HEADER, 37},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0038[5] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0039[1] = {
    {TYPE_MSG_HEADER, 39},
};

MsgField GAME_CLIENT_0040[2] = {
    {TYPE_MSG_HEADER, 40},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0041[2] = {
    {TYPE_MSG_HEADER, 41},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0042[3] = {
    {TYPE_MSG_HEADER, 42},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0043[3] = {
    {TYPE_MSG_HEADER, 43},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0044[1] = {
    {TYPE_MSG_HEADER, 44},
};

MsgField GAME_CLIENT_0045[1] = {
    {TYPE_MSG_HEADER, 45},
};

MsgField GAME_CLIENT_0046[2] = {
    {TYPE_MSG_HEADER, 46},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0047[2] = {
    {TYPE_MSG_HEADER, 47},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0048[3] = {
    {TYPE_MSG_HEADER, 48},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0049[2] = {
    {TYPE_MSG_HEADER, 49},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0050[2] = {
    {TYPE_MSG_HEADER, 50},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0051[4] = {
    {TYPE_MSG_HEADER, 51},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0052[4] = {
    {TYPE_MSG_HEADER, 52},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0053[4] = {
    {TYPE_MSG_HEADER, 53},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
};

MsgField GAME_CLIENT_0054[3] = {
    {TYPE_MSG_HEADER, 54},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0055[9] = {
    {TYPE_MSG_HEADER, 55},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0056[3] = {
    {TYPE_MSG_HEADER, 56},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0057[3] = {
    {TYPE_MSG_HEADER, 57},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0058[2] = {
    {TYPE_MSG_HEADER, 58},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0059[2] = {
    {TYPE_MSG_HEADER, 59},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0060[5] = {
    {TYPE_MSG_HEADER, 60},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0061[3] = {
    {TYPE_MSG_HEADER, 61},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0062[3] = {
    {TYPE_MSG_HEADER, 62},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0063[3] = {
    {TYPE_MSG_HEADER, 63},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0064[3] = {
    {TYPE_MSG_HEADER, 64},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0065[2] = {
    {TYPE_MSG_HEADER, 65},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0066[2] = {
    {TYPE_MSG_HEADER, 66},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0067[2] = {
    {TYPE_MSG_HEADER, 67},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0068[2] = {
    {TYPE_MSG_HEADER, 68},
    {TYPE_ARRAY_8, 256},
};

MsgField GAME_CLIENT_0069[5] = {
    {TYPE_MSG_HEADER, 69},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0070[3] = {
    {TYPE_MSG_HEADER, 70},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0071[3] = {
    {TYPE_MSG_HEADER, 71},
    {TYPE_VECT2, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0072[2] = {
    {TYPE_MSG_HEADER, 72},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_CLIENT_0073[6] = {
    {TYPE_MSG_HEADER, 73},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0074[2] = {
    {TYPE_MSG_HEADER, 74},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0075[7] = {
    {TYPE_MSG_HEADER, 75},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_CLIENT_0076[8] = {
    {TYPE_MSG_HEADER, 76},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_8, 16},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
    {TYPE_ARRAY_8, 16},
};

MsgField GAME_CLIENT_0077[3] = {
    {TYPE_MSG_HEADER, 77},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_CLIENT_0078[4] = {
    {TYPE_MSG_HEADER, 78},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0079[5] = {
    {TYPE_MSG_HEADER, 79},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0080[3] = {
    {TYPE_MSG_HEADER, 80},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0081[3] = {
    {TYPE_MSG_HEADER, 81},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0082[2] = {
    {TYPE_MSG_HEADER, 82},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0083[8] = {
    {TYPE_MSG_HEADER, 83},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0084[2] = {
    {TYPE_MSG_HEADER, 84},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0085[3] = {
    {TYPE_MSG_HEADER, 85},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0086[3] = {
    {TYPE_MSG_HEADER, 86},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0087[2] = {
    {TYPE_MSG_HEADER, 87},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0088[1] = {
    {TYPE_MSG_HEADER, 88},
};

MsgField GAME_CLIENT_0089[1] = {
    {TYPE_MSG_HEADER, 89},
};

MsgField GAME_CLIENT_0090[2] = {
    {TYPE_MSG_HEADER, 90},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0091[5] = {
    {TYPE_MSG_HEADER, 91},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0092[3] = {
    {TYPE_MSG_HEADER, 92},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 8},
};

MsgField GAME_CLIENT_0093[6] = {
    {TYPE_MSG_HEADER, 93},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0094[5] = {
    {TYPE_MSG_HEADER, 94},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0095[3] = {
    {TYPE_MSG_HEADER, 95},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0096[2] = {
    {TYPE_MSG_HEADER, 96},
    {TYPE_STRING_16, 32},
};

MsgField GAME_CLIENT_0097[3] = {
    {TYPE_MSG_HEADER, 97},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0098[1] = {
    {TYPE_MSG_HEADER, 98},
};

MsgField GAME_CLIENT_0099[3] = {
    {TYPE_MSG_HEADER, 99},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 138},
};

MsgField GAME_CLIENT_0100[2] = {
    {TYPE_MSG_HEADER, 100},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0101[4] = {
    {TYPE_MSG_HEADER, 101},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0102[5] = {
    {TYPE_MSG_HEADER, 102},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0103[2] = {
    {TYPE_MSG_HEADER, 103},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0104[2] = {
    {TYPE_MSG_HEADER, 104},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0105[3] = {
    {TYPE_MSG_HEADER, 105},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_CLIENT_0106[3] = {
    {TYPE_MSG_HEADER, 106},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0107[3] = {
    {TYPE_MSG_HEADER, 107},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0108[3] = {
    {TYPE_MSG_HEADER, 108},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0109[3] = {
    {TYPE_MSG_HEADER, 109},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0110[3] = {
    {TYPE_MSG_HEADER, 110},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0111[2] = {
    {TYPE_MSG_HEADER, 111},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0112[5] = {
    {TYPE_MSG_HEADER, 112},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 6},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0113[4] = {
    {TYPE_MSG_HEADER, 113},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0114[2] = {
    {TYPE_MSG_HEADER, 114},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0115[3] = {
    {TYPE_MSG_HEADER, 115},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0116[5] = {
    {TYPE_MSG_HEADER, 116},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0117[1] = {
    {TYPE_MSG_HEADER, 117},
};

MsgField GAME_CLIENT_0118[4] = {
    {TYPE_MSG_HEADER, 118},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0119[1] = {
    {TYPE_MSG_HEADER, 119},
};

MsgField GAME_CLIENT_0120[1] = {
    {TYPE_MSG_HEADER, 120},
};

MsgField GAME_CLIENT_0121[1] = {
    {TYPE_MSG_HEADER, 121},
};

MsgField GAME_CLIENT_0122[2] = {
    {TYPE_MSG_HEADER, 122},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0123[3] = {
    {TYPE_MSG_HEADER, 123},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0124[4] = {
    {TYPE_MSG_HEADER, 124},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0125[2] = {
    {TYPE_MSG_HEADER, 125},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0126[3] = {
    {TYPE_MSG_HEADER, 126},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0127[3] = {
    {TYPE_MSG_HEADER, 127},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0128[1] = {
    {TYPE_MSG_HEADER, 128},
};

MsgField GAME_CLIENT_0129[1] = {
    {TYPE_MSG_HEADER, 129},
};

MsgField GAME_CLIENT_0130[2] = {
    {TYPE_MSG_HEADER, 130},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0131[3] = {
    {TYPE_MSG_HEADER, 131},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0132[2] = {
    {TYPE_MSG_HEADER, 132},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0133[7] = {
    {TYPE_MSG_HEADER, 133},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_ARRAY_16, 4},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0134[4] = {
    {TYPE_MSG_HEADER, 134},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0135[1] = {
    {TYPE_MSG_HEADER, 135},
};

MsgField GAME_CLIENT_0136[1] = {
    {TYPE_MSG_HEADER, 136},
};

MsgField GAME_CLIENT_0137[1] = {
    {TYPE_MSG_HEADER, 137},
};

MsgField GAME_CLIENT_0138[3] = {
    {TYPE_MSG_HEADER, 138},
    {TYPE_STRING_16, 20},
    {TYPE_BLOB, 8},
};

MsgField GAME_CLIENT_0139[1] = {
    {TYPE_MSG_HEADER, 139},
};

MsgField GAME_CLIENT_0140[3] = {
    {TYPE_MSG_HEADER, 140},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0141[2] = {
    {TYPE_MSG_HEADER, 141},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0142[1] = {
    {TYPE_MSG_HEADER, 142},
};

MsgField GAME_CLIENT_0143[2] = {
    {TYPE_MSG_HEADER, 143},
    {TYPE_BLOB, 16},
};

MsgField GAME_CLIENT_0144[3] = {
    {TYPE_MSG_HEADER, 144},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0145[2] = {
    {TYPE_MSG_HEADER, 145},
    {TYPE_ARRAY_8, 112},
};

MsgField GAME_CLIENT_0146[2] = {
    {TYPE_MSG_HEADER, 146},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0147[2] = {
    {TYPE_MSG_HEADER, 147},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0148[2] = {
    {TYPE_MSG_HEADER, 148},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0149[4] = {
    {TYPE_MSG_HEADER, 149},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0150[1] = {
    {TYPE_MSG_HEADER, 150},
};

MsgField GAME_CLIENT_0151[1] = {
    {TYPE_MSG_HEADER, 151},
};

MsgField GAME_CLIENT_0152[1] = {
    {TYPE_MSG_HEADER, 152},
};

MsgField GAME_CLIENT_0153[1] = {
    {TYPE_MSG_HEADER, 153},
};

MsgField GAME_CLIENT_0154[2] = {
    {TYPE_MSG_HEADER, 154},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0155[2] = {
    {TYPE_MSG_HEADER, 155},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0156[2] = {
    {TYPE_MSG_HEADER, 156},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0157[2] = {
    {TYPE_MSG_HEADER, 157},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0158[2] = {
    {TYPE_MSG_HEADER, 158},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0159[2] = {
    {TYPE_MSG_HEADER, 159},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0160[2] = {
    {TYPE_MSG_HEADER, 160},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0161[1] = {
    {TYPE_MSG_HEADER, 161},
};

MsgField GAME_CLIENT_0162[1] = {
    {TYPE_MSG_HEADER, 162},
};

MsgField GAME_CLIENT_0163[3] = {
    {TYPE_MSG_HEADER, 163},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 64},
};

MsgField GAME_CLIENT_0164[2] = {
    {TYPE_MSG_HEADER, 164},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0165[4] = {
    {TYPE_MSG_HEADER, 165},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0166[1] = {
    {TYPE_MSG_HEADER, 166},
};

MsgField GAME_CLIENT_0167[2] = {
    {TYPE_MSG_HEADER, 167},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0168[2] = {
    {TYPE_MSG_HEADER, 168},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0169[4] = {
    {TYPE_MSG_HEADER, 169},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0170[1] = {
    {TYPE_MSG_HEADER, 170},
};

MsgField GAME_CLIENT_0171[2] = {
    {TYPE_MSG_HEADER, 171},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0172[2] = {
    {TYPE_MSG_HEADER, 172},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0173[2] = {
    {TYPE_MSG_HEADER, 173},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0174[2] = {
    {TYPE_MSG_HEADER, 174},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0175[3] = {
    {TYPE_MSG_HEADER, 175},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0176[6] = {
    {TYPE_MSG_HEADER, 176},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0177[2] = {
    {TYPE_MSG_HEADER, 177},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0178[3] = {
    {TYPE_MSG_HEADER, 178},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0179[3] = {
    {TYPE_MSG_HEADER, 179},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0180[4] = {
    {TYPE_MSG_HEADER, 180},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0181[4] = {
    {TYPE_MSG_HEADER, 181},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0182[4] = {
    {TYPE_MSG_HEADER, 182},
    {TYPE_DWORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0183[3] = {
    {TYPE_MSG_HEADER, 183},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0184[3] = {
    {TYPE_MSG_HEADER, 184},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_CLIENT_0185[3] = {
    {TYPE_MSG_HEADER, 185},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0186[2] = {
    {TYPE_MSG_HEADER, 186},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0187[2] = {
    {TYPE_MSG_HEADER, 187},
    {TYPE_DWORD, 0},
};

MsgField GAME_CLIENT_0188[3] = {
    {TYPE_MSG_HEADER, 188},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_CLIENT_0189[3] = {
    {TYPE_MSG_HEADER, 189},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 256},
};

MsgField GAME_CLIENT_0190[4] = {
    {TYPE_MSG_HEADER, 190},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_CLIENT_0191[3] = {
    {TYPE_MSG_HEADER, 191},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

MsgField GAME_CLIENT_0192[3] = {
    {TYPE_MSG_HEADER, 192},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0000[2] = {
    {TYPE_MSG_HEADER, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0001[2] = {
    {TYPE_MSG_HEADER, 1},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0002[3] = {
    {TYPE_MSG_HEADER, 2},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0003[2] = {
    {TYPE_MSG_HEADER, 3},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0004[3] = {
    {TYPE_MSG_HEADER, 4},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0005[2] = {
    {TYPE_MSG_HEADER, 5},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0006[1] = {
    {TYPE_MSG_HEADER, 6},
};

MsgField GAME_SERVER_0007[1] = {
    {TYPE_MSG_HEADER, 7},
};

MsgField GAME_SERVER_0008[1] = {
    {TYPE_MSG_HEADER, 8},
};

MsgField GAME_SERVER_0009[1] = {
    {TYPE_MSG_HEADER, 9},
};

MsgField GAME_SERVER_0010[3] = {
    {TYPE_MSG_HEADER, 10},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0011[2] = {
    {TYPE_MSG_HEADER, 11},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0012[1] = {
    {TYPE_MSG_HEADER, 12},
};

MsgField GAME_SERVER_0013[2] = {
    {TYPE_MSG_HEADER, 13},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0014[5] = {
    {TYPE_MSG_HEADER, 14},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 256},
};

MsgField GAME_SERVER_0015[4] = {
    {TYPE_MSG_HEADER, 15},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0016[2] = {
    {TYPE_MSG_HEADER, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0017[2] = {
    {TYPE_MSG_HEADER, 17},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0018[2] = {
    {TYPE_MSG_HEADER, 18},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0019[2] = {
    {TYPE_MSG_HEADER, 19},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0020[4] = {
    {TYPE_MSG_HEADER, 20},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0021[3] = {
    {TYPE_MSG_HEADER, 21},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0022[2] = {
    {TYPE_MSG_HEADER, 22},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0023[6] = {
    {TYPE_MSG_HEADER, 23},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0024[2] = {
    {TYPE_MSG_HEADER, 24},
    {TYPE_ARRAY_32, 8},
};

MsgField GAME_SERVER_0025[5] = {
    {TYPE_MSG_HEADER, 25},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0026[4] = {
    {TYPE_MSG_HEADER, 26},
    {TYPE_WORD, 0},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0027[1] = {
    {TYPE_MSG_HEADER, 27},
};

MsgField GAME_SERVER_0028[3] = {
    {TYPE_MSG_HEADER, 28},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0029[2] = {
    {TYPE_MSG_HEADER, 29},
    {TYPE_ARRAY_32, 128},
};

MsgField GAME_SERVER_0030[2] = {
    {TYPE_MSG_HEADER, 30},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0031[2] = {
    {TYPE_MSG_HEADER, 31},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0032[24] = {
    {TYPE_MSG_HEADER, 32},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_BYTE, 0},
    {TYPE_FLOAT, 0},
    {TYPE_FLOAT, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0033[2] = {
    {TYPE_MSG_HEADER, 33},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0034[3] = {
    {TYPE_MSG_HEADER, 34},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0035[3] = {
    {TYPE_MSG_HEADER, 35},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0036[3] = {
    {TYPE_MSG_HEADER, 36},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0037[4] = {
    {TYPE_MSG_HEADER, 37},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0038[3] = {
    {TYPE_MSG_HEADER, 38},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0039[3] = {
    {TYPE_MSG_HEADER, 39},
    {TYPE_DWORD, 0},
    {TYPE_FLOAT, 0},
};

MsgField GAME_SERVER_0040[2] = {
    {TYPE_MSG_HEADER, 40},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0041[5] = {
    {TYPE_MSG_HEADER, 41},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0042[6] = {
    {TYPE_MSG_HEADER, 42},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0043[4] = {
    {TYPE_MSG_HEADER, 43},
    {TYPE_DWORD, 0},
    {TYPE_FLOAT, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0044[4] = {
    {TYPE_MSG_HEADER, 44},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0045[2] = {
    {TYPE_MSG_HEADER, 45},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0046[4] = {
    {TYPE_MSG_HEADER, 46},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0047[3] = {
    {TYPE_MSG_HEADER, 47},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0048[8] = {
    {TYPE_MSG_HEADER, 48},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0049[2] = {
    {TYPE_MSG_HEADER, 49},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0050[7] = {
    {TYPE_MSG_HEADER, 50},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0051[2] = {
    {TYPE_MSG_HEADER, 51},
    {TYPE_STRING_16, 64},
};

MsgField GAME_SERVER_0052[3] = {
    {TYPE_MSG_HEADER, 52},
    {TYPE_WORD, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0053[4] = {
    {TYPE_MSG_HEADER, 53},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0054[3] = {
    {TYPE_MSG_HEADER, 54},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0055[4] = {
    {TYPE_MSG_HEADER, 55},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0056[3] = {
    {TYPE_MSG_HEADER, 56},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0057[3] = {
    {TYPE_MSG_HEADER, 57},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0058[3] = {
    {TYPE_MSG_HEADER, 58},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 48},
};

MsgField GAME_SERVER_0059[5] = {
    {TYPE_MSG_HEADER, 59},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0060[5] = {
    {TYPE_MSG_HEADER, 60},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 128},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0061[2] = {
    {TYPE_MSG_HEADER, 61},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0062[6] = {
    {TYPE_MSG_HEADER, 62},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0063[3] = {
    {TYPE_MSG_HEADER, 63},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0064[6] = {
    {TYPE_MSG_HEADER, 64},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0065[6] = {
    {TYPE_MSG_HEADER, 65},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0066[5] = {
    {TYPE_MSG_HEADER, 66},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0067[3] = {
    {TYPE_MSG_HEADER, 67},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0068[3] = {
    {TYPE_MSG_HEADER, 68},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0069[4] = {
    {TYPE_MSG_HEADER, 69},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0070[5] = {
    {TYPE_MSG_HEADER, 70},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0071[3] = {
    {TYPE_MSG_HEADER, 71},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0072[10] = {
    {TYPE_MSG_HEADER, 72},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0073[2] = {
    {TYPE_MSG_HEADER, 73},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0074[2] = {
    {TYPE_MSG_HEADER, 74},
    {TYPE_ARRAY_32, 64},
};

MsgField GAME_SERVER_0075[4] = {
    {TYPE_MSG_HEADER, 75},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
    {TYPE_STRING_16, 128},
};

MsgField GAME_SERVER_0076[5] = {
    {TYPE_MSG_HEADER, 76},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0077[4] = {
    {TYPE_MSG_HEADER, 77},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0078[1] = {
    {TYPE_MSG_HEADER, 78},
};

MsgField GAME_SERVER_0079[7] = {
    {TYPE_MSG_HEADER, 79},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0080[5] = {
    {TYPE_MSG_HEADER, 80},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0081[2] = {
    {TYPE_MSG_HEADER, 81},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0082[5] = {
    {TYPE_MSG_HEADER, 82},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0083[3] = {
    {TYPE_MSG_HEADER, 83},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
};

MsgField GAME_SERVER_0084[1] = {
    {TYPE_MSG_HEADER, 84},
};

MsgField GAME_SERVER_0085[10] = {
    {TYPE_MSG_HEADER, 85},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 8},
};

MsgField GAME_SERVER_0086[3] = {
    {TYPE_MSG_HEADER, 86},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 8},
};

MsgField GAME_SERVER_0087[3] = {
    {TYPE_MSG_HEADER, 87},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0088[8] = {
    {TYPE_MSG_HEADER, 88},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0089[2] = {
    {TYPE_MSG_HEADER, 89},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0090[2] = {
    {TYPE_MSG_HEADER, 90},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0091[4] = {
    {TYPE_MSG_HEADER, 91},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0092[2] = {
    {TYPE_MSG_HEADER, 92},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0093[3] = {
    {TYPE_MSG_HEADER, 93},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0094[4] = {
    {TYPE_MSG_HEADER, 94},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 8},
};

MsgField GAME_SERVER_0095[4] = {
    {TYPE_MSG_HEADER, 95},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
};

MsgField GAME_SERVER_0096[3] = {
    {TYPE_MSG_HEADER, 96},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0097[3] = {
    {TYPE_MSG_HEADER, 97},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0098[3] = {
    {TYPE_MSG_HEADER, 98},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0099[4] = {
    {TYPE_MSG_HEADER, 99},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0100[3] = {
    {TYPE_MSG_HEADER, 100},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0101[4] = {
    {TYPE_MSG_HEADER, 101},
    {TYPE_AGENT_ID, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0102[3] = {
    {TYPE_MSG_HEADER, 102},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0103[4] = {
    {TYPE_MSG_HEADER, 103},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0104[2] = {
    {TYPE_MSG_HEADER, 104},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0105[2] = {
    {TYPE_MSG_HEADER, 105},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0106[3] = {
    {TYPE_MSG_HEADER, 106},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0107[4] = {
    {TYPE_MSG_HEADER, 107},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0108[4] = {
    {TYPE_MSG_HEADER, 108},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0109[11] = {
    {TYPE_MSG_HEADER, 109},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0110[4] = {
    {TYPE_MSG_HEADER, 110},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0111[2] = {
    {TYPE_MSG_HEADER, 111},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0112[2] = {
    {TYPE_MSG_HEADER, 112},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0113[5] = {
    {TYPE_MSG_HEADER, 113},
    {TYPE_WORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0114[9] = {
    {TYPE_MSG_HEADER, 114},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0115[21] = {
    {TYPE_MSG_HEADER, 115},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0116[2] = {
    {TYPE_MSG_HEADER, 116},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0117[2] = {
    {TYPE_MSG_HEADER, 117},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0118[2] = {
    {TYPE_MSG_HEADER, 118},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0119[8] = {
    {TYPE_MSG_HEADER, 119},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 32},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0120[3] = {
    {TYPE_MSG_HEADER, 120},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0121[6] = {
    {TYPE_MSG_HEADER, 121},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0122[2] = {
    {TYPE_MSG_HEADER, 122},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0123[2] = {
    {TYPE_MSG_HEADER, 123},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0124[2] = {
    {TYPE_MSG_HEADER, 124},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0125[5] = {
    {TYPE_MSG_HEADER, 125},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0126[1] = {
    {TYPE_MSG_HEADER, 126},
};

MsgField GAME_SERVER_0127[2] = {
    {TYPE_MSG_HEADER, 127},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0128[2] = {
    {TYPE_MSG_HEADER, 128},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0129[3] = {
    {TYPE_MSG_HEADER, 129},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0130[4] = {
    {TYPE_MSG_HEADER, 130},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0131[2] = {
    {TYPE_MSG_HEADER, 131},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_SERVER_0132[2] = {
    {TYPE_MSG_HEADER, 132},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0133[2] = {
    {TYPE_MSG_HEADER, 133},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0134[19] = {
    {TYPE_MSG_HEADER, 134},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0135[2] = {
    {TYPE_MSG_HEADER, 135},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0136[4] = {
    {TYPE_MSG_HEADER, 136},
    {TYPE_BYTE, 0},
    {TYPE_VECT3, 0},
    {TYPE_VECT2, 0},
};

MsgField GAME_SERVER_0137[2] = {
    {TYPE_MSG_HEADER, 137},
    {TYPE_ARRAY_32, 64},
};

MsgField GAME_SERVER_0138[4] = {
    {TYPE_MSG_HEADER, 138},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0139[3] = {
    {TYPE_MSG_HEADER, 139},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0140[8] = {
    {TYPE_MSG_HEADER, 140},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
};

MsgField GAME_SERVER_0141[2] = {
    {TYPE_MSG_HEADER, 141},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0142[3] = {
    {TYPE_MSG_HEADER, 142},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0143[3] = {
    {TYPE_MSG_HEADER, 143},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0144[4] = {
    {TYPE_MSG_HEADER, 144},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_SERVER_0145[3] = {
    {TYPE_MSG_HEADER, 145},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0146[3] = {
    {TYPE_MSG_HEADER, 146},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0147[6] = {
    {TYPE_MSG_HEADER, 147},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
    {TYPE_ARRAY_32, 32},
};

MsgField GAME_SERVER_0148[3] = {
    {TYPE_MSG_HEADER, 148},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0149[6] = {
    {TYPE_MSG_HEADER, 149},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0150[3] = {
    {TYPE_MSG_HEADER, 150},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 128},
};

MsgField GAME_SERVER_0151[5] = {
    {TYPE_MSG_HEADER, 151},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0152[3] = {
    {TYPE_MSG_HEADER, 152},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0153[3] = {
    {TYPE_MSG_HEADER, 153},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0154[3] = {
    {TYPE_MSG_HEADER, 154},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0155[3] = {
    {TYPE_MSG_HEADER, 155},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0156[4] = {
    {TYPE_MSG_HEADER, 156},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0157[5] = {
    {TYPE_MSG_HEADER, 157},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0158[4] = {
    {TYPE_MSG_HEADER, 158},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0159[5] = {
    {TYPE_MSG_HEADER, 159},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0160[7] = {
    {TYPE_MSG_HEADER, 160},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0161[4] = {
    {TYPE_MSG_HEADER, 161},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0162[5] = {
    {TYPE_MSG_HEADER, 162},
    {TYPE_DWORD, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0163[8] = {
    {TYPE_MSG_HEADER, 163},
    {TYPE_AGENT_ID, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0164[3] = {
    {TYPE_MSG_HEADER, 164},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0165[4] = {
    {TYPE_MSG_HEADER, 165},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0166[4] = {
    {TYPE_MSG_HEADER, 166},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0167[4] = {
    {TYPE_MSG_HEADER, 167},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0168[3] = {
    {TYPE_MSG_HEADER, 168},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0169[4] = {
    {TYPE_MSG_HEADER, 169},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0170[1] = {
    {TYPE_MSG_HEADER, 170},
};

MsgField GAME_SERVER_0171[3] = {
    {TYPE_MSG_HEADER, 171},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0172[3] = {
    {TYPE_MSG_HEADER, 172},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0173[3] = {
    {TYPE_MSG_HEADER, 173},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0174[2] = {
    {TYPE_MSG_HEADER, 174},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0175[3] = {
    {TYPE_MSG_HEADER, 175},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0176[3] = {
    {TYPE_MSG_HEADER, 176},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0177[7] = {
    {TYPE_MSG_HEADER, 177},
    {TYPE_AGENT_ID, 0},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0178[2] = {
    {TYPE_MSG_HEADER, 178},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0179[3] = {
    {TYPE_MSG_HEADER, 179},
    {TYPE_AGENT_ID, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0180[2] = {
    {TYPE_MSG_HEADER, 180},
    {TYPE_ARRAY_8, 256},
};

MsgField GAME_SERVER_0181[3] = {
    {TYPE_MSG_HEADER, 181},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0182[5] = {
    {TYPE_MSG_HEADER, 182},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0183[1] = {
    {TYPE_MSG_HEADER, 183},
};

MsgField GAME_SERVER_0184[3] = {
    {TYPE_MSG_HEADER, 184},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0185[1] = {
    {TYPE_MSG_HEADER, 185},
};

MsgField GAME_SERVER_0186[4] = {
    {TYPE_MSG_HEADER, 186},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
};

MsgField GAME_SERVER_0187[2] = {
    {TYPE_MSG_HEADER, 187},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0188[3] = {
    {TYPE_MSG_HEADER, 188},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
};

MsgField GAME_SERVER_0189[2] = {
    {TYPE_MSG_HEADER, 189},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0190[2] = {
    {TYPE_MSG_HEADER, 190},
    {TYPE_ARRAY_32, 64},
};

MsgField GAME_SERVER_0191[6] = {
    {TYPE_MSG_HEADER, 191},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 128},
    {TYPE_STRING_16, 128},
};

MsgField GAME_SERVER_0192[3] = {
    {TYPE_MSG_HEADER, 192},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0193[3] = {
    {TYPE_MSG_HEADER, 193},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0194[3] = {
    {TYPE_MSG_HEADER, 194},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0195[2] = {
    {TYPE_MSG_HEADER, 195},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0196[3] = {
    {TYPE_MSG_HEADER, 196},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0197[3] = {
    {TYPE_MSG_HEADER, 197},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0198[4] = {
    {TYPE_MSG_HEADER, 198},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_SERVER_0199[4] = {
    {TYPE_MSG_HEADER, 199},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0200[3] = {
    {TYPE_MSG_HEADER, 200},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0201[3] = {
    {TYPE_MSG_HEADER, 201},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0202[2] = {
    {TYPE_MSG_HEADER, 202},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0203[2] = {
    {TYPE_MSG_HEADER, 203},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0204[5] = {
    {TYPE_MSG_HEADER, 204},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0205[3] = {
    {TYPE_MSG_HEADER, 205},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0206[3] = {
    {TYPE_MSG_HEADER, 206},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0207[2] = {
    {TYPE_MSG_HEADER, 207},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0208[5] = {
    {TYPE_MSG_HEADER, 208},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0209[4] = {
    {TYPE_MSG_HEADER, 209},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0210[2] = {
    {TYPE_MSG_HEADER, 210},
    {TYPE_ARRAY_32, 128},
};

MsgField GAME_SERVER_0211[1] = {
    {TYPE_MSG_HEADER, 211},
};

MsgField GAME_SERVER_0212[1] = {
    {TYPE_MSG_HEADER, 212},
};

MsgField GAME_SERVER_0213[4] = {
    {TYPE_MSG_HEADER, 213},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0214[2] = {
    {TYPE_MSG_HEADER, 214},
    {TYPE_ARRAY_32, 8},
};

MsgField GAME_SERVER_0215[2] = {
    {TYPE_MSG_HEADER, 215},
    {TYPE_ARRAY_32, 4},
};

MsgField GAME_SERVER_0216[5] = {
    {TYPE_MSG_HEADER, 216},
    {TYPE_AGENT_ID, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0217[5] = {
    {TYPE_MSG_HEADER, 217},
    {TYPE_AGENT_ID, 0},
    {TYPE_ARRAY_32, 8},
    {TYPE_ARRAY_32, 8},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0218[2] = {
    {TYPE_MSG_HEADER, 218},
    {TYPE_ARRAY_32, 128},
};

MsgField GAME_SERVER_0219[3] = {
    {TYPE_MSG_HEADER, 219},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0220[3] = {
    {TYPE_MSG_HEADER, 220},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0221[2] = {
    {TYPE_MSG_HEADER, 221},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0222[3] = {
    {TYPE_MSG_HEADER, 222},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0223[3] = {
    {TYPE_MSG_HEADER, 223},
    {TYPE_BYTE, 0},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_SERVER_0224[2] = {
    {TYPE_MSG_HEADER, 224},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0225[4] = {
    {TYPE_MSG_HEADER, 225},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0226[4] = {
    {TYPE_MSG_HEADER, 226},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0227[4] = {
    {TYPE_MSG_HEADER, 227},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0228[5] = {
    {TYPE_MSG_HEADER, 228},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0229[4] = {
    {TYPE_MSG_HEADER, 229},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0230[4] = {
    {TYPE_MSG_HEADER, 230},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0231[6] = {
    {TYPE_MSG_HEADER, 231},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0232[16] = {
    {TYPE_MSG_HEADER, 232},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0233[2] = {
    {TYPE_MSG_HEADER, 233},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0234[2] = {
    {TYPE_MSG_HEADER, 234},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0235[2] = {
    {TYPE_MSG_HEADER, 235},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0236[2] = {
    {TYPE_MSG_HEADER, 236},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0237[3] = {
    {TYPE_MSG_HEADER, 237},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0238[3] = {
    {TYPE_MSG_HEADER, 238},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0239[3] = {
    {TYPE_MSG_HEADER, 239},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0240[3] = {
    {TYPE_MSG_HEADER, 240},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0241[2] = {
    {TYPE_MSG_HEADER, 241},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0242[5] = {
    {TYPE_MSG_HEADER, 242},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
};

MsgField GAME_SERVER_0243[3] = {
    {TYPE_MSG_HEADER, 243},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0244[3] = {
    {TYPE_MSG_HEADER, 244},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0245[12] = {
    {TYPE_MSG_HEADER, 245},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
};

MsgField GAME_SERVER_0246[3] = {
    {TYPE_MSG_HEADER, 246},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0247[2] = {
    {TYPE_MSG_HEADER, 247},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0248[2] = {
    {TYPE_MSG_HEADER, 248},
    {TYPE_ARRAY_32, 16},
};

MsgField GAME_SERVER_0249[2] = {
    {TYPE_MSG_HEADER, 249},
    {TYPE_ARRAY_32, 32},
};

MsgField GAME_SERVER_0250[4] = {
    {TYPE_MSG_HEADER, 250},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0251[3] = {
    {TYPE_MSG_HEADER, 251},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0252[3] = {
    {TYPE_MSG_HEADER, 252},
    {TYPE_STRING_16, 32},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0253[1] = {
    {TYPE_MSG_HEADER, 253},
};

MsgField GAME_SERVER_0254[3] = {
    {TYPE_MSG_HEADER, 254},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0255[2] = {
    {TYPE_MSG_HEADER, 255},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0256[2] = {
    {TYPE_MSG_HEADER, 256},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0257[4] = {
    {TYPE_MSG_HEADER, 257},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_STRING_16, 80},
};

MsgField GAME_SERVER_0258[1] = {
    {TYPE_MSG_HEADER, 258},
};

MsgField GAME_SERVER_0259[2] = {
    {TYPE_MSG_HEADER, 259},
    {TYPE_ARRAY_8, 1024},
};

MsgField GAME_SERVER_0260[1] = {
    {TYPE_MSG_HEADER, 260},
};

MsgField GAME_SERVER_0261[2] = {
    {TYPE_MSG_HEADER, 261},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0262[6] = {
    {TYPE_MSG_HEADER, 262},
    {TYPE_AGENT_ID, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0263[2] = {
    {TYPE_MSG_HEADER, 263},
    {TYPE_AGENT_ID, 0},
};

MsgField GAME_SERVER_0264[3] = {
    {TYPE_MSG_HEADER, 264},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0265[5] = {
    {TYPE_MSG_HEADER, 265},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0266[2] = {
    {TYPE_MSG_HEADER, 266},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0267[2] = {
    {TYPE_MSG_HEADER, 267},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0268[2] = {
    {TYPE_MSG_HEADER, 268},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0269[4] = {
    {TYPE_MSG_HEADER, 269},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0270[3] = {
    {TYPE_MSG_HEADER, 270},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0271[3] = {
    {TYPE_MSG_HEADER, 271},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0272[4] = {
    {TYPE_MSG_HEADER, 272},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0273[3] = {
    {TYPE_MSG_HEADER, 273},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0274[3] = {
    {TYPE_MSG_HEADER, 274},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0275[3] = {
    {TYPE_MSG_HEADER, 275},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0276[3] = {
    {TYPE_MSG_HEADER, 276},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0277[5] = {
    {TYPE_MSG_HEADER, 277},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0278[2] = {
    {TYPE_MSG_HEADER, 278},
    {TYPE_BLOB, 16},
};

MsgField GAME_SERVER_0279[4] = {
    {TYPE_MSG_HEADER, 279},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0280[1] = {
    {TYPE_MSG_HEADER, 280},
};

MsgField GAME_SERVER_0281[14] = {
    {TYPE_MSG_HEADER, 281},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0282[3] = {
    {TYPE_MSG_HEADER, 282},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0283[1] = {
    {TYPE_MSG_HEADER, 283},
};

MsgField GAME_SERVER_0284[2] = {
    {TYPE_MSG_HEADER, 284},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0285[3] = {
    {TYPE_MSG_HEADER, 285},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0286[3] = {
    {TYPE_MSG_HEADER, 286},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
};

MsgField GAME_SERVER_0287[16] = {
    {TYPE_MSG_HEADER, 287},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0288[20] = {
    {TYPE_MSG_HEADER, 288},
    {TYPE_WORD, 0},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0289[4] = {
    {TYPE_MSG_HEADER, 289},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0290[8] = {
    {TYPE_MSG_HEADER, 290},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
    {TYPE_STRING_16, 20},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0291[3] = {
    {TYPE_MSG_HEADER, 291},
    {TYPE_BLOB, 16},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0292[3] = {
    {TYPE_MSG_HEADER, 292},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0293[3] = {
    {TYPE_MSG_HEADER, 293},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0294[10] = {
    {TYPE_MSG_HEADER, 294},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 20},
    {TYPE_STRING_16, 64},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0295[2] = {
    {TYPE_MSG_HEADER, 295},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0296[2] = {
    {TYPE_MSG_HEADER, 296},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0297[2] = {
    {TYPE_MSG_HEADER, 297},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0298[3] = {
    {TYPE_MSG_HEADER, 298},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
};

MsgField GAME_SERVER_0299[3] = {
    {TYPE_MSG_HEADER, 299},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0300[2] = {
    {TYPE_MSG_HEADER, 300},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0301[2] = {
    {TYPE_MSG_HEADER, 301},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0302[3] = {
    {TYPE_MSG_HEADER, 302},
    {TYPE_STRING_16, 256},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0303[3] = {
    {TYPE_MSG_HEADER, 303},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0304[1] = {
    {TYPE_MSG_HEADER, 304},
};

MsgField GAME_SERVER_0305[3] = {
    {TYPE_MSG_HEADER, 305},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0306[2] = {
    {TYPE_MSG_HEADER, 306},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0307[1] = {
    {TYPE_MSG_HEADER, 307},
};

MsgField GAME_SERVER_0308[4] = {
    {TYPE_MSG_HEADER, 308},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0309[2] = {
    {TYPE_MSG_HEADER, 309},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0310[3] = {
    {TYPE_MSG_HEADER, 310},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0311[7] = {
    {TYPE_MSG_HEADER, 311},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
    {TYPE_STRING_16, 8},
};

MsgField GAME_SERVER_0312[3] = {
    {TYPE_MSG_HEADER, 312},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0313[3] = {
    {TYPE_MSG_HEADER, 313},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
};

MsgField GAME_SERVER_0314[3] = {
    {TYPE_MSG_HEADER, 314},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0315[3] = {
    {TYPE_MSG_HEADER, 315},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0316[4] = {
    {TYPE_MSG_HEADER, 316},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0317[5] = {
    {TYPE_MSG_HEADER, 317},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0318[7] = {
    {TYPE_MSG_HEADER, 318},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0319[3] = {
    {TYPE_MSG_HEADER, 319},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0320[3] = {
    {TYPE_MSG_HEADER, 320},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0321[2] = {
    {TYPE_MSG_HEADER, 321},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0322[3] = {
    {TYPE_MSG_HEADER, 322},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0323[3] = {
    {TYPE_MSG_HEADER, 323},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0324[2] = {
    {TYPE_MSG_HEADER, 324},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0325[6] = {
    {TYPE_MSG_HEADER, 325},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0326[5] = {
    {TYPE_MSG_HEADER, 326},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0327[3] = {
    {TYPE_MSG_HEADER, 327},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0328[4] = {
    {TYPE_MSG_HEADER, 328},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0329[1] = {
    {TYPE_MSG_HEADER, 329},
};

MsgField GAME_SERVER_0330[5] = {
    {TYPE_MSG_HEADER, 330},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0331[4] = {
    {TYPE_MSG_HEADER, 331},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0332[3] = {
    {TYPE_MSG_HEADER, 332},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0333[3] = {
    {TYPE_MSG_HEADER, 333},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0334[3] = {
    {TYPE_MSG_HEADER, 334},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0335[3] = {
    {TYPE_MSG_HEADER, 335},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0336[3] = {
    {TYPE_MSG_HEADER, 336},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0337[4] = {
    {TYPE_MSG_HEADER, 337},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0338[5] = {
    {TYPE_MSG_HEADER, 338},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0339[4] = {
    {TYPE_MSG_HEADER, 339},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0340[3] = {
    {TYPE_MSG_HEADER, 340},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0341[2] = {
    {TYPE_MSG_HEADER, 341},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0342[5] = {
    {TYPE_MSG_HEADER, 342},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0343[3] = {
    {TYPE_MSG_HEADER, 343},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0344[3] = {
    {TYPE_MSG_HEADER, 344},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0345[3] = {
    {TYPE_MSG_HEADER, 345},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0346[3] = {
    {TYPE_MSG_HEADER, 346},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0347[10] = {
    {TYPE_MSG_HEADER, 347},
    {TYPE_WORD, 0},
    {TYPE_NESTED_STRUCT, 7},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0348[3] = {
    {TYPE_MSG_HEADER, 348},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0349[10] = {
    {TYPE_MSG_HEADER, 349},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0350[10] = {
    {TYPE_MSG_HEADER, 350},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0351[7] = {
    {TYPE_MSG_HEADER, 351},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0352[15] = {
    {TYPE_MSG_HEADER, 352},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0353[15] = {
    {TYPE_MSG_HEADER, 353},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 64},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0354[4] = {
    {TYPE_MSG_HEADER, 354},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 3},
};

MsgField GAME_SERVER_0355[1] = {
    {TYPE_MSG_HEADER, 355},
};

MsgField GAME_SERVER_0356[1] = {
    {TYPE_MSG_HEADER, 356},
};

MsgField GAME_SERVER_0357[1] = {
    {TYPE_MSG_HEADER, 357},
};

MsgField GAME_SERVER_0358[2] = {
    {TYPE_MSG_HEADER, 358},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0359[3] = {
    {TYPE_MSG_HEADER, 359},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0360[3] = {
    {TYPE_MSG_HEADER, 360},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0361[4] = {
    {TYPE_MSG_HEADER, 361},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_ARRAY_32, 3},
};

MsgField GAME_SERVER_0362[1] = {
    {TYPE_MSG_HEADER, 362},
};

MsgField GAME_SERVER_0363[1] = {
    {TYPE_MSG_HEADER, 363},
};

MsgField GAME_SERVER_0364[2] = {
    {TYPE_MSG_HEADER, 364},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0365[2] = {
    {TYPE_MSG_HEADER, 365},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0366[1] = {
    {TYPE_MSG_HEADER, 366},
};

MsgField GAME_SERVER_0367[1] = {
    {TYPE_MSG_HEADER, 367},
};

MsgField GAME_SERVER_0368[24] = {
    {TYPE_MSG_HEADER, 368},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0369[2] = {
    {TYPE_MSG_HEADER, 369},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0370[2] = {
    {TYPE_MSG_HEADER, 370},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0371[24] = {
    {TYPE_MSG_HEADER, 371},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0372[5] = {
    {TYPE_MSG_HEADER, 372},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 64},
};

MsgField GAME_SERVER_0373[3] = {
    {TYPE_MSG_HEADER, 373},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0374[5] = {
    {TYPE_MSG_HEADER, 374},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 64},
};

MsgField GAME_SERVER_0375[21] = {
    {TYPE_MSG_HEADER, 375},
    {TYPE_WORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_STRING_16, 6},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0376[4] = {
    {TYPE_MSG_HEADER, 376},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0377[2] = {
    {TYPE_MSG_HEADER, 377},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0378[1] = {
    {TYPE_MSG_HEADER, 378},
};

MsgField GAME_SERVER_0379[5] = {
    {TYPE_MSG_HEADER, 379},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0380[2] = {
    {TYPE_MSG_HEADER, 380},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0381[1] = {
    {TYPE_MSG_HEADER, 381},
};

MsgField GAME_SERVER_0382[2] = {
    {TYPE_MSG_HEADER, 382},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0383[5] = {
    {TYPE_MSG_HEADER, 383},
    {TYPE_STRING_16, 122},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0384[2] = {
    {TYPE_MSG_HEADER, 384},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0385[3] = {
    {TYPE_MSG_HEADER, 385},
    {TYPE_STRING_16, 122},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0386[3] = {
    {TYPE_MSG_HEADER, 386},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0387[3] = {
    {TYPE_MSG_HEADER, 387},
    {TYPE_STRING_16, 128},
    {TYPE_STRING_16, 256},
};

MsgField GAME_SERVER_0388[3] = {
    {TYPE_MSG_HEADER, 388},
    {TYPE_STRING_16, 128},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0389[1] = {
    {TYPE_MSG_HEADER, 389},
};

MsgField GAME_SERVER_0390[2] = {
    {TYPE_MSG_HEADER, 390},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0391[5] = {
    {TYPE_MSG_HEADER, 391},
    {TYPE_BLOB, 16},
    {TYPE_STRING_16, 20},
    {TYPE_WORD, 0},
    {TYPE_ARRAY_8, 1024},
};

MsgField GAME_SERVER_0392[1] = {
    {TYPE_MSG_HEADER, 392},
};

MsgField GAME_SERVER_0393[1] = {
    {TYPE_MSG_HEADER, 393},
};

MsgField GAME_SERVER_0394[2] = {
    {TYPE_MSG_HEADER, 394},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0395[2] = {
    {TYPE_MSG_HEADER, 395},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0396[2] = {
    {TYPE_MSG_HEADER, 396},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0397[1] = {
    {TYPE_MSG_HEADER, 397},
};

MsgField GAME_SERVER_0398[4] = {
    {TYPE_MSG_HEADER, 398},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0399[3] = {
    {TYPE_MSG_HEADER, 399},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0400[2] = {
    {TYPE_MSG_HEADER, 400},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0401[9] = {
    {TYPE_MSG_HEADER, 401},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 64},
    {TYPE_NESTED_STRUCT, 8},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0402[3] = {
    {TYPE_MSG_HEADER, 402},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0403[2] = {
    {TYPE_MSG_HEADER, 403},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0404[7] = {
    {TYPE_MSG_HEADER, 404},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BLOB, 8},
};

MsgField GAME_SERVER_0405[2] = {
    {TYPE_MSG_HEADER, 405},
    {TYPE_ARRAY_8, 1024},
};

MsgField GAME_SERVER_0406[4] = {
    {TYPE_MSG_HEADER, 406},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0407[2] = {
    {TYPE_MSG_HEADER, 407},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0408[7] = {
    {TYPE_MSG_HEADER, 408},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0409[3] = {
    {TYPE_MSG_HEADER, 409},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0410[2] = {
    {TYPE_MSG_HEADER, 410},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0411[2] = {
    {TYPE_MSG_HEADER, 411},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0412[18] = {
    {TYPE_MSG_HEADER, 412},
    {TYPE_DWORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_NESTED_STRUCT, 2},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 48},
};

MsgField GAME_SERVER_0413[1] = {
    {TYPE_MSG_HEADER, 413},
};

MsgField GAME_SERVER_0414[4] = {
    {TYPE_MSG_HEADER, 414},
    {TYPE_NESTED_STRUCT, 16},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0415[9] = {
    {TYPE_MSG_HEADER, 415},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
    {TYPE_STRING_16, 122},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0416[2] = {
    {TYPE_MSG_HEADER, 416},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0417[7] = {
    {TYPE_MSG_HEADER, 417},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0418[4] = {
    {TYPE_MSG_HEADER, 418},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0419[14] = {
    {TYPE_MSG_HEADER, 419},
    {TYPE_AGENT_ID, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_VECT2, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
    {TYPE_BLOB, 8},
};

MsgField GAME_SERVER_0420[7] = {
    {TYPE_MSG_HEADER, 420},
    {TYPE_BLOB, 24},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0421[10] = {
    {TYPE_MSG_HEADER, 421},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 122},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 122},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0422[2] = {
    {TYPE_MSG_HEADER, 422},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0423[3] = {
    {TYPE_MSG_HEADER, 423},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0424[3] = {
    {TYPE_MSG_HEADER, 424},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0425[2] = {
    {TYPE_MSG_HEADER, 425},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0426[2] = {
    {TYPE_MSG_HEADER, 426},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0427[5] = {
    {TYPE_MSG_HEADER, 427},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0428[7] = {
    {TYPE_MSG_HEADER, 428},
    {TYPE_WORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 20},
};

MsgField GAME_SERVER_0429[13] = {
    {TYPE_MSG_HEADER, 429},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 6},
};

MsgField GAME_SERVER_0430[2] = {
    {TYPE_MSG_HEADER, 430},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0431[2] = {
    {TYPE_MSG_HEADER, 431},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0432[4] = {
    {TYPE_MSG_HEADER, 432},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0433[3] = {
    {TYPE_MSG_HEADER, 433},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0434[7] = {
    {TYPE_MSG_HEADER, 434},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0435[1] = {
    {TYPE_MSG_HEADER, 435},
};

MsgField GAME_SERVER_0436[7] = {
    {TYPE_MSG_HEADER, 436},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_DWORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0437[1] = {
    {TYPE_MSG_HEADER, 437},
};

MsgField GAME_SERVER_0438[2] = {
    {TYPE_MSG_HEADER, 438},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0439[2] = {
    {TYPE_MSG_HEADER, 439},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0440[1] = {
    {TYPE_MSG_HEADER, 440},
};

MsgField GAME_SERVER_0441[1] = {
    {TYPE_MSG_HEADER, 441},
};

MsgField GAME_SERVER_0442[4] = {
    {TYPE_MSG_HEADER, 442},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0443[2] = {
    {TYPE_MSG_HEADER, 443},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0444[2] = {
    {TYPE_MSG_HEADER, 444},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0445[2] = {
    {TYPE_MSG_HEADER, 445},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0446[6] = {
    {TYPE_MSG_HEADER, 446},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_STRING_16, 20},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0447[3] = {
    {TYPE_MSG_HEADER, 447},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0448[2] = {
    {TYPE_MSG_HEADER, 448},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0449[6] = {
    {TYPE_MSG_HEADER, 449},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0450[4] = {
    {TYPE_MSG_HEADER, 450},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0451[2] = {
    {TYPE_MSG_HEADER, 451},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0452[2] = {
    {TYPE_MSG_HEADER, 452},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0453[2] = {
    {TYPE_MSG_HEADER, 453},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0454[2] = {
    {TYPE_MSG_HEADER, 454},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0455[2] = {
    {TYPE_MSG_HEADER, 455},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0456[2] = {
    {TYPE_MSG_HEADER, 456},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0457[2] = {
    {TYPE_MSG_HEADER, 457},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0458[4] = {
    {TYPE_MSG_HEADER, 458},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0459[3] = {
    {TYPE_MSG_HEADER, 459},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0460[3] = {
    {TYPE_MSG_HEADER, 460},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0461[3] = {
    {TYPE_MSG_HEADER, 461},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0462[3] = {
    {TYPE_MSG_HEADER, 462},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0463[3] = {
    {TYPE_MSG_HEADER, 463},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0464[4] = {
    {TYPE_MSG_HEADER, 464},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0465[2] = {
    {TYPE_MSG_HEADER, 465},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0466[2] = {
    {TYPE_MSG_HEADER, 466},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0467[2] = {
    {TYPE_MSG_HEADER, 467},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0468[1] = {
    {TYPE_MSG_HEADER, 468},
};

MsgField GAME_SERVER_0469[2] = {
    {TYPE_MSG_HEADER, 469},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0470[6] = {
    {TYPE_MSG_HEADER, 470},
    {TYPE_ARRAY_16, 16},
    {TYPE_NESTED_STRUCT, 16},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0471[1] = {
    {TYPE_MSG_HEADER, 471},
};

MsgField GAME_SERVER_0472[4] = {
    {TYPE_MSG_HEADER, 472},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0473[3] = {
    {TYPE_MSG_HEADER, 473},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0474[3] = {
    {TYPE_MSG_HEADER, 474},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0475[3] = {
    {TYPE_MSG_HEADER, 475},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0476[14] = {
    {TYPE_MSG_HEADER, 476},
    {TYPE_WORD, 0},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_STRING_16, 32},
    {TYPE_STRING_16, 20},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
    {TYPE_DWORD, 0},
};

MsgField GAME_SERVER_0477[2] = {
    {TYPE_MSG_HEADER, 477},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0478[2] = {
    {TYPE_MSG_HEADER, 478},
    {TYPE_WORD, 0},
};

MsgField GAME_SERVER_0479[4] = {
    {TYPE_MSG_HEADER, 479},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0480[4] = {
    {TYPE_MSG_HEADER, 480},
    {TYPE_WORD, 0},
    {TYPE_BYTE, 0},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0481[2] = {
    {TYPE_MSG_HEADER, 481},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0482[2] = {
    {TYPE_MSG_HEADER, 482},
    {TYPE_STRING_16, 122},
};

MsgField GAME_SERVER_0483[2] = {
    {TYPE_MSG_HEADER, 483},
    {TYPE_BYTE, 0},
};

MsgField GAME_SERVER_0484[2] = {
    {TYPE_MSG_HEADER, 484},
    {TYPE_BYTE, 0},
};

MsgFormat AUTH_CLIENT_FORMATS[57] = {
// header | field_count | fields | max_size
    {0,   2,  AUTH_CLIENT_0000, 6},
    {1,   3,  AUTH_CLIENT_0001, 130},
    {2,   3,  AUTH_CLIENT_0002, 22},
    {3,   5,  AUTH_CLIENT_0003, 206},
    {4,   1,  AUTH_CLIENT_0004, 2},
    {5,   6,  AUTH_CLIENT_0005, 178},
    {6,   3,  AUTH_CLIENT_0006, 10},
    {7,   3,  AUTH_CLIENT_0007, 46},
    {8,   3,  AUTH_CLIENT_0008, 46},
    {9,   4,  AUTH_CLIENT_0009, 114},
    {10,  3,  AUTH_CLIENT_0010, 46},
    {11,  5,  AUTH_CLIENT_0011, 18},
    {12,  4,  AUTH_CLIENT_0012, 26},
    {13,  2,  AUTH_CLIENT_0013, 6},
    {14,  2,  AUTH_CLIENT_0014, 6},
    {15,  1,  AUTH_CLIENT_0015, 2},
    {16,  2,  AUTH_CLIENT_0016, 6},
    {17,  2,  AUTH_CLIENT_0017, 514},
    {18,  1,  AUTH_CLIENT_0018, 2},
    {19,  1,  AUTH_CLIENT_0019, 2},
    {20,  6,  AUTH_CLIENT_0020, 778},
    {21,  2,  AUTH_CLIENT_0021, 6},
    {22,  2,  AUTH_CLIENT_0022, 6},
    {23,  2,  AUTH_CLIENT_0023, 6},
    {24,  3,  AUTH_CLIENT_0024, 134},
    {25,  5,  AUTH_CLIENT_0025, 50},
    {26,  5,  AUTH_CLIENT_0026, 90},
    {27,  4,  AUTH_CLIENT_0027, 62},
    {28,  3,  AUTH_CLIENT_0028, 58},
    {29,  3,  AUTH_CLIENT_0029, 10},
    {30,  4,  AUTH_CLIENT_0030, 62},
    {31,  23, AUTH_CLIENT_0031, 1386},
    {32,  3,  AUTH_CLIENT_0032, 522},
    {33,  3,  AUTH_CLIENT_0033, 10},
    {34,  2,  AUTH_CLIENT_0034, 6},
    {35,  2,  AUTH_CLIENT_0035, 6},
    {36,  4,  AUTH_CLIENT_0036, 166},
    {37,  7,  AUTH_CLIENT_0037, 38},
    {38,  2,  AUTH_CLIENT_0038, 3},
    {39,  2,  AUTH_CLIENT_0039, 6},
    {40,  9,  AUTH_CLIENT_0040, 382},
    {41,  7,  AUTH_CLIENT_0041, 26},
    {42,  4,  AUTH_CLIENT_0042, 86},
    {43,  4,  AUTH_CLIENT_0043, 1038},
    {44,  23, AUTH_CLIENT_0044, 1898},
    {45,  2,  AUTH_CLIENT_0045, 6},
    {46,  1,  AUTH_CLIENT_0046, 2},
    {47,  1,  AUTH_CLIENT_0047, 2},
    {48,  2,  AUTH_CLIENT_0048, 6},
    {49,  2,  AUTH_CLIENT_0049, 6},
    {50,  3,  AUTH_CLIENT_0050, 26},
    {51,  6,  AUTH_CLIENT_0051, 54},
    {52,  4,  AUTH_CLIENT_0052, 14},
    {53,  2,  AUTH_CLIENT_0053, 6},
    {54,  23, AUTH_CLIENT_0054, 2142},
    {55,  4,  AUTH_CLIENT_0055, 86},
    {56,  5,  AUTH_CLIENT_0056, 78},
};

MsgFormat AUTH_SERVER_FORMATS[39] = {
// header | field_count | fields | max_size
    {0,   2,  AUTH_SERVER_0000, 6},
    {1,   3,  AUTH_SERVER_0001, 10},
    {2,   3,  AUTH_SERVER_0002, 10},
    {3,   3,  AUTH_SERVER_0003, 10},
    {4,   3,  AUTH_SERVER_0004, 4102},
    {5,   1,  AUTH_SERVER_0005, 2},
    {6,   7,  AUTH_SERVER_0006, 42},
    {7,   6,  AUTH_SERVER_0007, 134},
    {8,   5,  AUTH_SERVER_0008, 38},
    {9,   6,  AUTH_SERVER_0009, 42},
    {10,  5,  AUTH_SERVER_0010, 66},
    {11,  5,  AUTH_SERVER_0011, 102},
    {12,  4,  AUTH_SERVER_0012, 558},
    {13,  5,  AUTH_SERVER_0013, 1034},
    {14,  4,  AUTH_SERVER_0014, 46},
    {15,  1,  AUTH_SERVER_0015, 2},
    {16,  7,  AUTH_SERVER_0016, 618},
    {17,  12, AUTH_SERVER_0017, 275},
    {18,  7,  AUTH_SERVER_0018, 618},
    {19,  2,  AUTH_SERVER_0019, 6},
    {20,  3,  AUTH_SERVER_0020, 10},
    {21,  7,  AUTH_SERVER_0021, 34},
    {22,  3,  AUTH_SERVER_0022, 2058},
    {23,  2,  AUTH_SERVER_0023, 4102},
    {24,  5,  AUTH_SERVER_0024, 226},
    {25,  1,  AUTH_SERVER_0025, 2},
    {26,  5,  AUTH_SERVER_0026, 32},
    {27,  5,  AUTH_SERVER_0027, 18},
    {28,  3,  AUTH_SERVER_0028, 10},
    {29,  4,  AUTH_SERVER_0029, 14},
    {30,  10, AUTH_SERVER_0030, 38},
    {31,  4,  AUTH_SERVER_0031, 142},
    {32,  6,  AUTH_SERVER_0032, 50},
    {33,  6,  AUTH_SERVER_0033, 50},
    {34,  3,  AUTH_SERVER_0034, 18},
    {35,  7,  AUTH_SERVER_0035, 90},
    {36,  7,  AUTH_SERVER_0036, 94},
    {37,  1,  AUTH_SERVER_0037, 2},
    {38,  3,  AUTH_SERVER_0038, 10},
};

MsgFormat GAME_CLIENT_FORMATS[193] = {
// header | field_count | fields | max_size
    {0,   2,  GAME_CLIENT_0000, 6},
    {1,   1,  GAME_CLIENT_0001, 2},
    {2,   3,  GAME_CLIENT_0002, 7},
    {3,   2,  GAME_CLIENT_0003, 6},
    {4,   1,  GAME_CLIENT_0004, 2},
    {5,   3,  GAME_CLIENT_0005, 7},
    {6,   1,  GAME_CLIENT_0006, 2},
    {7,   1,  GAME_CLIENT_0007, 2},
    {8,   1,  GAME_CLIENT_0008, 2},
    {9,   2,  GAME_CLIENT_0009, 6},
    {10,  15, GAME_CLIENT_0010, 238},
    {11,  1,  GAME_CLIENT_0011, 2},
    {12,  1,  GAME_CLIENT_0012, 2},
    {13,  4,  GAME_CLIENT_0013, 14},
    {14,  4,  GAME_CLIENT_0014, 14},
    {15,  4,  GAME_CLIENT_0015, 142},
    {16,  2,  GAME_CLIENT_0016, 6},
    {17,  2,  GAME_CLIENT_0017, 6},
    {18,  1,  GAME_CLIENT_0018, 2},
    {19,  3,  GAME_CLIENT_0019, 7},
    {20,  3,  GAME_CLIENT_0020, 10},
    {21,  3,  GAME_CLIENT_0021, 10},
    {22,  2,  GAME_CLIENT_0022, 6},
    {23,  2,  GAME_CLIENT_0023, 6},
    {24,  3,  GAME_CLIENT_0024, 10},
    {25,  4,  GAME_CLIENT_0025, 18},
    {26,  3,  GAME_CLIENT_0026, 14},
    {27,  5,  GAME_CLIENT_0027, 18},
    {28,  4,  GAME_CLIENT_0028, 14},
    {29,  2,  GAME_CLIENT_0029, 4},
    {30,  2,  GAME_CLIENT_0030, 4},
    {31,  2,  GAME_CLIENT_0031, 3},
    {32,  3,  GAME_CLIENT_0032, 10},
    {33,  3,  GAME_CLIENT_0033, 10},
    {34,  3,  GAME_CLIENT_0034, 7},
    {35,  3,  GAME_CLIENT_0035, 10},
    {36,  4,  GAME_CLIENT_0036, 14},
    {37,  3,  GAME_CLIENT_0037, 7},
    {38,  5,  GAME_CLIENT_0038, 15},
    {39,  1,  GAME_CLIENT_0039, 2},
    {40,  2,  GAME_CLIENT_0040, 6},
    {41,  2,  GAME_CLIENT_0041, 6},
    {42,  3,  GAME_CLIENT_0042, 74},
    {43,  3,  GAME_CLIENT_0043, 7},
    {44,  1,  GAME_CLIENT_0044, 2},
    {45,  1,  GAME_CLIENT_0045, 2},
    {46,  2,  GAME_CLIENT_0046, 6},
    {47,  2,  GAME_CLIENT_0047, 6},
    {48,  3,  GAME_CLIENT_0048, 10},
    {49,  2,  GAME_CLIENT_0049, 3},
    {50,  2,  GAME_CLIENT_0050, 6},
    {51,  4,  GAME_CLIENT_0051, 27},
    {52,  4,  GAME_CLIENT_0052, 11},
    {53,  4,  GAME_CLIENT_0053, 82},
    {54,  3,  GAME_CLIENT_0054, 26},
    {55,  9,  GAME_CLIENT_0055, 14},
    {56,  3,  GAME_CLIENT_0056, 7},
    {57,  3,  GAME_CLIENT_0057, 26},
    {58,  2,  GAME_CLIENT_0058, 6},
    {59,  2,  GAME_CLIENT_0059, 6},
    {60,  5,  GAME_CLIENT_0060, 26},
    {61,  3,  GAME_CLIENT_0061, 14},
    {62,  3,  GAME_CLIENT_0062, 7},
    {63,  3,  GAME_CLIENT_0063, 10},
    {64,  3,  GAME_CLIENT_0064, 7},
    {65,  2,  GAME_CLIENT_0065, 6},
    {66,  2,  GAME_CLIENT_0066, 3},
    {67,  2,  GAME_CLIENT_0067, 6},
    {68,  2,  GAME_CLIENT_0068, 262},
    {69,  5,  GAME_CLIENT_0069, 15},
    {70,  3,  GAME_CLIENT_0070, 14},
    {71,  3,  GAME_CLIENT_0071, 14},
    {72,  2,  GAME_CLIENT_0072, 6},
    {73,  6,  GAME_CLIENT_0073, 147},
    {74,  2,  GAME_CLIENT_0074, 3},
    {75,  7,  GAME_CLIENT_0075, 148},
    {76,  8,  GAME_CLIENT_0076, 187},
    {77,  3,  GAME_CLIENT_0077, 247},
    {78,  4,  GAME_CLIENT_0078, 6},
    {79,  5,  GAME_CLIENT_0079, 10},
    {80,  3,  GAME_CLIENT_0080, 7},
    {81,  3,  GAME_CLIENT_0081, 10},
    {82,  2,  GAME_CLIENT_0082, 6},
    {83,  8,  GAME_CLIENT_0083, 15},
    {84,  2,  GAME_CLIENT_0084, 6},
    {85,  3,  GAME_CLIENT_0085, 8},
    {86,  3,  GAME_CLIENT_0086, 10},
    {87,  2,  GAME_CLIENT_0087, 6},
    {88,  1,  GAME_CLIENT_0088, 2},
    {89,  1,  GAME_CLIENT_0089, 2},
    {90,  2,  GAME_CLIENT_0090, 6},
    {91,  5,  GAME_CLIENT_0091, 18},
    {92,  3,  GAME_CLIENT_0092, 42},
    {93,  6,  GAME_CLIENT_0093, 22},
    {94,  5,  GAME_CLIENT_0094, 18},
    {95,  3,  GAME_CLIENT_0095, 4},
    {96,  2,  GAME_CLIENT_0096, 66},
    {97,  3,  GAME_CLIENT_0097, 67},
    {98,  1,  GAME_CLIENT_0098, 2},
    {99,  3,  GAME_CLIENT_0099, 282},
    {100, 2,  GAME_CLIENT_0100, 6},
    {101, 4,  GAME_CLIENT_0101, 11},
    {102, 5,  GAME_CLIENT_0102, 10},
    {103, 2,  GAME_CLIENT_0103, 4},
    {104, 2,  GAME_CLIENT_0104, 6},
    {105, 3,  GAME_CLIENT_0105, 26},
    {106, 3,  GAME_CLIENT_0106, 7},
    {107, 3,  GAME_CLIENT_0107, 10},
    {108, 3,  GAME_CLIENT_0108, 10},
    {109, 3,  GAME_CLIENT_0109, 10},
    {110, 3,  GAME_CLIENT_0110, 10},
    {111, 2,  GAME_CLIENT_0111, 6},
    {112, 5,  GAME_CLIENT_0112, 37},
    {113, 4,  GAME_CLIENT_0113, 9},
    {114, 2,  GAME_CLIENT_0114, 4},
    {115, 3,  GAME_CLIENT_0115, 4},
    {116, 5,  GAME_CLIENT_0116, 13},
    {117, 1,  GAME_CLIENT_0117, 2},
    {118, 4,  GAME_CLIENT_0118, 12},
    {119, 1,  GAME_CLIENT_0119, 2},
    {120, 1,  GAME_CLIENT_0120, 2},
    {121, 1,  GAME_CLIENT_0121, 2},
    {122, 2,  GAME_CLIENT_0122, 3},
    {123, 3,  GAME_CLIENT_0123, 10},
    {124, 4,  GAME_CLIENT_0124, 9},
    {125, 2,  GAME_CLIENT_0125, 6},
    {126, 3,  GAME_CLIENT_0126, 7},
    {127, 3,  GAME_CLIENT_0127, 8},
    {128, 1,  GAME_CLIENT_0128, 2},
    {129, 1,  GAME_CLIENT_0129, 2},
    {130, 2,  GAME_CLIENT_0130, 3},
    {131, 3,  GAME_CLIENT_0131, 4},
    {132, 2,  GAME_CLIENT_0132, 4},
    {133, 7,  GAME_CLIENT_0133, 21},
    {134, 4,  GAME_CLIENT_0134, 5},
    {135, 1,  GAME_CLIENT_0135, 2},
    {136, 1,  GAME_CLIENT_0136, 2},
    {137, 1,  GAME_CLIENT_0137, 2},
    {138, 3,  GAME_CLIENT_0138, 50},
    {139, 1,  GAME_CLIENT_0139, 2},
    {140, 3,  GAME_CLIENT_0140, 5},
    {141, 2,  GAME_CLIENT_0141, 6},
    {142, 1,  GAME_CLIENT_0142, 2},
    {143, 2,  GAME_CLIENT_0143, 18},
    {144, 3,  GAME_CLIENT_0144, 4},
    {145, 2,  GAME_CLIENT_0145, 118},
    {146, 2,  GAME_CLIENT_0146, 4},
    {147, 2,  GAME_CLIENT_0147, 3},
    {148, 2,  GAME_CLIENT_0148, 3},
    {149, 4,  GAME_CLIENT_0149, 9},
    {150, 1,  GAME_CLIENT_0150, 2},
    {151, 1,  GAME_CLIENT_0151, 2},
    {152, 1,  GAME_CLIENT_0152, 2},
    {153, 1,  GAME_CLIENT_0153, 2},
    {154, 2,  GAME_CLIENT_0154, 3},
    {155, 2,  GAME_CLIENT_0155, 4},
    {156, 2,  GAME_CLIENT_0156, 4},
    {157, 2,  GAME_CLIENT_0157, 4},
    {158, 2,  GAME_CLIENT_0158, 4},
    {159, 2,  GAME_CLIENT_0159, 4},
    {160, 2,  GAME_CLIENT_0160, 42},
    {161, 1,  GAME_CLIENT_0161, 2},
    {162, 1,  GAME_CLIENT_0162, 2},
    {163, 3,  GAME_CLIENT_0163, 131},
    {164, 2,  GAME_CLIENT_0164, 3},
    {165, 4,  GAME_CLIENT_0165, 9},
    {166, 1,  GAME_CLIENT_0166, 2},
    {167, 2,  GAME_CLIENT_0167, 4},
    {168, 2,  GAME_CLIENT_0168, 4},
    {169, 4,  GAME_CLIENT_0169, 69},
    {170, 1,  GAME_CLIENT_0170, 2},
    {171, 2,  GAME_CLIENT_0171, 4},
    {172, 2,  GAME_CLIENT_0172, 4},
    {173, 2,  GAME_CLIENT_0173, 3},
    {174, 2,  GAME_CLIENT_0174, 3},
    {175, 3,  GAME_CLIENT_0175, 19},
    {176, 6,  GAME_CLIENT_0176, 9},
    {177, 2,  GAME_CLIENT_0177, 3},
    {178, 3,  GAME_CLIENT_0178, 46},
    {179, 3,  GAME_CLIENT_0179, 46},
    {180, 4,  GAME_CLIENT_0180, 71},
    {181, 4,  GAME_CLIENT_0181, 23},
    {182, 4,  GAME_CLIENT_0182, 23},
    {183, 3,  GAME_CLIENT_0183, 46},
    {184, 3,  GAME_CLIENT_0184, 8},
    {185, 3,  GAME_CLIENT_0185, 46},
    {186, 2,  GAME_CLIENT_0186, 6},
    {187, 2,  GAME_CLIENT_0187, 6},
    {188, 3,  GAME_CLIENT_0188, 46},
    {189, 3,  GAME_CLIENT_0189, 518},
    {190, 4,  GAME_CLIENT_0190, 71},
    {191, 3,  GAME_CLIENT_0191, 67},
    {192, 3,  GAME_CLIENT_0192, 10},
};

MsgFormat GAME_SERVER_FORMATS[485] = {
// header | field_count | fields | max_size
    {0,   2,  GAME_SERVER_0000, 6},
    {1,   2,  GAME_SERVER_0001, 3},
    {2,   3,  GAME_SERVER_0002, 7},
    {3,   2,  GAME_SERVER_0003, 6},
    {4,   3,  GAME_SERVER_0004, 7},
    {5,   2,  GAME_SERVER_0005, 6},
    {6,   1,  GAME_SERVER_0006, 2},
    {7,   1,  GAME_SERVER_0007, 2},
    {8,   1,  GAME_SERVER_0008, 2},
    {9,   1,  GAME_SERVER_0009, 2},
    {10,  3,  GAME_SERVER_0010, 10},
    {11,  2,  GAME_SERVER_0011, 6},
    {12,  1,  GAME_SERVER_0012, 2},
    {13,  2,  GAME_SERVER_0013, 6},
    {14,  5,  GAME_SERVER_0014, 1034},
    {15,  4,  GAME_SERVER_0015, 8},
    {16,  2,  GAME_SERVER_0016, 3},
    {17,  2,  GAME_SERVER_0017, 4},
    {18,  2,  GAME_SERVER_0018, 4},
    {19,  2,  GAME_SERVER_0019, 3},
    {20,  4,  GAME_SERVER_0020, 11},
    {21,  3,  GAME_SERVER_0021, 7},
    {22,  2,  GAME_SERVER_0022, 246},
    {23,  6,  GAME_SERVER_0023, 13},
    {24,  2,  GAME_SERVER_0024, 38},
    {25,  5,  GAME_SERVER_0025, 265},
    {26,  4,  GAME_SERVER_0026, 264},
    {27,  1,  GAME_SERVER_0027, 2},
    {28,  3,  GAME_SERVER_0028, 5},
    {29,  2,  GAME_SERVER_0029, 518},
    {30,  2,  GAME_SERVER_0030, 6},
    {31,  2,  GAME_SERVER_0031, 6},
    {32,  24, GAME_SERVER_0032, 99},
    {33,  2,  GAME_SERVER_0033, 6},
    {34,  3,  GAME_SERVER_0034, 10},
    {35,  3,  GAME_SERVER_0035, 10},
    {36,  3,  GAME_SERVER_0036, 10},
    {37,  4,  GAME_SERVER_0037, 15},
    {38,  3,  GAME_SERVER_0038, 7},
    {39,  3,  GAME_SERVER_0039, 10},
    {40,  2,  GAME_SERVER_0040, 6},
    {41,  5,  GAME_SERVER_0041, 18},
    {42,  6,  GAME_SERVER_0042, 22},
    {43,  4,  GAME_SERVER_0043, 11},
    {44,  4,  GAME_SERVER_0044, 16},
    {45,  2,  GAME_SERVER_0045, 6},
    {46,  4,  GAME_SERVER_0046, 14},
    {47,  3,  GAME_SERVER_0047, 10},
    {48,  8,  GAME_SERVER_0048, 90},
    {49,  2,  GAME_SERVER_0049, 66},
    {50,  7,  GAME_SERVER_0050, 26},
    {51,  2,  GAME_SERVER_0051, 130},
    {52,  3,  GAME_SERVER_0052, 8},
    {53,  4,  GAME_SERVER_0053, 14},
    {54,  3,  GAME_SERVER_0054, 10},
    {55,  4,  GAME_SERVER_0055, 8},
    {56,  3,  GAME_SERVER_0056, 7},
    {57,  3,  GAME_SERVER_0057, 7},
    {58,  3,  GAME_SERVER_0058, 202},
    {59,  5,  GAME_SERVER_0059, 9},
    {60,  5,  GAME_SERVER_0060, 279},
    {61,  2,  GAME_SERVER_0061, 6},
    {62,  6,  GAME_SERVER_0062, 20},
    {63,  3,  GAME_SERVER_0063, 10},
    {64,  6,  GAME_SERVER_0064, 20},
    {65,  6,  GAME_SERVER_0065, 20},
    {66,  5,  GAME_SERVER_0066, 18},
    {67,  3,  GAME_SERVER_0067, 10},
    {68,  3,  GAME_SERVER_0068, 10},
    {69,  4,  GAME_SERVER_0069, 14},
    {70,  5,  GAME_SERVER_0070, 20},
    {71,  3,  GAME_SERVER_0071, 7},
    {72,  10, GAME_SERVER_0072, 72},
    {73,  2,  GAME_SERVER_0073, 6},
    {74,  2,  GAME_SERVER_0074, 262},
    {75,  4,  GAME_SERVER_0075, 518},
    {76,  5,  GAME_SERVER_0076, 18},
    {77,  4,  GAME_SERVER_0077, 14},
    {78,  1,  GAME_SERVER_0078, 2},
    {79,  7,  GAME_SERVER_0079, 60},
    {80,  5,  GAME_SERVER_0080, 18},
    {81,  2,  GAME_SERVER_0081, 6},
    {82,  5,  GAME_SERVER_0082, 18},
    {83,  3,  GAME_SERVER_0083, 262},
    {84,  1,  GAME_SERVER_0084, 2},
    {85,  10, GAME_SERVER_0085, 44},
    {86,  3,  GAME_SERVER_0086, 42},
    {87,  3,  GAME_SERVER_0087, 70},
    {88,  8,  GAME_SERVER_0088, 87},
    {89,  2,  GAME_SERVER_0089, 6},
    {90,  2,  GAME_SERVER_0090, 6},
    {91,  4,  GAME_SERVER_0091, 14},
    {92,  2,  GAME_SERVER_0092, 246},
    {93,  3,  GAME_SERVER_0093, 5},
    {94,  4,  GAME_SERVER_0094, 23},
    {95,  4,  GAME_SERVER_0095, 79},
    {96,  3,  GAME_SERVER_0096, 5},
    {97,  3,  GAME_SERVER_0097, 10},
    {98,  3,  GAME_SERVER_0098, 10},
    {99,  4,  GAME_SERVER_0099, 8},
    {100, 3,  GAME_SERVER_0100, 7},
    {101, 4,  GAME_SERVER_0101, 16},
    {102, 3,  GAME_SERVER_0102, 12},
    {103, 4,  GAME_SERVER_0103, 12},
    {104, 2,  GAME_SERVER_0104, 6},
    {105, 2,  GAME_SERVER_0105, 6},
    {106, 3,  GAME_SERVER_0106, 7},
    {107, 4,  GAME_SERVER_0107, 14},
    {108, 4,  GAME_SERVER_0108, 14},
    {109, 11, GAME_SERVER_0109, 42},
    {110, 4,  GAME_SERVER_0110, 14},
    {111, 2,  GAME_SERVER_0111, 3},
    {112, 2,  GAME_SERVER_0112, 6},
    {113, 5,  GAME_SERVER_0113, 16},
    {114, 9,  GAME_SERVER_0114, 17},
    {115, 21, GAME_SERVER_0115, 125},
    {116, 2,  GAME_SERVER_0116, 6},
    {117, 2,  GAME_SERVER_0117, 4},
    {118, 2,  GAME_SERVER_0118, 4},
    {119, 8,  GAME_SERVER_0119, 391},
    {120, 3,  GAME_SERVER_0120, 8},
    {121, 6,  GAME_SERVER_0121, 34},
    {122, 2,  GAME_SERVER_0122, 6},
    {123, 2,  GAME_SERVER_0123, 6},
    {124, 2,  GAME_SERVER_0124, 6},
    {125, 5,  GAME_SERVER_0125, 267},
    {126, 1,  GAME_SERVER_0126, 2},
    {127, 2,  GAME_SERVER_0127, 246},
    {128, 2,  GAME_SERVER_0128, 6},
    {129, 3,  GAME_SERVER_0129, 8},
    {130, 4,  GAME_SERVER_0130, 11},
    {131, 2,  GAME_SERVER_0131, 70},
    {132, 2,  GAME_SERVER_0132, 3},
    {133, 2,  GAME_SERVER_0133, 3},
    {134, 19, GAME_SERVER_0134, 46},
    {135, 2,  GAME_SERVER_0135, 3},
    {136, 4,  GAME_SERVER_0136, 23},
    {137, 2,  GAME_SERVER_0137, 262},
    {138, 4,  GAME_SERVER_0138, 14},
    {139, 3,  GAME_SERVER_0139, 10},
    {140, 8,  GAME_SERVER_0140, 41},
    {141, 2,  GAME_SERVER_0141, 6},
    {142, 3,  GAME_SERVER_0142, 7},
    {143, 3,  GAME_SERVER_0143, 10},
    {144, 4,  GAME_SERVER_0144, 76},
    {145, 3,  GAME_SERVER_0145, 10},
    {146, 3,  GAME_SERVER_0146, 10},
    {147, 6,  GAME_SERVER_0147, 662},
    {148, 3,  GAME_SERVER_0148, 8},
    {149, 6,  GAME_SERVER_0149, 22},
    {150, 3,  GAME_SERVER_0150, 259},
    {151, 5,  GAME_SERVER_0151, 15},
    {152, 3,  GAME_SERVER_0152, 5},
    {153, 3,  GAME_SERVER_0153, 10},
    {154, 3,  GAME_SERVER_0154, 70},
    {155, 3,  GAME_SERVER_0155, 10},
    {156, 4,  GAME_SERVER_0156, 14},
    {157, 5,  GAME_SERVER_0157, 315},
    {158, 4,  GAME_SERVER_0158, 14},
    {159, 5,  GAME_SERVER_0159, 18},
    {160, 7,  GAME_SERVER_0160, 20},
    {161, 4,  GAME_SERVER_0161, 14},
    {162, 5,  GAME_SERVER_0162, 18},
    {163, 8,  GAME_SERVER_0163, 29},
    {164, 3,  GAME_SERVER_0164, 250},
    {165, 4,  GAME_SERVER_0165, 8},
    {166, 4,  GAME_SERVER_0166, 14},
    {167, 4,  GAME_SERVER_0167, 16},
    {168, 3,  GAME_SERVER_0168, 10},
    {169, 4,  GAME_SERVER_0169, 14},
    {170, 1,  GAME_SERVER_0170, 2},
    {171, 3,  GAME_SERVER_0171, 7},
    {172, 3,  GAME_SERVER_0172, 7},
    {173, 3,  GAME_SERVER_0173, 10},
    {174, 2,  GAME_SERVER_0174, 66},
    {175, 3,  GAME_SERVER_0175, 5},
    {176, 3,  GAME_SERVER_0176, 6},
    {177, 7,  GAME_SERVER_0177, 86},
    {178, 2,  GAME_SERVER_0178, 6},
    {179, 3,  GAME_SERVER_0179, 70},
    {180, 2,  GAME_SERVER_0180, 262},
    {181, 3,  GAME_SERVER_0181, 10},
    {182, 5,  GAME_SERVER_0182, 9},
    {183, 1,  GAME_SERVER_0183, 2},
    {184, 3,  GAME_SERVER_0184, 262},
    {185, 1,  GAME_SERVER_0185, 2},
    {186, 4,  GAME_SERVER_0186, 266},
    {187, 2,  GAME_SERVER_0187, 6},
    {188, 3,  GAME_SERVER_0188, 262},
    {189, 2,  GAME_SERVER_0189, 6},
    {190, 2,  GAME_SERVER_0190, 262},
    {191, 6,  GAME_SERVER_0191, 526},
    {192, 3,  GAME_SERVER_0192, 10},
    {193, 3,  GAME_SERVER_0193, 10},
    {194, 3,  GAME_SERVER_0194, 7},
    {195, 2,  GAME_SERVER_0195, 6},
    {196, 3,  GAME_SERVER_0196, 247},
    {197, 3,  GAME_SERVER_0197, 7},
    {198, 4,  GAME_SERVER_0198, 75},
    {199, 4,  GAME_SERVER_0199, 11},
    {200, 3,  GAME_SERVER_0200, 4},
    {201, 3,  GAME_SERVER_0201, 7},
    {202, 2,  GAME_SERVER_0202, 3},
    {203, 2,  GAME_SERVER_0203, 3},
    {204, 5,  GAME_SERVER_0204, 9},
    {205, 3,  GAME_SERVER_0205, 10},
    {206, 3,  GAME_SERVER_0206, 10},
    {207, 2,  GAME_SERVER_0207, 6},
    {208, 5,  GAME_SERVER_0208, 16},
    {209, 4,  GAME_SERVER_0209, 12},
    {210, 2,  GAME_SERVER_0210, 518},
    {211, 1,  GAME_SERVER_0211, 2},
    {212, 1,  GAME_SERVER_0212, 2},
    {213, 4,  GAME_SERVER_0213, 10},
    {214, 2,  GAME_SERVER_0214, 38},
    {215, 2,  GAME_SERVER_0215, 22},
    {216, 5,  GAME_SERVER_0216, 13},
    {217, 5,  GAME_SERVER_0217, 79},
    {218, 2,  GAME_SERVER_0218, 518},
    {219, 3,  GAME_SERVER_0219, 8},
    {220, 3,  GAME_SERVER_0220, 8},
    {221, 2,  GAME_SERVER_0221, 4},
    {222, 3,  GAME_SERVER_0222, 10},
    {223, 3,  GAME_SERVER_0223, 71},
    {224, 2,  GAME_SERVER_0224, 3},
    {225, 4,  GAME_SERVER_0225, 12},
    {226, 4,  GAME_SERVER_0226, 12},
    {227, 4,  GAME_SERVER_0227, 12},
    {228, 5,  GAME_SERVER_0228, 16},
    {229, 4,  GAME_SERVER_0229, 12},
    {230, 4,  GAME_SERVER_0230, 12},
    {231, 6,  GAME_SERVER_0231, 20},
    {232, 16, GAME_SERVER_0232, 62},
    {233, 2,  GAME_SERVER_0233, 6},
    {234, 2,  GAME_SERVER_0234, 6},
    {235, 2,  GAME_SERVER_0235, 6},
    {236, 2,  GAME_SERVER_0236, 6},
    {237, 3,  GAME_SERVER_0237, 10},
    {238, 3,  GAME_SERVER_0238, 10},
    {239, 3,  GAME_SERVER_0239, 10},
    {240, 3,  GAME_SERVER_0240, 10},
    {241, 2,  GAME_SERVER_0241, 6},
    {242, 5,  GAME_SERVER_0242, 30},
    {243, 3,  GAME_SERVER_0243, 8},
    {244, 3,  GAME_SERVER_0244, 10},
    {245, 12, GAME_SERVER_0245, 70},
    {246, 3,  GAME_SERVER_0246, 10},
    {247, 2,  GAME_SERVER_0247, 6},
    {248, 2,  GAME_SERVER_0248, 70},
    {249, 2,  GAME_SERVER_0249, 134},
    {250, 4,  GAME_SERVER_0250, 12},
    {251, 3,  GAME_SERVER_0251, 10},
    {252, 3,  GAME_SERVER_0252, 67},
    {253, 1,  GAME_SERVER_0253, 2},
    {254, 3,  GAME_SERVER_0254, 4},
    {255, 2,  GAME_SERVER_0255, 3},
    {256, 2,  GAME_SERVER_0256, 3},
    {257, 4,  GAME_SERVER_0257, 168},
    {258, 1,  GAME_SERVER_0258, 2},
    {259, 2,  GAME_SERVER_0259, 1030},
    {260, 1,  GAME_SERVER_0260, 2},
    {261, 2,  GAME_SERVER_0261, 6},
    {262, 6,  GAME_SERVER_0262, 79},
    {263, 2,  GAME_SERVER_0263, 6},
    {264, 3,  GAME_SERVER_0264, 250},
    {265, 5,  GAME_SERVER_0265, 253},
    {266, 2,  GAME_SERVER_0266, 246},
    {267, 2,  GAME_SERVER_0267, 6},
    {268, 2,  GAME_SERVER_0268, 6},
    {269, 4,  GAME_SERVER_0269, 9},
    {270, 3,  GAME_SERVER_0270, 5},
    {271, 3,  GAME_SERVER_0271, 8},
    {272, 4,  GAME_SERVER_0272, 12},
    {273, 3,  GAME_SERVER_0273, 7},
    {274, 3,  GAME_SERVER_0274, 70},
    {275, 3,  GAME_SERVER_0275, 10},
    {276, 3,  GAME_SERVER_0276, 10},
    {277, 5,  GAME_SERVER_0277, 25},
    {278, 2,  GAME_SERVER_0278, 18},
    {279, 4,  GAME_SERVER_0279, 21},
    {280, 1,  GAME_SERVER_0280, 2},
    {281, 14, GAME_SERVER_0281, 94},
    {282, 3,  GAME_SERVER_0282, 7},
    {283, 1,  GAME_SERVER_0283, 2},
    {284, 2,  GAME_SERVER_0284, 3},
    {285, 3,  GAME_SERVER_0285, 8},
    {286, 3,  GAME_SERVER_0286, 134},
    {287, 16, GAME_SERVER_0287, 111},
    {288, 20, GAME_SERVER_0288, 124},
    {289, 4,  GAME_SERVER_0289, 9},
    {290, 8,  GAME_SERVER_0290, 143},
    {291, 3,  GAME_SERVER_0291, 19},
    {292, 3,  GAME_SERVER_0292, 8},
    {293, 3,  GAME_SERVER_0293, 5},
    {294, 10, GAME_SERVER_0294, 267},
    {295, 2,  GAME_SERVER_0295, 42},
    {296, 2,  GAME_SERVER_0296, 42},
    {297, 2,  GAME_SERVER_0297, 42},
    {298, 3,  GAME_SERVER_0298, 134},
    {299, 3,  GAME_SERVER_0299, 10},
    {300, 2,  GAME_SERVER_0300, 3},
    {301, 2,  GAME_SERVER_0301, 4},
    {302, 3,  GAME_SERVER_0302, 554},
    {303, 3,  GAME_SERVER_0303, 8},
    {304, 1,  GAME_SERVER_0304, 2},
    {305, 3,  GAME_SERVER_0305, 7},
    {306, 2,  GAME_SERVER_0306, 6},
    {307, 1,  GAME_SERVER_0307, 2},
    {308, 4,  GAME_SERVER_0308, 12},
    {309, 2,  GAME_SERVER_0309, 6},
    {310, 3,  GAME_SERVER_0310, 10},
    {311, 7,  GAME_SERVER_0311, 71},
    {312, 3,  GAME_SERVER_0312, 10},
    {313, 3,  GAME_SERVER_0313, 70},
    {314, 3,  GAME_SERVER_0314, 10},
    {315, 3,  GAME_SERVER_0315, 7},
    {316, 4,  GAME_SERVER_0316, 9},
    {317, 5,  GAME_SERVER_0317, 11},
    {318, 7,  GAME_SERVER_0318, 13},
    {319, 3,  GAME_SERVER_0319, 8},
    {320, 3,  GAME_SERVER_0320, 8},
    {321, 2,  GAME_SERVER_0321, 4},
    {322, 3,  GAME_SERVER_0322, 6},
    {323, 3,  GAME_SERVER_0323, 5},
    {324, 2,  GAME_SERVER_0324, 4},
    {325, 6,  GAME_SERVER_0325, 12},
    {326, 5,  GAME_SERVER_0326, 13},
    {327, 3,  GAME_SERVER_0327, 5},
    {328, 4,  GAME_SERVER_0328, 7},
    {329, 1,  GAME_SERVER_0329, 2},
    {330, 5,  GAME_SERVER_0330, 11},
    {331, 4,  GAME_SERVER_0331, 6},
    {332, 3,  GAME_SERVER_0332, 8},
    {333, 3,  GAME_SERVER_0333, 6},
    {334, 3,  GAME_SERVER_0334, 8},
    {335, 3,  GAME_SERVER_0335, 8},
    {336, 3,  GAME_SERVER_0336, 8},
    {337, 4,  GAME_SERVER_0337, 12},
    {338, 5,  GAME_SERVER_0338, 11},
    {339, 4,  GAME_SERVER_0339, 8},
    {340, 3,  GAME_SERVER_0340, 10},
    {341, 2,  GAME_SERVER_0341, 6},
    {342, 5,  GAME_SERVER_0342, 18},
    {343, 3,  GAME_SERVER_0343, 4},
    {344, 3,  GAME_SERVER_0344, 8},
    {345, 3,  GAME_SERVER_0345, 7},
    {346, 3,  GAME_SERVER_0346, 10},
    {347, 10, GAME_SERVER_0347, 92},
    {348, 3,  GAME_SERVER_0348, 10},
    {349, 10, GAME_SERVER_0349, 25},
    {350, 10, GAME_SERVER_0350, 25},
    {351, 7,  GAME_SERVER_0351, 402},
    {352, 15, GAME_SERVER_0352, 421},
    {353, 15, GAME_SERVER_0353, 421},
    {354, 4,  GAME_SERVER_0354, 24},
    {355, 1,  GAME_SERVER_0355, 2},
    {356, 1,  GAME_SERVER_0356, 2},
    {357, 1,  GAME_SERVER_0357, 2},
    {358, 2,  GAME_SERVER_0358, 3},
    {359, 3,  GAME_SERVER_0359, 6},
    {360, 3,  GAME_SERVER_0360, 7},
    {361, 4,  GAME_SERVER_0361, 24},
    {362, 1,  GAME_SERVER_0362, 2},
    {363, 1,  GAME_SERVER_0363, 2},
    {364, 2,  GAME_SERVER_0364, 3},
    {365, 2,  GAME_SERVER_0365, 3},
    {366, 1,  GAME_SERVER_0366, 2},
    {367, 1,  GAME_SERVER_0367, 2},
    {368, 24, GAME_SERVER_0368, 57},
    {369, 2,  GAME_SERVER_0369, 6},
    {370, 2,  GAME_SERVER_0370, 6},
    {371, 24, GAME_SERVER_0371, 57},
    {372, 5,  GAME_SERVER_0372, 137},
    {373, 3,  GAME_SERVER_0373, 8},
    {374, 5,  GAME_SERVER_0374, 137},
    {375, 21, GAME_SERVER_0375, 175},
    {376, 4,  GAME_SERVER_0376, 9},
    {377, 2,  GAME_SERVER_0377, 3},
    {378, 1,  GAME_SERVER_0378, 2},
    {379, 5,  GAME_SERVER_0379, 6},
    {380, 2,  GAME_SERVER_0380, 42},
    {381, 1,  GAME_SERVER_0381, 2},
    {382, 2,  GAME_SERVER_0382, 6},
    {383, 5,  GAME_SERVER_0383, 255},
    {384, 2,  GAME_SERVER_0384, 6},
    {385, 3,  GAME_SERVER_0385, 247},
    {386, 3,  GAME_SERVER_0386, 262},
    {387, 3,  GAME_SERVER_0387, 770},
    {388, 3,  GAME_SERVER_0388, 262},
    {389, 1,  GAME_SERVER_0389, 2},
    {390, 2,  GAME_SERVER_0390, 6},
    {391, 5,  GAME_SERVER_0391, 1088},
    {392, 1,  GAME_SERVER_0392, 2},
    {393, 1,  GAME_SERVER_0393, 2},
    {394, 2,  GAME_SERVER_0394, 6},
    {395, 2,  GAME_SERVER_0395, 3},
    {396, 2,  GAME_SERVER_0396, 4},
    {397, 1,  GAME_SERVER_0397, 2},
    {398, 4,  GAME_SERVER_0398, 10},
    {399, 3,  GAME_SERVER_0399, 7},
    {400, 2,  GAME_SERVER_0400, 4},
    {401, 9,  GAME_SERVER_0401, 463},
    {402, 3,  GAME_SERVER_0402, 5},
    {403, 2,  GAME_SERVER_0403, 3},
    {404, 7,  GAME_SERVER_0404, 26},
    {405, 2,  GAME_SERVER_0405, 1030},
    {406, 4,  GAME_SERVER_0406, 9},
    {407, 2,  GAME_SERVER_0407, 3},
    {408, 7,  GAME_SERVER_0408, 15},
    {409, 3,  GAME_SERVER_0409, 10},
    {410, 2,  GAME_SERVER_0410, 4},
    {411, 2,  GAME_SERVER_0411, 246},
    {412, 18, GAME_SERVER_0412, 229},
    {413, 1,  GAME_SERVER_0413, 2},
    {414, 4,  GAME_SERVER_0414, 102},
    {415, 9,  GAME_SERVER_0415, 508},
    {416, 2,  GAME_SERVER_0416, 3},
    {417, 7,  GAME_SERVER_0417, 20},
    {418, 4,  GAME_SERVER_0418, 491},
    {419, 14, GAME_SERVER_0419, 79},
    {420, 7,  GAME_SERVER_0420, 38},
    {421, 10, GAME_SERVER_0421, 506},
    {422, 2,  GAME_SERVER_0422, 3},
    {423, 3,  GAME_SERVER_0423, 7},
    {424, 3,  GAME_SERVER_0424, 7},
    {425, 2,  GAME_SERVER_0425, 3},
    {426, 2,  GAME_SERVER_0426, 6},
    {427, 5,  GAME_SERVER_0427, 52},
    {428, 7,  GAME_SERVER_0428, 51},
    {429, 13, GAME_SERVER_0429, 96},
    {430, 2,  GAME_SERVER_0430, 246},
    {431, 2,  GAME_SERVER_0431, 6},
    {432, 4,  GAME_SERVER_0432, 9},
    {433, 3,  GAME_SERVER_0433, 5},
    {434, 7,  GAME_SERVER_0434, 77},
    {435, 1,  GAME_SERVER_0435, 2},
    {436, 7,  GAME_SERVER_0436, 77},
    {437, 1,  GAME_SERVER_0437, 2},
    {438, 2,  GAME_SERVER_0438, 3},
    {439, 2,  GAME_SERVER_0439, 3},
    {440, 1,  GAME_SERVER_0440, 2},
    {441, 1,  GAME_SERVER_0441, 2},
    {442, 4,  GAME_SERVER_0442, 249},
    {443, 2,  GAME_SERVER_0443, 3},
    {444, 2,  GAME_SERVER_0444, 6},
    {445, 2,  GAME_SERVER_0445, 3},
    {446, 6,  GAME_SERVER_0446, 48},
    {447, 3,  GAME_SERVER_0447, 6},
    {448, 2,  GAME_SERVER_0448, 4},
    {449, 6,  GAME_SERVER_0449, 10},
    {450, 4,  GAME_SERVER_0450, 8},
    {451, 2,  GAME_SERVER_0451, 4},
    {452, 2,  GAME_SERVER_0452, 4},
    {453, 2,  GAME_SERVER_0453, 4},
    {454, 2,  GAME_SERVER_0454, 4},
    {455, 2,  GAME_SERVER_0455, 4},
    {456, 2,  GAME_SERVER_0456, 4},
    {457, 2,  GAME_SERVER_0457, 3},
    {458, 4,  GAME_SERVER_0458, 7},
    {459, 3,  GAME_SERVER_0459, 6},
    {460, 3,  GAME_SERVER_0460, 6},
    {461, 3,  GAME_SERVER_0461, 6},
    {462, 3,  GAME_SERVER_0462, 6},
    {463, 3,  GAME_SERVER_0463, 6},
    {464, 4,  GAME_SERVER_0464, 7},
    {465, 2,  GAME_SERVER_0465, 4},
    {466, 2,  GAME_SERVER_0466, 4},
    {467, 2,  GAME_SERVER_0467, 246},
    {468, 1,  GAME_SERVER_0468, 2},
    {469, 2,  GAME_SERVER_0469, 3},
    {470, 6,  GAME_SERVER_0470, 234},
    {471, 1,  GAME_SERVER_0471, 2},
    {472, 4,  GAME_SERVER_0472, 248},
    {473, 3,  GAME_SERVER_0473, 5},
    {474, 3,  GAME_SERVER_0474, 6},
    {475, 3,  GAME_SERVER_0475, 6},
    {476, 14, GAME_SERVER_0476, 122},
    {477, 2,  GAME_SERVER_0477, 4},
    {478, 2,  GAME_SERVER_0478, 4},
    {479, 4,  GAME_SERVER_0479, 6},
    {480, 4,  GAME_SERVER_0480, 6},
    {481, 2,  GAME_SERVER_0481, 3},
    {482, 2,  GAME_SERVER_0482, 246},
    {483, 2,  GAME_SERVER_0483, 3},
    {484, 2,  GAME_SERVER_0484, 3},
};
