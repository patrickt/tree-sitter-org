#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  aux_sym_meta_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_meta_token2 = 3,
  anon_sym_LF = 4,
  aux_sym_text_token1 = 5,
  sym_comment = 6,
  sym__poundplus = 7,
  anon_sym_BEGIN_SRC = 8,
  anon_sym_begin_src = 9,
  anon_sym_END_SRC = 10,
  anon_sym_end_src = 11,
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
  aux_sym_code_repeat1 = 23,
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
  [anon_sym_BEGIN_SRC] = "BEGIN_SRC",
  [anon_sym_begin_src] = "begin_src",
  [anon_sym_END_SRC] = "END_SRC",
  [anon_sym_end_src] = "end_src",
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
  [aux_sym_code_repeat1] = "code_repeat1",
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
  [anon_sym_BEGIN_SRC] = anon_sym_BEGIN_SRC,
  [anon_sym_begin_src] = anon_sym_begin_src,
  [anon_sym_END_SRC] = anon_sym_END_SRC,
  [anon_sym_end_src] = anon_sym_end_src,
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
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
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
  [anon_sym_BEGIN_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_src] = {
    .visible = true,
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
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 3},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(62);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'B') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'X') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'X') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'B') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'G') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'P') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'X') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'x') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__poundplus);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BEGIN_SRC);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BEGIN_SRC);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_begin_src);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_begin_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_END_SRC);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_end_src);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_begin_example);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
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
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__poundplus] = ACTIONS(1),
    [anon_sym_BEGIN_SRC] = ACTIONS(1),
    [anon_sym_begin_src] = ACTIONS(1),
    [anon_sym_END_SRC] = ACTIONS(1),
    [anon_sym_end_src] = ACTIONS(1),
    [anon_sym_BEGIN_EXAMPLE] = ACTIONS(1),
    [anon_sym_begin_example] = ACTIONS(1),
    [anon_sym_END_EXAMPLE] = ACTIONS(1),
    [anon_sym_end_example] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(33),
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
  [46] = 3,
    ACTIONS(24), 1,
      aux_sym_meta_token1,
    ACTIONS(26), 2,
      anon_sym_BEGIN_SRC,
      anon_sym_begin_src,
    ACTIONS(28), 2,
      anon_sym_BEGIN_EXAMPLE,
      anon_sym_begin_example,
  [58] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [67] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [76] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [85] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [94] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [103] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [112] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [121] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [130] = 3,
    ACTIONS(62), 1,
      aux_sym_text_token1,
    ACTIONS(65), 1,
      sym__poundplus,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [140] = 3,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(69), 1,
      sym__poundplus,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [150] = 3,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(71), 1,
      sym__poundplus,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [160] = 3,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym__poundplus,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [170] = 3,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(75), 1,
      sym__poundplus,
    STATE(15), 1,
      aux_sym_code_repeat1,
  [180] = 1,
    ACTIONS(77), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [185] = 1,
    ACTIONS(79), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
  [190] = 1,
    ACTIONS(65), 2,
      aux_sym_text_token1,
      sym__poundplus,
  [195] = 1,
    ACTIONS(81), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [200] = 1,
    ACTIONS(83), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
  [205] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [209] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [213] = 1,
    ACTIONS(89), 1,
      anon_sym_LF,
  [217] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
  [221] = 1,
    ACTIONS(93), 1,
      aux_sym_meta_token2,
  [225] = 1,
    ACTIONS(95), 1,
      anon_sym_LF,
  [229] = 1,
    ACTIONS(97), 1,
      anon_sym_LF,
  [233] = 1,
    ACTIONS(99), 1,
      anon_sym_LF,
  [237] = 1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(103), 1,
      anon_sym_COLON,
  [245] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 121,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 150,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 195,
  [SMALL_STATE(22)] = 200,
  [SMALL_STATE(23)] = 205,
  [SMALL_STATE(24)] = 209,
  [SMALL_STATE(25)] = 213,
  [SMALL_STATE(26)] = 217,
  [SMALL_STATE(27)] = 221,
  [SMALL_STATE(28)] = 225,
  [SMALL_STATE(29)] = 229,
  [SMALL_STATE(30)] = 233,
  [SMALL_STATE(31)] = 237,
  [SMALL_STATE(32)] = 241,
  [SMALL_STATE(33)] = 245,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 6),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(23),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
