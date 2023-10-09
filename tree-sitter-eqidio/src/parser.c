#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

enum {
  sym__whitespace = 1,
  sym_identifier = 2,
  sym_natural = 3,
  sym_integer = 4,
  sym_floating_point = 5,
  anon_sym_AT = 6,
  sym_duration = 7,
  anon_sym_STAR = 8,
  anon_sym_SEMI = 9,
  anon_sym__ = 10,
  anon_sym_DOLLAR_DOLLAR = 11,
  aux_sym_latex_token1 = 12,
  sym_comment = 13,
  sym_eol = 14,
  sym__newline = 15,
  sym_source_file = 16,
  sym__statement = 17,
  sym_enum_value = 18,
  sym_variable = 19,
  sym_command = 20,
  sym_environment_command = 21,
  sym_latex = 22,
  sym__argument = 23,
  aux_sym_source_file_repeat1 = 24,
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
  [sym_duration] = "duration",
  [anon_sym_STAR] = "*",
  [anon_sym_SEMI] = ";",
  [anon_sym__] = "_",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym_latex_token1] = "latex_token1",
  [sym_comment] = "comment",
  [sym_eol] = "eol",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_enum_value] = "enum_value",
  [sym_variable] = "variable",
  [sym_command] = "command",
  [sym_environment_command] = "environment_command",
  [sym_latex] = "latex",
  [sym__argument] = "_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_duration] = sym_duration,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym_latex_token1] = aux_sym_latex_token1,
  [sym_comment] = sym_comment,
  [sym_eol] = sym_eol,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_enum_value] = sym_enum_value,
  [sym_variable] = sym_variable,
  [sym_command] = sym_command,
  [sym_environment_command] = sym_environment_command,
  [sym_latex] = sym_latex,
  [sym__argument] = sym__argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_latex_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_eol] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_environment_command] = {
    .visible = true,
    .named = true,
  },
  [sym_latex] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  field_duration = 2,
  field_id = 3,
  field_runtime = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_duration] = "duration",
  [field_id] = "id",
  [field_runtime] = "runtime",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_id, 1},
  [3] =
    {field_duration, 1},
    {field_id, 0},
  [5] =
    {field_argument, 2, .inherited = true},
    {field_id, 0},
  [7] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [9] =
    {field_id, 0},
    {field_runtime, 1},
  [11] =
    {field_argument, 2, .inherited = true},
    {field_id, 1},
  [13] =
    {field_argument, 3, .inherited = true},
    {field_duration, 1},
    {field_id, 0},
  [16] =
    {field_duration, 1},
    {field_id, 0},
    {field_runtime, 2},
  [19] =
    {field_argument, 3, .inherited = true},
    {field_id, 0},
    {field_runtime, 1},
  [22] =
    {field_argument, 4, .inherited = true},
    {field_duration, 1},
    {field_id, 0},
    {field_runtime, 2},
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 16,
  [44] = 44,
  [45] = 45,
  [46] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_natural);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_duration);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_duration);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_duration);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_latex_token1);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 3},
  [9] = {.lex_state = 3, .external_lex_state = 3},
  [10] = {.lex_state = 3, .external_lex_state = 3},
  [11] = {.lex_state = 3, .external_lex_state = 3},
  [12] = {.lex_state = 3, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 3},
  [16] = {.lex_state = 3, .external_lex_state = 3},
  [17] = {.lex_state = 3, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token_comment = 0,
  ts_external_token_eol = 1,
  ts_external_token__newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_eol] = sym_eol,
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token_eol] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token_eol] = true,
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [sym_natural] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_eol] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__statement] = STATE(13),
    [sym_command] = STATE(13),
    [sym_environment_command] = STATE(13),
    [sym_latex] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
  },
  [2] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_eol] = ACTIONS(21),
    [sym__newline] = ACTIONS(3),
  },
  [3] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(23),
    [sym_eol] = ACTIONS(25),
    [sym__newline] = ACTIONS(3),
  },
  [4] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_eol] = ACTIONS(29),
    [sym__newline] = ACTIONS(3),
  },
  [5] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(31),
    [sym_eol] = ACTIONS(33),
    [sym__newline] = ACTIONS(3),
  },
  [6] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(12),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(35),
    [sym_eol] = ACTIONS(35),
    [sym__newline] = ACTIONS(3),
  },
  [7] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [sym_floating_point] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(40),
    [sym_duration] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_eol] = ACTIONS(49),
    [sym__newline] = ACTIONS(3),
  },
  [8] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(51),
    [sym_eol] = ACTIONS(51),
    [sym__newline] = ACTIONS(3),
  },
  [9] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(53),
    [sym_eol] = ACTIONS(53),
    [sym__newline] = ACTIONS(3),
  },
  [10] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_eol] = ACTIONS(57),
    [sym__newline] = ACTIONS(3),
  },
  [11] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_eol] = ACTIONS(59),
    [sym__newline] = ACTIONS(3),
  },
  [12] = {
    [sym_enum_value] = STATE(15),
    [sym_variable] = STATE(15),
    [sym__argument] = STATE(15),
    [aux_sym_command_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_natural] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_floating_point] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_duration] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_eol] = ACTIONS(63),
    [sym__newline] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    STATE(14), 5,
      sym__statement,
      sym_command,
      sym_environment_command,
      sym_latex,
      aux_sym_source_file_repeat1,
  [24] = 6,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(75), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    STATE(14), 5,
      sym__statement,
      sym_command,
      sym_environment_command,
      sym_latex,
      aux_sym_source_file_repeat1,
  [48] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(78), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(80), 5,
      sym_eol,
      anon_sym_AT,
      sym_duration,
      anon_sym_STAR,
      anon_sym_SEMI,
  [65] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(82), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(84), 5,
      sym_eol,
      anon_sym_AT,
      sym_duration,
      anon_sym_STAR,
      anon_sym_SEMI,
  [82] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(86), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(88), 5,
      sym_eol,
      anon_sym_AT,
      sym_duration,
      anon_sym_STAR,
      anon_sym_SEMI,
  [99] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [110] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [121] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [132] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [143] = 5,
    ACTIONS(98), 1,
      sym_duration,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [160] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [171] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [182] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [193] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [204] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [215] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [226] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [237] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [248] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [259] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [270] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [281] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [292] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [303] = 4,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [317] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(124), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(126), 1,
      aux_sym_latex_token1,
  [330] = 2,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [338] = 2,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [346] = 2,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [354] = 2,
    ACTIONS(134), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [362] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [370] = 2,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [378] = 2,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [386] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [394] = 2,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 24,
  [SMALL_STATE(15)] = 48,
  [SMALL_STATE(16)] = 65,
  [SMALL_STATE(17)] = 82,
  [SMALL_STATE(18)] = 99,
  [SMALL_STATE(19)] = 110,
  [SMALL_STATE(20)] = 121,
  [SMALL_STATE(21)] = 132,
  [SMALL_STATE(22)] = 143,
  [SMALL_STATE(23)] = 160,
  [SMALL_STATE(24)] = 171,
  [SMALL_STATE(25)] = 182,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 204,
  [SMALL_STATE(28)] = 215,
  [SMALL_STATE(29)] = 226,
  [SMALL_STATE(30)] = 237,
  [SMALL_STATE(31)] = 248,
  [SMALL_STATE(32)] = 259,
  [SMALL_STATE(33)] = 270,
  [SMALL_STATE(34)] = 281,
  [SMALL_STATE(35)] = 292,
  [SMALL_STATE(36)] = 303,
  [SMALL_STATE(37)] = 317,
  [SMALL_STATE(38)] = 330,
  [SMALL_STATE(39)] = 338,
  [SMALL_STATE(40)] = 346,
  [SMALL_STATE(41)] = 354,
  [SMALL_STATE(42)] = 362,
  [SMALL_STATE(43)] = 370,
  [SMALL_STATE(44)] = 378,
  [SMALL_STATE(45)] = 386,
  [SMALL_STATE(46)] = 394,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(15),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(46),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_value, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_command, 4, .production_id = 8),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_command, 3, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 10),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
