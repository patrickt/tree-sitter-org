#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_meta = 1,
  anon_sym_POUND_PLUSBEGIN_SRC = 2,
  anon_sym_POUND_PLUSbegin_src = 3,
  anon_sym_POUND_PLUSEND_SRC = 4,
  anon_sym_POUND_PLUSend_src = 5,
  anon_sym_LF = 6,
  aux_sym_text_token1 = 7,
  sym_comment = 8,
  sym_document = 9,
  sym_block = 10,
  sym_line = 11,
  sym_code = 12,
  aux_sym_document_repeat1 = 13,
  aux_sym_document_repeat2 = 14,
  aux_sym_code_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_meta] = "meta",
  [anon_sym_POUND_PLUSBEGIN_SRC] = "#+BEGIN_SRC",
  [anon_sym_POUND_PLUSbegin_src] = "#+begin_src",
  [anon_sym_POUND_PLUSEND_SRC] = "#+END_SRC",
  [anon_sym_POUND_PLUSend_src] = "#+end_src",
  [anon_sym_LF] = "\n",
  [aux_sym_text_token1] = "text_token1",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_code] = "code",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_meta] = sym_meta,
  [anon_sym_POUND_PLUSBEGIN_SRC] = anon_sym_POUND_PLUSBEGIN_SRC,
  [anon_sym_POUND_PLUSbegin_src] = anon_sym_POUND_PLUSbegin_src,
  [anon_sym_POUND_PLUSEND_SRC] = anon_sym_POUND_PLUSEND_SRC,
  [anon_sym_POUND_PLUSend_src] = anon_sym_POUND_PLUSend_src,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_code] = sym_code,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_PLUSBEGIN_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PLUSbegin_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PLUSEND_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PLUSend_src] = {
    .visible = true,
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
  [sym_document] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_meta);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSBEGIN_SRC);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSBEGIN_SRC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSbegin_src);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSbegin_src);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSEND_SRC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSend_src);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'G') ADVANCE(23);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(1),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(1),
    [anon_sym_POUND_PLUSEND_SRC] = ACTIONS(1),
    [anon_sym_POUND_PLUSend_src] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(16),
    [sym_block] = STATE(3),
    [sym_line] = STATE(10),
    [sym_code] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_meta] = ACTIONS(5),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(7),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_block] = STATE(4),
    [sym_line] = STATE(10),
    [sym_code] = STATE(10),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_document_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_meta] = ACTIONS(15),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(7),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_block] = STATE(5),
    [sym_line] = STATE(10),
    [sym_code] = STATE(10),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(7),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [4] = {
    [sym_block] = STATE(5),
    [sym_line] = STATE(10),
    [sym_code] = STATE(10),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(7),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [5] = {
    [sym_block] = STATE(5),
    [sym_line] = STATE(10),
    [sym_code] = STATE(10),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(21),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(21),
    [aux_sym_text_token1] = ACTIONS(24),
    [sym_comment] = ACTIONS(27),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_meta,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(35), 4,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
      aux_sym_text_token1,
      sym_comment,
  [16] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 4,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
      aux_sym_text_token1,
      sym_comment,
  [26] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 4,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
      aux_sym_text_token1,
      sym_comment,
  [36] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 4,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
      aux_sym_text_token1,
      sym_comment,
  [46] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 4,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
      aux_sym_text_token1,
      sym_comment,
  [56] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 4,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
      aux_sym_text_token1,
      sym_comment,
  [66] = 3,
    ACTIONS(59), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      aux_sym_code_repeat1,
    ACTIONS(57), 2,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [77] = 3,
    ACTIONS(63), 1,
      aux_sym_text_token1,
    STATE(13), 1,
      aux_sym_code_repeat1,
    ACTIONS(61), 2,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [88] = 3,
    ACTIONS(59), 1,
      aux_sym_text_token1,
    STATE(13), 1,
      aux_sym_code_repeat1,
    ACTIONS(66), 2,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [99] = 1,
    ACTIONS(61), 3,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
      aux_sym_text_token1,
  [105] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [109] = 1,
    ACTIONS(70), 1,
      anon_sym_LF,
  [113] = 1,
    ACTIONS(72), 1,
      anon_sym_LF,
  [117] = 1,
    ACTIONS(74), 1,
      anon_sym_LF,
  [121] = 1,
    ACTIONS(76), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 16,
  [SMALL_STATE(8)] = 26,
  [SMALL_STATE(9)] = 36,
  [SMALL_STATE(10)] = 46,
  [SMALL_STATE(11)] = 56,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 77,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 105,
  [SMALL_STATE(17)] = 109,
  [SMALL_STATE(18)] = 113,
  [SMALL_STATE(19)] = 117,
  [SMALL_STATE(20)] = 121,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(17),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 4),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(19),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
