#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_meta_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_meta_token2 = 3,
  anon_sym_LF = 4,
  aux_sym_text_token1 = 5,
  sym_comment = 6,
  sym__poundplus = 7,
  aux_sym_code_token1 = 8,
  aux_sym_code_token2 = 9,
  aux_sym_code_token3 = 10,
  aux_sym_code_token4 = 11,
  anon_sym_BEGIN_EXAMPLE = 12,
  anon_sym_begin_example = 13,
  anon_sym_END_EXAMPLE = 14,
  anon_sym_end_example = 15,
  sym_document = 16,
  sym_meta = 17,
  sym_block = 18,
  sym_line = 19,
  sym_code = 20,
  sym_example = 21,
  aux_sym_document_repeat1 = 22,
  aux_sym_example_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_meta_token1] = "meta_token1",
  [anon_sym_COLON] = ": ",
  [aux_sym_meta_token2] = "meta_token2",
  [anon_sym_LF] = "\n",
  [aux_sym_text_token1] = "text_token1",
  [sym_comment] = "comment",
  [sym__poundplus] = "_poundplus",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_code_token2] = "code_token2",
  [aux_sym_code_token3] = "code_token3",
  [aux_sym_code_token4] = "code_token4",
  [anon_sym_BEGIN_EXAMPLE] = "BEGIN_EXAMPLE",
  [anon_sym_begin_example] = "begin_example",
  [anon_sym_END_EXAMPLE] = "END_EXAMPLE",
  [anon_sym_end_example] = "end_example",
  [sym_document] = "document",
  [sym_meta] = "meta",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_code] = "code",
  [sym_example] = "example",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_example_repeat1] = "example_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_meta_token2] = aux_sym_meta_token2,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_comment] = sym_comment,
  [sym__poundplus] = sym__poundplus,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_code_token2] = aux_sym_code_token2,
  [aux_sym_code_token3] = aux_sym_code_token3,
  [aux_sym_code_token4] = aux_sym_code_token4,
  [anon_sym_BEGIN_EXAMPLE] = anon_sym_BEGIN_EXAMPLE,
  [anon_sym_begin_example] = anon_sym_begin_example,
  [anon_sym_END_EXAMPLE] = anon_sym_END_EXAMPLE,
  [anon_sym_end_example] = anon_sym_end_example,
  [sym_document] = sym_document,
  [sym_meta] = sym_meta,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_code] = sym_code,
  [sym_example] = sym_example,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_example_repeat1] = aux_sym_example_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_meta_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_meta_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__poundplus] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BEGIN_EXAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin_example] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_EXAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_example] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_example] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_example_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_language = 2,
  field_value = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_language] = "language",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 3},
  [2] =
    {field_language, 2},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(15);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'B') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'X') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'B') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'G') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'P') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'X') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'x') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__poundplus);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token4);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_begin_example);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_end_example);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 108},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 108},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__poundplus] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [aux_sym_code_token4] = ACTIONS(1),
    [anon_sym_BEGIN_EXAMPLE] = ACTIONS(1),
    [anon_sym_begin_example] = ACTIONS(1),
    [anon_sym_END_EXAMPLE] = ACTIONS(1),
    [anon_sym_end_example] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym_meta] = STATE(8),
    [sym_block] = STATE(2),
    [sym_line] = STATE(8),
    [sym_code] = STATE(8),
    [sym_example] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__poundplus] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__poundplus,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(8), 4,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
  [23] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_text_token1,
    ACTIONS(18), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__poundplus,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(8), 4,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
  [46] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [55] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [64] = 3,
    ACTIONS(32), 1,
      aux_sym_meta_token1,
    ACTIONS(34), 1,
      aux_sym_code_token1,
    ACTIONS(36), 2,
      anon_sym_BEGIN_EXAMPLE,
      anon_sym_begin_example,
  [75] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [84] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [93] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [102] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [111] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [120] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [129] = 3,
    ACTIONS(62), 1,
      aux_sym_text_token1,
    ACTIONS(64), 1,
      sym__poundplus,
    STATE(15), 1,
      aux_sym_example_repeat1,
  [139] = 3,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(69), 1,
      sym__poundplus,
    STATE(14), 1,
      aux_sym_example_repeat1,
  [149] = 3,
    ACTIONS(62), 1,
      aux_sym_text_token1,
    ACTIONS(71), 1,
      sym__poundplus,
    STATE(14), 1,
      aux_sym_example_repeat1,
  [159] = 1,
    ACTIONS(73), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [164] = 2,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      aux_sym_code_token2,
  [171] = 1,
    ACTIONS(79), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [176] = 1,
    ACTIONS(69), 2,
      aux_sym_text_token1,
      sym__poundplus,
  [181] = 1,
    ACTIONS(81), 1,
      anon_sym_COLON,
  [185] = 1,
    ACTIONS(83), 1,
      aux_sym_code_token3,
  [189] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [193] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [197] = 1,
    ACTIONS(89), 1,
      sym__poundplus,
  [201] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
  [205] = 1,
    ACTIONS(93), 1,
      anon_sym_LF,
  [209] = 1,
    ACTIONS(95), 1,
      aux_sym_code_token4,
  [213] = 1,
    ACTIONS(97), 1,
      sym__poundplus,
  [217] = 1,
    ACTIONS(99), 1,
      anon_sym_LF,
  [221] = 1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [225] = 1,
    ACTIONS(103), 1,
      anon_sym_LF,
  [229] = 1,
    ACTIONS(105), 1,
      aux_sym_code_token4,
  [233] = 1,
    ACTIONS(107), 1,
      aux_sym_code_token3,
  [237] = 1,
    ACTIONS(109), 1,
      aux_sym_meta_token2,
  [241] = 1,
    ACTIONS(111), 1,
      anon_sym_LF,
  [245] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 129,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 164,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 181,
  [SMALL_STATE(21)] = 185,
  [SMALL_STATE(22)] = 189,
  [SMALL_STATE(23)] = 193,
  [SMALL_STATE(24)] = 197,
  [SMALL_STATE(25)] = 201,
  [SMALL_STATE(26)] = 205,
  [SMALL_STATE(27)] = 209,
  [SMALL_STATE(28)] = 213,
  [SMALL_STATE(29)] = 217,
  [SMALL_STATE(30)] = 221,
  [SMALL_STATE(31)] = 225,
  [SMALL_STATE(32)] = 229,
  [SMALL_STATE(33)] = 233,
  [SMALL_STATE(34)] = 237,
  [SMALL_STATE(35)] = 241,
  [SMALL_STATE(36)] = 245,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 8, .production_id = 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 8, .production_id = 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 6),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_example_repeat1, 2), SHIFT_REPEAT(26),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_example_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_org(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
