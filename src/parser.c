#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
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
};

enum {
  field_contents = 1,
  field_key = 2,
  field_language = 3,
  field_value = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_contents] = "contents",
  [field_key] = "key",
  [field_language] = "language",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 3},
  [2] =
    {field_contents, 3},
  [3] =
    {field_contents, 4},
    {field_language, 2},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(65);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(162);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'X') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'P') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'X') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(100);
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
      if (lookahead == 'A') ADVANCE(121);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'A') ADVANCE(122);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'C') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'C') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'D') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'G') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'I') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'L') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'L') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'M') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'M') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'N') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'N') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'P') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'P') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'X') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'X') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'c') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'c') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'd') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 's') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 's') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'g') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'i') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'l') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'l') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'm') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'm') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'n') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'n') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'p') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'p') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'x') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'x') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_code_token4);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_begin_example);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_end_example);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_end_example);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 64},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 160},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 160},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 160},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__poundplus] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [aux_sym_code_token2] = ACTIONS(1),
    [aux_sym_code_token4] = ACTIONS(1),
    [anon_sym_BEGIN_EXAMPLE] = ACTIONS(1),
    [anon_sym_begin_example] = ACTIONS(1),
    [anon_sym_END_EXAMPLE] = ACTIONS(1),
    [anon_sym_end_example] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(31),
    [sym_meta] = STATE(8),
    [sym_block] = STATE(3),
    [sym_line] = STATE(8),
    [sym_code] = STATE(8),
    [sym_example] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__poundplus] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_text_token1,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__poundplus,
    STATE(2), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(8), 4,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
  [23] = 6,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__poundplus,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
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
  [120] = 1,
    ACTIONS(58), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [125] = 2,
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      aux_sym_code_token2,
  [132] = 1,
    ACTIONS(64), 1,
      aux_sym_meta_token2,
  [136] = 1,
    ACTIONS(66), 1,
      aux_sym_code_token3,
  [140] = 1,
    ACTIONS(68), 1,
      anon_sym_LF,
  [144] = 1,
    ACTIONS(70), 1,
      aux_sym_code_token3,
  [148] = 1,
    ACTIONS(72), 1,
      anon_sym_LF,
  [152] = 1,
    ACTIONS(74), 1,
      sym__poundplus,
  [156] = 1,
    ACTIONS(76), 1,
      aux_sym_code_token3,
  [160] = 1,
    ACTIONS(78), 1,
      sym__poundplus,
  [164] = 1,
    ACTIONS(80), 1,
      anon_sym_LF,
  [168] = 1,
    ACTIONS(82), 1,
      aux_sym_code_token4,
  [172] = 1,
    ACTIONS(84), 1,
      sym__poundplus,
  [176] = 1,
    ACTIONS(86), 1,
      anon_sym_LF,
  [180] = 1,
    ACTIONS(88), 1,
      anon_sym_LF,
  [184] = 1,
    ACTIONS(90), 1,
      aux_sym_code_token4,
  [188] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [192] = 1,
    ACTIONS(94), 1,
      anon_sym_LF,
  [196] = 1,
    ACTIONS(96), 1,
      anon_sym_COLON,
  [200] = 1,
    ACTIONS(98), 1,
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
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 152,
  [SMALL_STATE(20)] = 156,
  [SMALL_STATE(21)] = 160,
  [SMALL_STATE(22)] = 164,
  [SMALL_STATE(23)] = 168,
  [SMALL_STATE(24)] = 172,
  [SMALL_STATE(25)] = 176,
  [SMALL_STATE(26)] = 180,
  [SMALL_STATE(27)] = 184,
  [SMALL_STATE(28)] = 188,
  [SMALL_STATE(29)] = 192,
  [SMALL_STATE(30)] = 196,
  [SMALL_STATE(31)] = 200,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 8, .production_id = 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 8, .production_id = 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 7, .production_id = 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 7, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
