#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_BEGIN_QUOTE = 16,
  anon_sym_begin_quote = 17,
  anon_sym_END_QUOTE = 18,
  anon_sym_end_quote = 19,
  anon_sym_BEGIN_VERSE = 20,
  anon_sym_begin_verse = 21,
  anon_sym_END_VERSE = 22,
  anon_sym_end_verse = 23,
  sym_document = 24,
  sym_meta = 25,
  sym_block = 26,
  sym_line = 27,
  sym_code = 28,
  sym_example = 29,
  sym_quote = 30,
  sym_verse = 31,
  aux_sym_document_repeat1 = 32,
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
  [anon_sym_BEGIN_QUOTE] = "BEGIN_QUOTE",
  [anon_sym_begin_quote] = "begin_quote",
  [anon_sym_END_QUOTE] = "END_QUOTE",
  [anon_sym_end_quote] = "end_quote",
  [anon_sym_BEGIN_VERSE] = "BEGIN_VERSE",
  [anon_sym_begin_verse] = "begin_verse",
  [anon_sym_END_VERSE] = "END_VERSE",
  [anon_sym_end_verse] = "end_verse",
  [sym_document] = "document",
  [sym_meta] = "meta",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_code] = "code",
  [sym_example] = "example",
  [sym_quote] = "quote",
  [sym_verse] = "verse",
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
  [anon_sym_BEGIN_QUOTE] = anon_sym_BEGIN_QUOTE,
  [anon_sym_begin_quote] = anon_sym_begin_quote,
  [anon_sym_END_QUOTE] = anon_sym_END_QUOTE,
  [anon_sym_end_quote] = anon_sym_end_quote,
  [anon_sym_BEGIN_VERSE] = anon_sym_BEGIN_VERSE,
  [anon_sym_begin_verse] = anon_sym_begin_verse,
  [anon_sym_END_VERSE] = anon_sym_END_VERSE,
  [anon_sym_end_verse] = anon_sym_end_verse,
  [sym_document] = sym_document,
  [sym_meta] = sym_meta,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_code] = sym_code,
  [sym_example] = sym_example,
  [sym_quote] = sym_quote,
  [sym_verse] = sym_verse,
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
  [anon_sym_BEGIN_QUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_QUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN_VERSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin_verse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_VERSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_verse] = {
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
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_verse] = {
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
      if (eof) ADVANCE(97);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'B') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(242);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead == 'Q') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(40);
      if (lookahead == 'V') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(249);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'Q') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'U') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'X') ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == 'X') ADVANCE(12);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(92);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'q') ADVANCE(93);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'B') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'Q') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'M') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'P') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'q') ADVANCE(141);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'x') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__poundplus);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'A') ADVANCE(175);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'A') ADVANCE(176);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'C') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'C') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'D') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'Q') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(183);
      if (lookahead == 'V') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(194);
      if (lookahead == 'Q') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(185);
      if (lookahead == 'V') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'G') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'I') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'L') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'L') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'M') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'M') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'N') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'N') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'O') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'O') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'P') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'P') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'S') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'S') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'T') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'T') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'U') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'U') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'X') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'X') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'c') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'c') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'd') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'q') ADVANCE(235);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == 'v') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'q') ADVANCE(236);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'g') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'i') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'l') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'l') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'm') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'm') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'n') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'n') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'o') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'o') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'p') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'p') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 's') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 's') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 't') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 't') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'u') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'u') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'x') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'x') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_code_token4);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_begin_example);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_end_example);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_end_example);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_BEGIN_QUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_BEGIN_QUOTE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BEGIN_QUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_begin_quote);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_begin_quote);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_begin_quote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_END_QUOTE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_END_QUOTE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_end_quote);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_end_quote);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BEGIN_VERSE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_BEGIN_VERSE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BEGIN_VERSE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_begin_verse);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_begin_verse);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_begin_verse);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(143);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_END_VERSE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_END_VERSE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_end_verse);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_end_verse);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 96},
  [3] = {.lex_state = 96},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 96},
  [6] = {.lex_state = 96},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 96},
  [13] = {.lex_state = 96},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 240},
  [20] = {.lex_state = 240},
  [21] = {.lex_state = 240},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 240},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 240},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
    [anon_sym_BEGIN_QUOTE] = ACTIONS(1),
    [anon_sym_begin_quote] = ACTIONS(1),
    [anon_sym_END_QUOTE] = ACTIONS(1),
    [anon_sym_end_quote] = ACTIONS(1),
    [anon_sym_BEGIN_VERSE] = ACTIONS(1),
    [anon_sym_begin_verse] = ACTIONS(1),
    [anon_sym_END_VERSE] = ACTIONS(1),
    [anon_sym_end_verse] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(43),
    [sym_meta] = STATE(8),
    [sym_block] = STATE(2),
    [sym_line] = STATE(8),
    [sym_code] = STATE(8),
    [sym_example] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_verse] = STATE(8),
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
    STATE(8), 6,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
      sym_quote,
      sym_verse,
  [25] = 6,
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
    STATE(8), 6,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
      sym_quote,
      sym_verse,
  [50] = 5,
    ACTIONS(24), 1,
      aux_sym_meta_token1,
    ACTIONS(26), 1,
      aux_sym_code_token1,
    ACTIONS(28), 2,
      anon_sym_BEGIN_EXAMPLE,
      anon_sym_begin_example,
    ACTIONS(30), 2,
      anon_sym_BEGIN_QUOTE,
      anon_sym_begin_quote,
    ACTIONS(32), 2,
      anon_sym_BEGIN_VERSE,
      anon_sym_begin_verse,
  [69] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [78] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [87] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [96] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [105] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [114] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [123] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [132] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [141] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [150] = 2,
    ACTIONS(70), 1,
      anon_sym_LF,
    ACTIONS(72), 1,
      aux_sym_code_token2,
  [157] = 1,
    ACTIONS(74), 2,
      anon_sym_END_VERSE,
      anon_sym_end_verse,
  [162] = 1,
    ACTIONS(76), 2,
      anon_sym_END_QUOTE,
      anon_sym_end_quote,
  [167] = 1,
    ACTIONS(78), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [172] = 1,
    ACTIONS(80), 1,
      sym__poundplus,
  [176] = 1,
    ACTIONS(82), 1,
      aux_sym_code_token3,
  [180] = 1,
    ACTIONS(84), 1,
      aux_sym_code_token3,
  [184] = 1,
    ACTIONS(86), 1,
      aux_sym_code_token3,
  [188] = 1,
    ACTIONS(88), 1,
      anon_sym_LF,
  [192] = 1,
    ACTIONS(90), 1,
      aux_sym_code_token3,
  [196] = 1,
    ACTIONS(92), 1,
      sym__poundplus,
  [200] = 1,
    ACTIONS(94), 1,
      sym__poundplus,
  [204] = 1,
    ACTIONS(96), 1,
      sym__poundplus,
  [208] = 1,
    ACTIONS(98), 1,
      anon_sym_LF,
  [212] = 1,
    ACTIONS(100), 1,
      aux_sym_code_token4,
  [216] = 1,
    ACTIONS(102), 1,
      sym__poundplus,
  [220] = 1,
    ACTIONS(104), 1,
      anon_sym_LF,
  [224] = 1,
    ACTIONS(106), 1,
      aux_sym_code_token3,
  [228] = 1,
    ACTIONS(108), 1,
      aux_sym_meta_token2,
  [232] = 1,
    ACTIONS(110), 1,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(112), 1,
      aux_sym_code_token4,
  [240] = 1,
    ACTIONS(114), 1,
      anon_sym_LF,
  [244] = 1,
    ACTIONS(116), 1,
      anon_sym_LF,
  [248] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [252] = 1,
    ACTIONS(120), 1,
      anon_sym_LF,
  [256] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [260] = 1,
    ACTIONS(124), 1,
      anon_sym_LF,
  [264] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
  [268] = 1,
    ACTIONS(128), 1,
      anon_sym_COLON,
  [272] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 184,
  [SMALL_STATE(22)] = 188,
  [SMALL_STATE(23)] = 192,
  [SMALL_STATE(24)] = 196,
  [SMALL_STATE(25)] = 200,
  [SMALL_STATE(26)] = 204,
  [SMALL_STATE(27)] = 208,
  [SMALL_STATE(28)] = 212,
  [SMALL_STATE(29)] = 216,
  [SMALL_STATE(30)] = 220,
  [SMALL_STATE(31)] = 224,
  [SMALL_STATE(32)] = 228,
  [SMALL_STATE(33)] = 232,
  [SMALL_STATE(34)] = 236,
  [SMALL_STATE(35)] = 240,
  [SMALL_STATE(36)] = 244,
  [SMALL_STATE(37)] = 248,
  [SMALL_STATE(38)] = 252,
  [SMALL_STATE(39)] = 256,
  [SMALL_STATE(40)] = 260,
  [SMALL_STATE(41)] = 264,
  [SMALL_STATE(42)] = 268,
  [SMALL_STATE(43)] = 272,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 8, .production_id = 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 8, .production_id = 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse, 7, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse, 7, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 7, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 7, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 7, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 7, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
