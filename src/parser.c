#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_meta_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_meta_token2 = 3,
  anon_sym_LF = 4,
  sym_comment = 5,
  sym__bareword = 6,
  anon_sym_STAR = 7,
  sym__poundplus = 8,
  aux_sym_code_token1 = 9,
  aux_sym_code_token2 = 10,
  aux_sym_code_token3 = 11,
  aux_sym_code_token4 = 12,
  anon_sym_BEGIN_EXAMPLE = 13,
  anon_sym_begin_example = 14,
  anon_sym_END_EXAMPLE = 15,
  anon_sym_end_example = 16,
  anon_sym_BEGIN_QUOTE = 17,
  anon_sym_begin_quote = 18,
  anon_sym_END_QUOTE = 19,
  anon_sym_end_quote = 20,
  anon_sym_BEGIN_VERSE = 21,
  anon_sym_begin_verse = 22,
  anon_sym_END_VERSE = 23,
  anon_sym_end_verse = 24,
  sym_document = 25,
  sym_meta = 26,
  sym_block = 27,
  sym_line = 28,
  sym__word = 29,
  sym_bold = 30,
  sym_code = 31,
  sym_example = 32,
  sym_quote = 33,
  sym_verse = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_line_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_meta_token1] = "meta_token1",
  [anon_sym_COLON] = ": ",
  [aux_sym_meta_token2] = "meta_token2",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym__bareword] = "_bareword",
  [anon_sym_STAR] = "*",
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
  [sym__word] = "_word",
  [sym_bold] = "bold",
  [sym_code] = "code",
  [sym_example] = "example",
  [sym_quote] = "quote",
  [sym_verse] = "verse",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_meta_token2] = aux_sym_meta_token2,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [sym__bareword] = sym__bareword,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym__word] = sym__word,
  [sym_bold] = sym_bold,
  [sym_code] = sym_code,
  [sym_example] = sym_example,
  [sym_quote] = sym_quote,
  [sym_verse] = sym_verse,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__bareword] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
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
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_bold] = {
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
  [aux_sym_line_repeat1] = {
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
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == '!' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 'B') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '!') ADVANCE(191);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(200);
      if (lookahead == 'E') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead == '!' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(282);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'Q') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'V') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'X') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'q') ADVANCE(49);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '!' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'B') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'Q') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'G') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'U') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'X') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'q') ADVANCE(97);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'x') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '*') ADVANCE(192);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'D') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'Q') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == 'V') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == 'Q') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'M') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'R') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'S') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'S') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'U') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'X') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'X') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'q') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'q') ADVANCE(188);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 'v') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == 'x') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__bareword);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__poundplus);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'A') ADVANCE(215);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'A') ADVANCE(216);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'C') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'C') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'D') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'Q') ADVANCE(231);
      if (lookahead == 'S') ADVANCE(223);
      if (lookahead == 'V') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == 'Q') ADVANCE(232);
      if (lookahead == 'S') ADVANCE(225);
      if (lookahead == 'V') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'G') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'I') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'L') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'L') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'M') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'M') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'N') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'N') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'O') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'O') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'P') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'P') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'R') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'S') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'S') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'T') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'T') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'U') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'U') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'X') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'X') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'c') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'c') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'd') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'q') ADVANCE(275);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 'v') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'q') ADVANCE(276);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'g') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'i') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'l') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'l') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'm') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'm') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'n') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'n') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'o') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'o') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'p') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'p') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'r') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 's') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 's') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 't') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 't') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'u') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'u') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'x') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'x') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_code_token3);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '+') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_code_token4);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BEGIN_EXAMPLE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_begin_example);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_begin_example);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_END_EXAMPLE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_end_example);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_end_example);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BEGIN_QUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BEGIN_QUOTE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BEGIN_QUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_begin_quote);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_begin_quote);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_begin_quote);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_END_QUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_END_QUOTE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_end_quote);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_end_quote);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BEGIN_VERSE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BEGIN_VERSE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_BEGIN_VERSE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_begin_verse);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_begin_verse);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_begin_verse);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_END_VERSE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_END_VERSE);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_end_verse);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_end_verse);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 280},
  [24] = {.lex_state = 280},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 280},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 280},
  [35] = {.lex_state = 280},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__bareword] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [sym_document] = STATE(47),
    [sym_meta] = STATE(8),
    [sym_block] = STATE(2),
    [sym_line] = STATE(8),
    [sym__word] = STATE(6),
    [sym_bold] = STATE(6),
    [sym_code] = STATE(8),
    [sym_example] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_verse] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__bareword] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [sym__poundplus] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__bareword,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      sym__poundplus,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(6), 3,
      sym__word,
      sym_bold,
      aux_sym_line_repeat1,
    STATE(8), 6,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
      sym_quote,
      sym_verse,
  [33] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(20), 1,
      sym__bareword,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(26), 1,
      sym__poundplus,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(6), 3,
      sym__word,
      sym_bold,
      aux_sym_line_repeat1,
    STATE(8), 6,
      sym_meta,
      sym_line,
      sym_code,
      sym_example,
      sym_quote,
      sym_verse,
  [66] = 5,
    ACTIONS(29), 1,
      aux_sym_meta_token1,
    ACTIONS(31), 1,
      aux_sym_code_token1,
    ACTIONS(33), 2,
      anon_sym_BEGIN_EXAMPLE,
      anon_sym_begin_example,
    ACTIONS(35), 2,
      anon_sym_BEGIN_QUOTE,
      anon_sym_begin_quote,
    ACTIONS(37), 2,
      anon_sym_BEGIN_VERSE,
      anon_sym_begin_verse,
  [85] = 4,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      sym__bareword,
    ACTIONS(44), 1,
      anon_sym_STAR,
    STATE(5), 3,
      sym__word,
      sym_bold,
      aux_sym_line_repeat1,
  [100] = 4,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(49), 1,
      sym__bareword,
    ACTIONS(51), 1,
      anon_sym_STAR,
    STATE(5), 3,
      sym__word,
      sym_bold,
      aux_sym_line_repeat1,
  [115] = 2,
    ACTIONS(55), 1,
      sym__bareword,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [125] = 2,
    ACTIONS(59), 1,
      sym__bareword,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [135] = 2,
    ACTIONS(63), 1,
      sym__bareword,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [145] = 2,
    ACTIONS(67), 1,
      sym__bareword,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [155] = 2,
    ACTIONS(71), 1,
      sym__bareword,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [165] = 2,
    ACTIONS(75), 1,
      sym__bareword,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [175] = 2,
    ACTIONS(79), 1,
      sym__bareword,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [185] = 2,
    ACTIONS(83), 1,
      sym__bareword,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [195] = 2,
    ACTIONS(87), 1,
      sym__bareword,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_STAR,
      sym__poundplus,
  [205] = 1,
    ACTIONS(89), 3,
      anon_sym_LF,
      sym__bareword,
      anon_sym_STAR,
  [211] = 2,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      aux_sym_code_token2,
  [218] = 1,
    ACTIONS(95), 2,
      anon_sym_END_VERSE,
      anon_sym_end_verse,
  [223] = 1,
    ACTIONS(97), 2,
      anon_sym_END_QUOTE,
      anon_sym_end_quote,
  [228] = 1,
    ACTIONS(99), 2,
      anon_sym_END_EXAMPLE,
      anon_sym_end_example,
  [233] = 1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [237] = 1,
    ACTIONS(103), 1,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(105), 1,
      aux_sym_code_token3,
  [245] = 1,
    ACTIONS(107), 1,
      aux_sym_code_token3,
  [249] = 1,
    ACTIONS(109), 1,
      anon_sym_LF,
  [253] = 1,
    ACTIONS(111), 1,
      sym__poundplus,
  [257] = 1,
    ACTIONS(113), 1,
      aux_sym_code_token3,
  [261] = 1,
    ACTIONS(115), 1,
      sym__poundplus,
  [265] = 1,
    ACTIONS(117), 1,
      sym__poundplus,
  [269] = 1,
    ACTIONS(119), 1,
      sym__poundplus,
  [273] = 1,
    ACTIONS(121), 1,
      sym__bareword,
  [277] = 1,
    ACTIONS(123), 1,
      aux_sym_code_token4,
  [281] = 1,
    ACTIONS(125), 1,
      sym__poundplus,
  [285] = 1,
    ACTIONS(127), 1,
      aux_sym_code_token3,
  [289] = 1,
    ACTIONS(129), 1,
      aux_sym_code_token3,
  [293] = 1,
    ACTIONS(131), 1,
      aux_sym_meta_token2,
  [297] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [301] = 1,
    ACTIONS(135), 1,
      aux_sym_code_token4,
  [305] = 1,
    ACTIONS(137), 1,
      anon_sym_LF,
  [309] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [313] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [317] = 1,
    ACTIONS(143), 1,
      anon_sym_LF,
  [321] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [325] = 1,
    ACTIONS(147), 1,
      anon_sym_LF,
  [329] = 1,
    ACTIONS(149), 1,
      anon_sym_COLON,
  [333] = 1,
    ACTIONS(151), 1,
      anon_sym_STAR,
  [337] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 233,
  [SMALL_STATE(22)] = 237,
  [SMALL_STATE(23)] = 241,
  [SMALL_STATE(24)] = 245,
  [SMALL_STATE(25)] = 249,
  [SMALL_STATE(26)] = 253,
  [SMALL_STATE(27)] = 257,
  [SMALL_STATE(28)] = 261,
  [SMALL_STATE(29)] = 265,
  [SMALL_STATE(30)] = 269,
  [SMALL_STATE(31)] = 273,
  [SMALL_STATE(32)] = 277,
  [SMALL_STATE(33)] = 281,
  [SMALL_STATE(34)] = 285,
  [SMALL_STATE(35)] = 289,
  [SMALL_STATE(36)] = 293,
  [SMALL_STATE(37)] = 297,
  [SMALL_STATE(38)] = 301,
  [SMALL_STATE(39)] = 305,
  [SMALL_STATE(40)] = 309,
  [SMALL_STATE(41)] = 313,
  [SMALL_STATE(42)] = 317,
  [SMALL_STATE(43)] = 321,
  [SMALL_STATE(44)] = 325,
  [SMALL_STATE(45)] = 329,
  [SMALL_STATE(46)] = 333,
  [SMALL_STATE(47)] = 337,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(31),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse, 7, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse, 7, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 7, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 7, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 7, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 7, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 8, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 8, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
