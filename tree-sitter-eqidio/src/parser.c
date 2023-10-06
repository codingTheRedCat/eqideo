#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  sym__whitespace = 1,
  sym_identifier = 2,
  sym_natural = 3,
  sym_integer = 4,
  sym_floating_point = 5,
  anon_sym_AT = 6,
  anon_sym_min = 7,
  anon_sym_s = 8,
  anon_sym_ms = 9,
  anon_sym_STAR = 10,
  anon_sym_EQ = 11,
  anon_sym_SEMI = 12,
  anon_sym__ = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym__statement = 16,
  sym_enum_value = 17,
  sym_duration = 18,
  sym_variable = 19,
  sym_command = 20,
  sym__argument = 21,
  sym_environment_command = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_duration_repeat1 = 24,
  aux_sym_command_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_identifier] = "identifier",
  [sym_natural] = "natural",
  [sym_integer] = "integer",
  [sym_floating_point] = "floating_point",
  [anon_sym_AT] = "@",
  [anon_sym_min] = "min",
  [anon_sym_s] = "s",
  [anon_sym_ms] = "ms",
  [anon_sym_STAR] = "*",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym__] = "_",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_enum_value] = "enum_value",
  [sym_duration] = "duration",
  [sym_variable] = "variable",
  [sym_command] = "command",
  [sym__argument] = "_argument",
  [sym_environment_command] = "environment_command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_duration_repeat1] = "duration_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_identifier] = sym_identifier,
  [sym_natural] = sym_natural,
  [sym_integer] = sym_integer,
  [sym_floating_point] = sym_floating_point,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym__] = anon_sym__,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_enum_value] = sym_enum_value,
  [sym_duration] = sym_duration,
  [sym_variable] = sym_variable,
  [sym_command] = sym_command,
  [sym__argument] = sym__argument,
  [sym_environment_command] = sym_environment_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_duration_repeat1] = aux_sym_duration_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_natural] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_value] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_environment_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_duration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_controller = 2,
  field_declaration = 3,
  field_milliseconds = 4,
  field_minutes = 5,
  field_name = 6,
  field_seconds = 7,
  field_time = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_controller] = "controller",
  [field_declaration] = "declaration",
  [field_milliseconds] = "milliseconds",
  [field_minutes] = "minutes",
  [field_name] = "name",
  [field_seconds] = "seconds",
  [field_time] = "time",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 6},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 3},
  [14] = {.index = 28, .length = 3},
  [15] = {.index = 31, .length = 2},
  [16] = {.index = 33, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_milliseconds, 0, .inherited = true},
    {field_minutes, 0, .inherited = true},
    {field_seconds, 0, .inherited = true},
  [4] =
    {field_minutes, 0},
  [5] =
    {field_seconds, 0},
  [6] =
    {field_milliseconds, 0},
  [7] =
    {field_name, 1},
  [8] =
    {field_name, 0},
    {field_time, 1},
  [10] =
    {field_controller, 1},
    {field_name, 0},
  [12] =
    {field_milliseconds, 0, .inherited = true},
    {field_milliseconds, 1, .inherited = true},
    {field_minutes, 0, .inherited = true},
    {field_minutes, 1, .inherited = true},
    {field_seconds, 0, .inherited = true},
    {field_seconds, 1, .inherited = true},
  [18] =
    {field_declaration, 1},
    {field_name, 2},
  [20] =
    {field_argument, 2},
    {field_name, 0},
  [22] =
    {field_controller, 2},
    {field_name, 0},
    {field_time, 1},
  [25] =
    {field_argument, 3},
    {field_name, 0},
    {field_time, 1},
  [28] =
    {field_argument, 3},
    {field_controller, 1},
    {field_name, 0},
  [31] =
    {field_argument, 3},
    {field_name, 1},
  [33] =
    {field_argument, 4},
    {field_controller, 2},
    {field_name, 0},
    {field_time, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 15,
  [25] = 13,
  [26] = 12,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 23,
  [34] = 17,
  [35] = 35,
  [36] = 22,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_natural);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11, .external_lex_state = 1},
  [2] = {.lex_state = 10, .external_lex_state = 1},
  [3] = {.lex_state = 10, .external_lex_state = 1},
  [4] = {.lex_state = 10, .external_lex_state = 1},
  [5] = {.lex_state = 10, .external_lex_state = 1},
  [6] = {.lex_state = 10, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 11, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 11, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 11, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 11, .external_lex_state = 1},
  [25] = {.lex_state = 11, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 11, .external_lex_state = 1},
  [30] = {.lex_state = 11, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 11, .external_lex_state = 1},
  [33] = {.lex_state = 11, .external_lex_state = 1},
  [34] = {.lex_state = 11, .external_lex_state = 1},
  [35] = {.lex_state = 11, .external_lex_state = 1},
  [36] = {.lex_state = 11, .external_lex_state = 1},
  [37] = {.lex_state = 11, .external_lex_state = 1},
  [38] = {.lex_state = 11, .external_lex_state = 1},
  [39] = {.lex_state = 11, .external_lex_state = 1},
  [40] = {.lex_state = 11, .external_lex_state = 1},
  [41] = {.lex_state = 11, .external_lex_state = 1},
  [42] = {.lex_state = 11, .external_lex_state = 1},
  [43] = {.lex_state = 11, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 11, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 11, .external_lex_state = 1},
};

