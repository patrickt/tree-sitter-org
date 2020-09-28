#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  aux_sym_code_token1 = 8,
  aux_sym_code_token2 = 9,
  aux_sym_code_token3 = 10,
  anon_sym_END_SRC = 11,
  anon_sym_end_src = 12,
  anon_sym_BEGIN_EXAMPLE = 13,
  anon_sym_begin_example = 14,
  anon_sym_END_EXAMPLE = 15,
  anon_sym_end_example = 16,
  sym_document = 17,
  sym_meta = 18,
  sym_block = 19,
  sym_line = 20,
  sym_code = 21,
  sym_example = 22,
  aux_sym_document_repeat1 = 23,
  aux_sym_example_repeat1 = 24,
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
  [aux_sym_example_repeat1] = {
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
      if (eof) ADVANCE(65);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(105);
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
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(115);
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
      if (lookahead == 'N') ADVANCE(16);
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
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == 'X') ADVANCE(13);
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
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(108);
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
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(117);
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
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(105);
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
      if (lookahead == 'C') ADVANCE(108);
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
      if (lookahead == 'E') ADVANCE(116);
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
      if (lookahead == 'c') ADVANCE(108);
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
      if (lookahead == 'e') ADVANCE(118);
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
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__poundplus);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_END_SRC);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_end_src);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_begin_example);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_end_example);
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
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__poundplus] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_END_SRC] = ACTIONS(1),
    [anon_sym_end_src] = ACTIONS(1),
    [anon_sym_BEGIN_EXAMPLE] = ACTIONS(1),
    [anon_sym_begin_example] = ACTIONS(1),
    [anon_sym_END_EXAMPLE] = ACTIONS(1),
    [anon_sym_end_example] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(30),
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
  [120] = 3,
    ACTIONS(58), 1,
      aux_sym_text_token1,
    ACTIONS(60), 1,
      sym__poundplus,
    STATE(14), 1,
      aux_sym_example_repeat1,
  [130] = 3,
    ACTIONS(62), 1,
      aux_sym_text_token1,
    ACTIONS(65), 1,
      sym__poundplus,
    STATE(13), 1,
      aux_sym_example_repeat1,
  [140] = 3,
    ACTIONS(58), 1,
      aux_sym_text_token1,
    ACTIONS(67), 1,
      sym__poundplus,
    STATE(13), 1,
      aux_sym_example_repeat1,
  [150] = 1,
    ACTIONS(69), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [155] = 1,
    ACTIONS(71), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
  [160] = 1,
    ACTIONS(73), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [165] = 1,
    ACTIONS(65), 2,
      aux_sym_text_token1,
      sym__poundplus,
  [170] = 1,
    ACTIONS(75), 1,
      aux_sym_code_token3,
  [174] = 1,
    ACTIONS(77), 1,
      anon_sym_LF,
  [178] = 1,
    ACTIONS(79), 1,
      anon_sym_LF,
  [182] = 1,
    ACTIONS(81), 1,
      sym__poundplus,
  [186] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [190] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [194] = 1,
    ACTIONS(87), 1,
      aux_sym_meta_token2,
  [198] = 1,
    ACTIONS(89), 1,
      aux_sym_code_token2,
  [202] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
  [206] = 1,
    ACTIONS(93), 1,
      anon_sym_LF,
  [210] = 1,
    ACTIONS(95), 1,
      anon_sym_COLON,
  [214] = 1,
    ACTIONS(97), 1,
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
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 150,
  [SMALL_STATE(16)] = 155,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 165,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 174,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 182,
  [SMALL_STATE(23)] = 186,
  [SMALL_STATE(24)] = 190,
  [SMALL_STATE(25)] = 194,
  [SMALL_STATE(26)] = 198,
  [SMALL_STATE(27)] = 202,
  [SMALL_STATE(28)] = 206,
  [SMALL_STATE(29)] = 210,
  [SMALL_STATE(30)] = 214,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 6),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 5),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_example_repeat1, 2), SHIFT_REPEAT(24),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_example_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
