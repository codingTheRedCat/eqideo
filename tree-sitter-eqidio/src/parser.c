#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

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
  sym_eqtex_char = 12,
  sym_eqtex_text = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_PLUS = 16,
  anon_sym_BSLASHtimes = 17,
  anon_sym_CARET = 18,
  sym_comment = 19,
  sym_eol = 20,
  sym__newline = 21,
  sym_source_file = 22,
  sym__statement = 23,
  sym__number = 24,
  sym_enum_value = 25,
  sym_variable = 26,
  sym_command = 27,
  sym_environment_command = 28,
  sym_eqtex = 29,
  sym__eqtex_script_content = 30,
  sym__eqtex_expression = 31,
  sym__eqtex_factor = 32,
  sym__eqtex_component = 33,
  sym_eqtex_sum = 34,
  sym_eqtex_product = 35,
  sym_eqtex_symbol = 36,
  sym__argument = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_command_repeat1 = 39,
  aux_sym_eqtex_sum_repeat1 = 40,
  aux_sym_eqtex_product_repeat1 = 41,
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
  [sym_eqtex_char] = "eqtex_char",
  [sym_eqtex_text] = "eqtex_text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_BSLASHtimes] = "\\times",
  [anon_sym_CARET] = "^",
  [sym_comment] = "comment",
  [sym_eol] = "eol",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__number] = "_number",
  [sym_enum_value] = "enum_value",
  [sym_variable] = "variable",
  [sym_command] = "command",
  [sym_environment_command] = "environment_command",
  [sym_eqtex] = "eqtex",
  [sym__eqtex_script_content] = "_eqtex_script_content",
  [sym__eqtex_expression] = "_eqtex_expression",
  [sym__eqtex_factor] = "_eqtex_factor",
  [sym__eqtex_component] = "_eqtex_component",
  [sym_eqtex_sum] = "eqtex_sum",
  [sym_eqtex_product] = "eqtex_product",
  [sym_eqtex_symbol] = "eqtex_symbol",
  [sym__argument] = "_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_eqtex_sum_repeat1] = "eqtex_sum_repeat1",
  [aux_sym_eqtex_product_repeat1] = "eqtex_product_repeat1",
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
  [sym_eqtex_char] = sym_eqtex_char,
  [sym_eqtex_text] = sym_eqtex_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BSLASHtimes] = anon_sym_BSLASHtimes,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_comment] = sym_comment,
  [sym_eol] = sym_eol,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__number] = sym__number,
  [sym_enum_value] = sym_enum_value,
  [sym_variable] = sym_variable,
  [sym_command] = sym_command,
  [sym_environment_command] = sym_environment_command,
  [sym_eqtex] = sym_eqtex,
  [sym__eqtex_script_content] = sym__eqtex_script_content,
  [sym__eqtex_expression] = sym__eqtex_expression,
  [sym__eqtex_factor] = sym__eqtex_factor,
  [sym__eqtex_component] = sym__eqtex_component,
  [sym_eqtex_sum] = sym_eqtex_sum,
  [sym_eqtex_product] = sym_eqtex_product,
  [sym_eqtex_symbol] = sym_eqtex_symbol,
  [sym__argument] = sym__argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_eqtex_sum_repeat1] = aux_sym_eqtex_sum_repeat1,
  [aux_sym_eqtex_product_repeat1] = aux_sym_eqtex_product_repeat1,
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
  [sym_eqtex_char] = {
    .visible = true,
    .named = true,
  },
  [sym_eqtex_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHtimes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
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
  [sym__number] = {
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
  [sym_eqtex] = {
    .visible = true,
    .named = true,
  },
  [sym__eqtex_script_content] = {
    .visible = false,
    .named = true,
  },
  [sym__eqtex_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__eqtex_factor] = {
    .visible = false,
    .named = true,
  },
  [sym__eqtex_component] = {
    .visible = false,
    .named = true,
  },
  [sym_eqtex_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_eqtex_product] = {
    .visible = true,
    .named = true,
  },
  [sym_eqtex_symbol] = {
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
  [aux_sym_eqtex_sum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eqtex_product_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_duration = 2,
  field_id = 3,
  field_runtime = 4,
  field_subscript = 5,
  field_superscript = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_duration] = "duration",
  [field_id] = "id",
  [field_runtime] = "runtime",
  [field_subscript] = "subscript",
  [field_superscript] = "superscript",
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
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 4},
  [15] = {.index = 28, .length = 2},
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
    {field_subscript, 2},
  [14] =
    {field_superscript, 2},
  [15] =
    {field_argument, 3, .inherited = true},
    {field_duration, 1},
    {field_id, 0},
  [18] =
    {field_duration, 1},
    {field_id, 0},
    {field_runtime, 2},
  [21] =
    {field_argument, 3, .inherited = true},
    {field_id, 0},
    {field_runtime, 1},
  [24] =
    {field_argument, 4, .inherited = true},
    {field_duration, 1},
    {field_id, 0},
    {field_runtime, 2},
  [28] =
    {field_subscript, 2},
    {field_superscript, 4},
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 25,
  [67] = 67,
  [68] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(51);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(51);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_natural);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_natural);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_duration);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_duration);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_duration);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_eqtex_char);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_eqtex_text);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_eqtex_text);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_eqtex_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASHtimes);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
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
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 3, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 3, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 3, .external_lex_state = 3},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 19, .external_lex_state = 2},
  [38] = {.lex_state = 19, .external_lex_state = 2},
  [39] = {.lex_state = 19, .external_lex_state = 2},
  [40] = {.lex_state = 19, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 19, .external_lex_state = 2},
  [43] = {.lex_state = 19, .external_lex_state = 2},
  [44] = {.lex_state = 19, .external_lex_state = 2},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 12, .external_lex_state = 2},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 12, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 12, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 19, .external_lex_state = 2},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_eqtex_char] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BSLASHtimes] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_eol] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym__statement] = STATE(22),
    [sym_command] = STATE(22),
    [sym_environment_command] = STATE(22),
    [sym_eqtex] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(8), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_eol,
      anon_sym_SEMI,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [31] = 9,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      sym_eol,
    STATE(5), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [64] = 9,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym_eol,
    STATE(5), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [97] = 8,
    ACTIONS(34), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_duration,
    ACTIONS(40), 1,
      anon_sym_STAR,
    STATE(5), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(43), 2,
      sym_eol,
      anon_sym_SEMI,
    ACTIONS(31), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [128] = 8,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(3), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(45), 2,
      sym_eol,
      anon_sym_SEMI,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [159] = 8,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(12), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(47), 2,
      sym_eol,
      anon_sym_SEMI,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [190] = 9,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_eol,
    STATE(5), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [223] = 8,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(11), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(53), 2,
      sym_eol,
      anon_sym_SEMI,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [254] = 8,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(4), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(55), 2,
      sym_eol,
      anon_sym_SEMI,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [285] = 9,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_eol,
    STATE(5), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [318] = 9,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_duration,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_eol,
    STATE(5), 1,
      aux_sym_command_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(13), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(28), 3,
      sym_enum_value,
      sym_variable,
      sym__argument,
  [351] = 8,
    ACTIONS(67), 1,
      sym_eqtex_text,
    STATE(18), 1,
      sym__eqtex_factor,
    STATE(55), 1,
      sym_eqtex_product,
    STATE(57), 1,
      sym__eqtex_component,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    STATE(30), 2,
      sym__number,
      sym_eqtex_symbol,
    STATE(63), 2,
      sym__eqtex_expression,
      sym_eqtex_sum,
    ACTIONS(65), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
  [381] = 6,
    ACTIONS(72), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(74), 1,
      sym_eqtex_text,
    ACTIONS(77), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(69), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(14), 4,
      sym__number,
      sym__eqtex_factor,
      sym_eqtex_symbol,
      aux_sym_eqtex_product_repeat1,
  [406] = 6,
    ACTIONS(67), 1,
      sym_eqtex_text,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(79), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(14), 4,
      sym__number,
      sym__eqtex_factor,
      sym_eqtex_symbol,
      aux_sym_eqtex_product_repeat1,
  [431] = 5,
    ACTIONS(89), 1,
      anon_sym__,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_BSLASHtimes,
    ACTIONS(85), 5,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
      anon_sym_PLUS,
  [454] = 6,
    ACTIONS(67), 1,
      sym_eqtex_text,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(79), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(14), 4,
      sym__number,
      sym__eqtex_factor,
      sym_eqtex_symbol,
      aux_sym_eqtex_product_repeat1,
  [479] = 5,
    ACTIONS(67), 1,
      sym_eqtex_text,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(99), 2,
      anon_sym_STAR,
      anon_sym_BSLASHtimes,
    ACTIONS(97), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(17), 4,
      sym__number,
      sym__eqtex_factor,
      sym_eqtex_symbol,
      aux_sym_eqtex_product_repeat1,
  [502] = 6,
    ACTIONS(67), 1,
      sym_eqtex_text,
    STATE(18), 1,
      sym__eqtex_factor,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    STATE(27), 2,
      sym__number,
      sym_eqtex_symbol,
    STATE(56), 2,
      sym__eqtex_component,
      sym_eqtex_product,
    ACTIONS(101), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
  [526] = 6,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym__,
    ACTIONS(111), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    STATE(20), 5,
      sym__statement,
      sym_command,
      sym_environment_command,
      sym_eqtex,
      aux_sym_source_file_repeat1,
  [550] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(116), 4,
      anon_sym_STAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_BSLASHtimes,
      anon_sym_CARET,
    ACTIONS(114), 5,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
      anon_sym_PLUS,
  [568] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    STATE(20), 5,
      sym__statement,
      sym_command,
      sym_environment_command,
      sym_eqtex,
      aux_sym_source_file_repeat1,
  [592] = 4,
    ACTIONS(124), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(122), 3,
      anon_sym_STAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_BSLASHtimes,
    ACTIONS(120), 5,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
      anon_sym_PLUS,
  [612] = 4,
    ACTIONS(67), 1,
      sym_eqtex_text,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(126), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    STATE(15), 4,
      sym__number,
      sym__eqtex_factor,
      sym_eqtex_symbol,
      aux_sym_eqtex_product_repeat1,
  [631] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(128), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(130), 5,
      sym_eol,
      anon_sym_AT,
      sym_duration,
      anon_sym_STAR,
      anon_sym_SEMI,
  [648] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(134), 3,
      anon_sym_STAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_BSLASHtimes,
    ACTIONS(132), 5,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
      anon_sym_PLUS,
  [665] = 5,
    ACTIONS(140), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_BSLASHtimes,
    ACTIONS(136), 4,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
  [686] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(144), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(146), 5,
      sym_eol,
      anon_sym_AT,
      sym_duration,
      anon_sym_STAR,
      anon_sym_SEMI,
  [703] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(150), 3,
      anon_sym_STAR,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_BSLASHtimes,
    ACTIONS(148), 5,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
      anon_sym_PLUS,
  [720] = 5,
    ACTIONS(142), 1,
      anon_sym_PLUS,
    ACTIONS(152), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_BSLASHtimes,
    ACTIONS(136), 4,
      sym_natural,
      sym_integer,
      sym_floating_point,
      sym_eqtex_text,
  [741] = 3,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(154), 3,
      sym_natural,
      sym_integer,
      sym_floating_point,
    ACTIONS(156), 5,
      sym_eol,
      anon_sym_AT,
      sym_duration,
      anon_sym_STAR,
      anon_sym_SEMI,
  [758] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [769] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [780] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [791] = 5,
    ACTIONS(164), 1,
      sym_duration,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [808] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [819] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [830] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [841] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [852] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [863] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [874] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [885] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [896] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [907] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [918] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [929] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [940] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym__,
      anon_sym_DOLLAR_DOLLAR,
  [951] = 4,
    ACTIONS(186), 1,
      sym_eqtex_char,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym__eqtex_script_content,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [965] = 4,
    ACTIONS(190), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(192), 1,
      anon_sym_PLUS,
    STATE(50), 1,
      aux_sym_eqtex_sum_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [979] = 4,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      sym_eqtex_char,
    STATE(26), 1,
      sym__eqtex_script_content,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [993] = 4,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1007] = 4,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      sym_eqtex_char,
    STATE(29), 1,
      sym__eqtex_script_content,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1021] = 4,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    STATE(50), 1,
      aux_sym_eqtex_sum_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1035] = 3,
    ACTIONS(140), 1,
      anon_sym_PLUS,
    ACTIONS(152), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1046] = 2,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
    ACTIONS(190), 2,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_PLUS,
  [1055] = 3,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      aux_sym_eqtex_sum_repeat1,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1066] = 2,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1074] = 2,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1082] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1090] = 2,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1098] = 2,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1106] = 2,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1114] = 2,
    ACTIONS(217), 1,
      sym_eqtex_text,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1122] = 2,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1130] = 2,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1138] = 2,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
  [1146] = 2,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__newline,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 454,
  [SMALL_STATE(18)] = 479,
  [SMALL_STATE(19)] = 502,
  [SMALL_STATE(20)] = 526,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 631,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 665,
  [SMALL_STATE(28)] = 686,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 720,
  [SMALL_STATE(31)] = 741,
  [SMALL_STATE(32)] = 758,
  [SMALL_STATE(33)] = 769,
  [SMALL_STATE(34)] = 780,
  [SMALL_STATE(35)] = 791,
  [SMALL_STATE(36)] = 808,
  [SMALL_STATE(37)] = 819,
  [SMALL_STATE(38)] = 830,
  [SMALL_STATE(39)] = 841,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 863,
  [SMALL_STATE(42)] = 874,
  [SMALL_STATE(43)] = 885,
  [SMALL_STATE(44)] = 896,
  [SMALL_STATE(45)] = 907,
  [SMALL_STATE(46)] = 918,
  [SMALL_STATE(47)] = 929,
  [SMALL_STATE(48)] = 940,
  [SMALL_STATE(49)] = 951,
  [SMALL_STATE(50)] = 965,
  [SMALL_STATE(51)] = 979,
  [SMALL_STATE(52)] = 993,
  [SMALL_STATE(53)] = 1007,
  [SMALL_STATE(54)] = 1021,
  [SMALL_STATE(55)] = 1035,
  [SMALL_STATE(56)] = 1046,
  [SMALL_STATE(57)] = 1055,
  [SMALL_STATE(58)] = 1066,
  [SMALL_STATE(59)] = 1074,
  [SMALL_STATE(60)] = 1082,
  [SMALL_STATE(61)] = 1090,
  [SMALL_STATE(62)] = 1098,
  [SMALL_STATE(63)] = 1106,
  [SMALL_STATE(64)] = 1114,
  [SMALL_STATE(65)] = 1122,
  [SMALL_STATE(66)] = 1130,
  [SMALL_STATE(67)] = 1138,
  [SMALL_STATE(68)] = 1146,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(28),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(59),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(28),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_eqtex_product_repeat1, 2), SHIFT_REPEAT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eqtex_product_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_eqtex_product_repeat1, 2), SHIFT_REPEAT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_eqtex_product_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_product, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eqtex_product, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eqtex_symbol, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_symbol, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_product, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eqtex_product, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__eqtex_script_content, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eqtex_script_content, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eqtex_symbol, 3, .production_id = 9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_symbol, 3, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eqtex_symbol, 5, .production_id = 15),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_symbol, 5, .production_id = 15),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__eqtex_factor, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eqtex_factor, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eqtex_component, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__eqtex_component, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eqtex_symbol, 3, .production_id = 10),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_symbol, 3, .production_id = 10),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eqtex_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_value, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 11),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_command, 4, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 13),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 14),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 12),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_command, 3, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eqtex_sum_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eqtex_sum_repeat1, 2), SHIFT_REPEAT(19),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqtex_sum, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