enum {
  ts_external_token_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_floating_point] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__statement] = STATE(14),
    [sym_command] = STATE(14),
    [sym_environment_command] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_enum_value] = STATE(10),
    [sym_duration] = STATE(10),
    [sym_variable] = STATE(10),
    [sym__argument] = STATE(10),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_floating_point] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym__] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_enum_value] = STATE(9),
    [sym_duration] = STATE(9),
    [sym_variable] = STATE(9),
    [sym__argument] = STATE(9),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(29),
    [sym_floating_point] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym__] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_enum_value] = STATE(7),
    [sym_duration] = STATE(7),
    [sym_variable] = STATE(7),
    [sym__argument] = STATE(7),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(35),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(37),
    [sym_floating_point] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym__] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_enum_value] = STATE(8),
    [sym_duration] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__argument] = STATE(8),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(45),
    [sym_floating_point] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym__] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_enum_value] = STATE(47),
    [sym_duration] = STATE(47),
    [sym_variable] = STATE(47),
    [sym__argument] = STATE(47),
    [aux_sym_duration_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(51),
    [sym_natural] = ACTIONS(53),
    [sym_integer] = ACTIONS(55),
    [sym_floating_point] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym__] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_enum_value] = STATE(11),
    [sym_duration] = STATE(11),
    [sym_variable] = STATE(11),
    [sym__argument] = STATE(11),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(57),
    [sym_floating_point] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_enum_value] = STATE(11),
    [sym_duration] = STATE(11),
    [sym_variable] = STATE(11),
    [sym__argument] = STATE(11),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(57),
    [sym_floating_point] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_enum_value] = STATE(11),
    [sym_duration] = STATE(11),
    [sym_variable] = STATE(11),
    [sym__argument] = STATE(11),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(57),
    [sym_floating_point] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_enum_value] = STATE(11),
    [sym_duration] = STATE(11),
    [sym_variable] = STATE(11),
    [sym__argument] = STATE(11),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(15),
    [sym_integer] = ACTIONS(57),
    [sym_floating_point] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_enum_value] = STATE(11),
    [sym_duration] = STATE(11),
    [sym_variable] = STATE(11),
    [sym__argument] = STATE(11),
    [aux_sym_duration_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(67),
    [sym_integer] = ACTIONS(70),
    [sym_floating_point] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(85), 1,
      anon_sym_min,
    ACTIONS(87), 1,
      anon_sym_s,
    ACTIONS(89), 1,
      anon_sym_ms,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(81), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(83), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [24] = 5,
    ACTIONS(91), 1,
      sym_natural,
    STATE(13), 1,
      aux_sym_duration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 2,
      sym_integer,
      sym_floating_point,
    ACTIONS(96), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [44] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(16), 4,
      sym__statement,
      sym_command,
      sym_environment_command,
      aux_sym_source_file_repeat1,
  [64] = 5,
    ACTIONS(100), 1,
      sym_natural,
    STATE(13), 1,
      aux_sym_duration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(102), 2,
      sym_integer,
      sym_floating_point,
    ACTIONS(104), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [84] = 5,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(16), 4,
      sym__statement,
      sym_command,
      sym_environment_command,
      aux_sym_source_file_repeat1,
  [104] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(114), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(116), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [119] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(120), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(122), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(124), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [149] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(128), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [164] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      sym_natural,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_duration_repeat1,
    STATE(27), 1,
      sym_duration,
    STATE(44), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [187] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(134), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(136), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [202] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(138), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(140), 3,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SEMI,
  [217] = 4,
    ACTIONS(130), 1,
      sym_natural,
    STATE(25), 1,
      aux_sym_duration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_STAR,
      anon_sym_SEMI,
  [232] = 4,
    ACTIONS(142), 1,
      sym_natural,
    STATE(25), 1,
      aux_sym_duration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_SEMI,
  [247] = 5,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_min,
    ACTIONS(147), 1,
      anon_sym_s,
    ACTIONS(149), 1,
      anon_sym_ms,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [264] = 4,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [278] = 4,
    ACTIONS(85), 1,
      anon_sym_min,
    ACTIONS(87), 1,
      anon_sym_s,
    ACTIONS(89), 1,
      anon_sym_ms,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [312] = 4,
    ACTIONS(145), 1,
      anon_sym_min,
    ACTIONS(147), 1,
      anon_sym_s,
    ACTIONS(149), 1,
      anon_sym_ms,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [326] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [336] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(140), 3,
      sym_natural,
      anon_sym_STAR,
      anon_sym_SEMI,
  [346] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(116), 3,
      sym_natural,
      anon_sym_STAR,
      anon_sym_SEMI,
  [356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [366] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(136), 3,
      sym_natural,
      anon_sym_STAR,
      anon_sym_SEMI,
  [376] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [396] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [406] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [416] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
  [426] = 3,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [437] = 2,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [445] = 2,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [453] = 2,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [461] = 2,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [469] = 2,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [477] = 2,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [485] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [493] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 24,
  [SMALL_STATE(14)] = 44,
  [SMALL_STATE(15)] = 64,
  [SMALL_STATE(16)] = 84,
  [SMALL_STATE(17)] = 104,
  [SMALL_STATE(18)] = 119,
  [SMALL_STATE(19)] = 134,
  [SMALL_STATE(20)] = 149,
  [SMALL_STATE(21)] = 164,
  [SMALL_STATE(22)] = 187,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 232,
  [SMALL_STATE(26)] = 247,
  [SMALL_STATE(27)] = 264,
  [SMALL_STATE(28)] = 278,
  [SMALL_STATE(29)] = 292,
  [SMALL_STATE(30)] = 302,
  [SMALL_STATE(31)] = 312,
  [SMALL_STATE(32)] = 326,
  [SMALL_STATE(33)] = 336,
  [SMALL_STATE(34)] = 346,
  [SMALL_STATE(35)] = 356,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 376,
  [SMALL_STATE(38)] = 386,
  [SMALL_STATE(39)] = 396,
  [SMALL_STATE(40)] = 406,
  [SMALL_STATE(41)] = 416,
  [SMALL_STATE(42)] = 426,
  [SMALL_STATE(43)] = 437,
  [SMALL_STATE(44)] = 445,
  [SMALL_STATE(45)] = 453,
  [SMALL_STATE(46)] = 461,
  [SMALL_STATE(47)] = 469,
  [SMALL_STATE(48)] = 477,
  [SMALL_STATE(49)] = 485,
  [SMALL_STATE(50)] = 493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 7),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 12),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, .production_id = 12),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_command, 3, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_command, 3, .production_id = 6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(50),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 9), SHIFT_REPEAT(28),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_value, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 10),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 5),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 9), SHIFT_REPEAT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 12),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 14),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_command, 5, .production_id = 15),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_eqidio_external_scanner_create(void);
void tree_sitter_eqidio_external_scanner_destroy(void *);
bool tree_sitter_eqidio_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_eqidio_external_scanner_serialize(void *, char *);
void tree_sitter_eqidio_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eqidio(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_eqidio_external_scanner_create,
      tree_sitter_eqidio_external_scanner_destroy,
      tree_sitter_eqidio_external_scanner_scan,
      tree_sitter_eqidio_external_scanner_serialize,
      tree_sitter_eqidio_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
