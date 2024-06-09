#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  aux_sym_word_token1 = 1,
  aux_sym_word_noli_token1 = 2,
  aux_sym_word_noli_token2 = 3,
  anon_sym_STAR = 4,
  anon_sym_SQUOTE = 5,
  aux_sym__word_common_token1 = 6,
  aux_sym__word_common_token2 = 7,
  anon_sym_SQUOTE2 = 8,
  aux_sym__word_common_token3 = 9,
  anon_sym_PIPE = 10,
  anon_sym_LBRACE = 11,
  anon_sym_LBRACE_RBRACE = 12,
  aux_sym__word_common_token4 = 13,
  anon_sym_LPAREN = 14,
  anon_sym_LBRACK = 15,
  anon_sym_TILDE = 16,
  anon_sym_GT = 17,
  anon_sym_COMMA = 18,
  anon_sym_Note_COLON = 19,
  anon_sym_NOTE_COLON = 20,
  anon_sym_Notes_COLON = 21,
  anon_sym_Warning_COLON = 22,
  anon_sym_WARNING_COLON = 23,
  anon_sym_Deprecated = 24,
  anon_sym_DEPRECATED_COLON = 25,
  aux_sym_keycode_token1 = 26,
  aux_sym_keycode_token2 = 27,
  aux_sym_keycode_token3 = 28,
  aux_sym_keycode_token4 = 29,
  aux_sym_keycode_token5 = 30,
  anon_sym_CTRL_DASH_LBRACEchar_RBRACE = 31,
  aux_sym_keycode_token6 = 32,
  aux_sym_keycode_token7 = 33,
  aux_sym_uppercase_name_token1 = 34,
  aux_sym_uppercase_name_token2 = 35,
  anon_sym_LT = 36,
  aux_sym_codeblock_token1 = 37,
  aux_sym_codeblock_token2 = 38,
  aux_sym__blank_token1 = 39,
  aux_sym_line_li_token1 = 40,
  aux_sym_line_code_token1 = 41,
  sym_modeline = 42,
  aux_sym_h1_token1 = 43,
  aux_sym_h2_token1 = 44,
  aux_sym_tag_token1 = 45,
  anon_sym_STAR2 = 46,
  sym_url_word = 47,
  aux_sym_optionlink_token1 = 48,
  aux_sym_taglink_token1 = 49,
  anon_sym_PIPE2 = 50,
  anon_sym_BQUOTE = 51,
  aux_sym_codespan_token1 = 52,
  anon_sym_BQUOTE2 = 53,
  aux_sym_argument_token1 = 54,
  anon_sym_RBRACE = 55,
  anon_sym_QMARK = 56,
  sym_help_file = 57,
  sym__atom = 58,
  sym_word = 59,
  sym__atom_noli = 60,
  sym_word_noli = 61,
  sym__atom_common = 62,
  sym__word_common = 63,
  sym_note = 64,
  sym_keycode = 65,
  sym_uppercase_name = 66,
  sym__uppercase_words = 67,
  sym_block = 68,
  sym_codeblock = 69,
  sym__blank = 70,
  sym_line = 71,
  sym_line_li = 72,
  sym_line_code = 73,
  sym__line_noli = 74,
  sym_column_heading = 75,
  sym__column_heading = 76,
  sym_h1 = 77,
  sym_h2 = 78,
  sym_h3 = 79,
  sym_tag = 80,
  sym_url = 81,
  sym_optionlink = 82,
  sym_taglink = 83,
  sym_codespan = 84,
  sym_argument = 85,
  aux_sym_help_file_repeat1 = 86,
  aux_sym_help_file_repeat2 = 87,
  aux_sym_help_file_repeat3 = 88,
  aux_sym_uppercase_name_repeat1 = 89,
  aux_sym_block_repeat1 = 90,
  aux_sym_block_repeat2 = 91,
  aux_sym_codeblock_repeat1 = 92,
  aux_sym_line_li_repeat1 = 93,
  aux_sym_line_li_repeat2 = 94,
  alias_sym_code = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [aux_sym__word_common_token2] = "_word_common_token2",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token3] = "_word_common_token3",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_TILDE] = "~",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_Note_COLON] = "Note:",
  [anon_sym_NOTE_COLON] = "NOTE:",
  [anon_sym_Notes_COLON] = "Notes:",
  [anon_sym_Warning_COLON] = "Warning:",
  [anon_sym_WARNING_COLON] = "WARNING:",
  [anon_sym_Deprecated] = "Deprecated",
  [anon_sym_DEPRECATED_COLON] = "DEPRECATED:",
  [aux_sym_keycode_token1] = "keycode_token1",
  [aux_sym_keycode_token2] = "keycode_token2",
  [aux_sym_keycode_token3] = "keycode_token3",
  [aux_sym_keycode_token4] = "keycode_token4",
  [aux_sym_keycode_token5] = "keycode_token5",
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = "CTRL-{char}",
  [aux_sym_keycode_token6] = "keycode_token6",
  [aux_sym_keycode_token7] = "keycode_token7",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [aux_sym_uppercase_name_token2] = "uppercase_name_token2",
  [anon_sym_LT] = "<",
  [aux_sym_codeblock_token1] = "language",
  [aux_sym_codeblock_token2] = "codeblock_token2",
  [aux_sym__blank_token1] = "_blank_token1",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
  [sym_modeline] = "modeline",
  [aux_sym_h1_token1] = "delimiter",
  [aux_sym_h2_token1] = "delimiter",
  [aux_sym_tag_token1] = "word",
  [anon_sym_STAR2] = "*",
  [sym_url_word] = "word",
  [aux_sym_optionlink_token1] = "word",
  [aux_sym_taglink_token1] = "word",
  [anon_sym_PIPE2] = "|",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_codespan_token1] = "word",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_argument_token1] = "word",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "\?",
  [sym_help_file] = "help_file",
  [sym__atom] = "_atom",
  [sym_word] = "word",
  [sym__atom_noli] = "_atom_noli",
  [sym_word_noli] = "word",
  [sym__atom_common] = "_atom_common",
  [sym__word_common] = "_word_common",
  [sym_note] = "note",
  [sym_keycode] = "keycode",
  [sym_uppercase_name] = "heading",
  [sym__uppercase_words] = "_uppercase_words",
  [sym_block] = "block",
  [sym_codeblock] = "codeblock",
  [sym__blank] = "_blank",
  [sym_line] = "line",
  [sym_line_li] = "line_li",
  [sym_line_code] = "line",
  [sym__line_noli] = "_line_noli",
  [sym_column_heading] = "column_heading",
  [sym__column_heading] = "heading",
  [sym_h1] = "h1",
  [sym_h2] = "h2",
  [sym_h3] = "h3",
  [sym_tag] = "tag",
  [sym_url] = "url",
  [sym_optionlink] = "optionlink",
  [sym_taglink] = "taglink",
  [sym_codespan] = "codespan",
  [sym_argument] = "argument",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_help_file_repeat2] = "help_file_repeat2",
  [aux_sym_help_file_repeat3] = "help_file_repeat3",
  [aux_sym_uppercase_name_repeat1] = "uppercase_name_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_li_repeat1] = "line_li_repeat1",
  [aux_sym_line_li_repeat2] = "line_li_repeat2",
  [alias_sym_code] = "code",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_noli_token1] = aux_sym_word_noli_token1,
  [aux_sym_word_noli_token2] = aux_sym_word_noli_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Note_COLON] = anon_sym_Note_COLON,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [anon_sym_Notes_COLON] = anon_sym_Notes_COLON,
  [anon_sym_Warning_COLON] = anon_sym_Warning_COLON,
  [anon_sym_WARNING_COLON] = anon_sym_WARNING_COLON,
  [anon_sym_Deprecated] = anon_sym_Deprecated,
  [anon_sym_DEPRECATED_COLON] = anon_sym_DEPRECATED_COLON,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [aux_sym_keycode_token2] = aux_sym_keycode_token2,
  [aux_sym_keycode_token3] = aux_sym_keycode_token3,
  [aux_sym_keycode_token4] = aux_sym_keycode_token4,
  [aux_sym_keycode_token5] = aux_sym_keycode_token5,
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
  [aux_sym_keycode_token6] = aux_sym_keycode_token6,
  [aux_sym_keycode_token7] = aux_sym_keycode_token7,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [aux_sym_uppercase_name_token2] = aux_sym_uppercase_name_token2,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [aux_sym_codeblock_token2] = aux_sym_codeblock_token2,
  [aux_sym__blank_token1] = aux_sym__blank_token1,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [sym_modeline] = sym_modeline,
  [aux_sym_h1_token1] = aux_sym_h1_token1,
  [aux_sym_h2_token1] = aux_sym_h1_token1,
  [aux_sym_tag_token1] = sym_word,
  [anon_sym_STAR2] = anon_sym_STAR,
  [sym_url_word] = sym_word,
  [aux_sym_optionlink_token1] = sym_word,
  [aux_sym_taglink_token1] = sym_word,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_codespan_token1] = sym_word,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_argument_token1] = sym_word,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_help_file] = sym_help_file,
  [sym__atom] = sym__atom,
  [sym_word] = sym_word,
  [sym__atom_noli] = sym__atom_noli,
  [sym_word_noli] = sym_word,
  [sym__atom_common] = sym__atom_common,
  [sym__word_common] = sym__word_common,
  [sym_note] = sym_note,
  [sym_keycode] = sym_keycode,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym__uppercase_words] = sym__uppercase_words,
  [sym_block] = sym_block,
  [sym_codeblock] = sym_codeblock,
  [sym__blank] = sym__blank,
  [sym_line] = sym_line,
  [sym_line_li] = sym_line_li,
  [sym_line_code] = sym_line,
  [sym__line_noli] = sym__line_noli,
  [sym_column_heading] = sym_column_heading,
  [sym__column_heading] = sym_uppercase_name,
  [sym_h1] = sym_h1,
  [sym_h2] = sym_h2,
  [sym_h3] = sym_h3,
  [sym_tag] = sym_tag,
  [sym_url] = sym_url,
  [sym_optionlink] = sym_optionlink,
  [sym_taglink] = sym_taglink,
  [sym_codespan] = sym_codespan,
  [sym_argument] = sym_argument,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_help_file_repeat2] = aux_sym_help_file_repeat2,
  [aux_sym_help_file_repeat3] = aux_sym_help_file_repeat3,
  [aux_sym_uppercase_name_repeat1] = aux_sym_uppercase_name_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_line_li_repeat1] = aux_sym_line_li_repeat1,
  [aux_sym_line_li_repeat2] = aux_sym_line_li_repeat2,
  [alias_sym_code] = alias_sym_code,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_noli_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_noli_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Notes_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warning_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Deprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPRECATED_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keycode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keycode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codeblock_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_codeblock_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_code_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_modeline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_h1_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_h2_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [sym_url_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_optionlink_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_taglink_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codespan_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_help_file] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_noli] = {
    .visible = false,
    .named = true,
  },
  [sym_word_noli] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_common] = {
    .visible = false,
    .named = true,
  },
  [sym__word_common] = {
    .visible = false,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_keycode] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym__uppercase_words] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_codeblock] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line_li] = {
    .visible = true,
    .named = true,
  },
  [sym_line_code] = {
    .visible = true,
    .named = true,
  },
  [sym__line_noli] = {
    .visible = false,
    .named = true,
  },
  [sym_column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym__column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_h1] = {
    .visible = true,
    .named = true,
  },
  [sym_h2] = {
    .visible = true,
    .named = true,
  },
  [sym_h3] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_optionlink] = {
    .visible = true,
    .named = true,
  },
  [sym_taglink] = {
    .visible = true,
    .named = true,
  },
  [sym_codespan] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_help_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_help_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_help_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_code] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_blank = 1,
  field_text = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
  [1] =
    {field_text, 0},
  [2] =
    {field_text, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
  [4] = {
    [0] = sym_word,
    [1] = sym_word,
  },
  [6] = {
    [2] = alias_sym_code,
  },
  [7] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [8] = {
    [1] = sym_line,
  },
  [9] = {
    [1] = sym_uppercase_name,
  },
  [10] = {
    [1] = aux_sym_h1_token1,
  },
  [11] = {
    [2] = sym_line,
    [3] = sym_line,
  },
  [12] = {
    [2] = sym_line,
  },
  [13] = {
    [0] = sym_line,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__line_noli, 2,
    sym__line_noli,
    sym_line,
  aux_sym_uppercase_name_repeat1, 2,
    aux_sym_uppercase_name_repeat1,
    sym_word,
  aux_sym_codeblock_repeat1, 2,
    aux_sym_codeblock_repeat1,
    alias_sym_code,
  aux_sym_line_li_repeat1, 3,
    aux_sym_line_li_repeat1,
    sym_line,
    sym_uppercase_name,
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
  [46] = 44,
  [47] = 43,
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
  [63] = 49,
  [64] = 48,
  [65] = 52,
  [66] = 66,
  [67] = 57,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 69,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '\n', 736,
        '\'', 830,
        '(', 920,
        '*', 928,
        ',', 920,
        '<', 827,
        '>', 830,
        '?', 830,
        'A', 770,
        'C', 779,
        'D', 760,
        'M', 764,
        'N', 774,
        'W', 754,
        '[', 920,
        '`', 830,
        'h', 821,
        '{', 824,
        '|', 830,
        '}', 830,
        '~', 830,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(926);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0) ADVANCE(830);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(25);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ' ') ADVANCE(738);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 736,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 257,
        '>', 544,
        'A', 201,
        'C', 210,
        'D', 192,
        'M', 196,
        'N', 205,
        'W', 185,
        '[', 536,
        '`', 1032,
        'h', 41,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 926,
        '(', 927,
        '*', 474,
        ',', 927,
        '<', 924,
        '>', 926,
        'A', 862,
        'C', 871,
        'D', 852,
        'M', 856,
        'N', 866,
        'W', 846,
        '[', 927,
        '`', 926,
        'h', 913,
        '{', 916,
        '|', 918,
        '~', 926,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 151,
        '>', 544,
        'A', 100,
        'C', 109,
        'D', 91,
        'M', 95,
        'N', 104,
        'W', 85,
        '[', 536,
        '`', 1032,
        'h', 147,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(44);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 459,
        '>', 544,
        'A', 401,
        'C', 410,
        'D', 392,
        'M', 395,
        'N', 405,
        'W', 385,
        '[', 536,
        '`', 1032,
        'h', 450,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(28);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 257,
        '>', 544,
        '?', 1140,
        'A', 201,
        'C', 210,
        'D', 192,
        'M', 196,
        'N', 205,
        'W', 185,
        '[', 536,
        '`', 1032,
        'h', 248,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 257,
        '>', 544,
        'A', 201,
        'C', 210,
        'D', 192,
        'M', 196,
        'N', 205,
        'W', 185,
        '[', 536,
        '`', 1032,
        'h', 248,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 532,
        '*', 474,
        ',', 548,
        '-', 27,
        '<', 734,
        '=', 381,
        '>', 544,
        'A', 353,
        'C', 355,
        'D', 351,
        'M', 352,
        'N', 354,
        'W', 350,
        '[', 536,
        '`', 1032,
        'h', 450,
        '{', 521,
        '|', 517,
        '~', 540,
        0x2022, 28,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(356);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 532,
        '*', 474,
        ',', 548,
        '-', 27,
        '<', 734,
        '=', 381,
        '>', 544,
        'A', 353,
        'C', 355,
        'D', 351,
        'M', 352,
        'N', 354,
        'W', 350,
        '[', 536,
        '`', 1032,
        'h', 450,
        '{', 521,
        '|', 517,
        '~', 540,
        0x2022, 28,
        '\t', 15,
        ' ', 15,
      );
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(356);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 532,
        '*', 474,
        ',', 548,
        '-', 43,
        '<', 733,
        '=', 82,
        '>', 544,
        'A', 48,
        'C', 50,
        'D', 46,
        'M', 47,
        'N', 49,
        'W', 45,
        '[', 536,
        '`', 1032,
        'h', 147,
        '{', 521,
        '|', 517,
        '~', 540,
        0x2022, 44,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 532,
        '*', 474,
        ',', 548,
        '<', 734,
        '>', 544,
        'A', 353,
        'C', 355,
        'D', 351,
        'M', 352,
        'N', 354,
        'W', 350,
        '[', 536,
        '`', 1032,
        'h', 450,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(28);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(356);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 532,
        '*', 474,
        ',', 548,
        '<', 734,
        '>', 544,
        'A', 353,
        'C', 355,
        'D', 351,
        'M', 352,
        'N', 354,
        'W', 350,
        '[', 536,
        '`', 1032,
        'h', 450,
        '{', 521,
        '|', 517,
        '~', 540,
        '\t', 15,
        ' ', 15,
        '-', 28,
        0x2022, 28,
      );
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(356);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 533,
        '*', 477,
        ',', 550,
        '<', 489,
        '>', 547,
        'A', 484,
        'C', 486,
        'D', 482,
        'M', 483,
        'N', 485,
        'W', 481,
        '[', 538,
        '`', 1035,
        'h', 487,
        '{', 522,
        '|', 518,
        '~', 543,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 534,
        '*', 474,
        ',', 548,
        '<', 257,
        '>', 544,
        'A', 55,
        'C', 57,
        'D', 53,
        'M', 54,
        'N', 56,
        'W', 52,
        '[', 536,
        '`', 1032,
        'h', 248,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 479,
        '(', 531,
        '*', 475,
        ',', 549,
        '<', 348,
        '>', 545,
        'A', 293,
        'C', 302,
        'D', 284,
        'M', 288,
        'N', 297,
        'W', 277,
        '[', 537,
        '`', 1033,
        'h', 340,
        '{', 520,
        '|', 516,
        '~', 541,
        '\t', 15,
        ' ', 15,
        '-', 1,
        0x2022, 1,
      );
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 480,
        '(', 535,
        '*', 476,
        ',', 551,
        '<', 1135,
        '>', 546,
        'A', 1072,
        'C', 1081,
        'D', 1062,
        'M', 1066,
        'N', 1076,
        'W', 1055,
        '[', 539,
        '`', 1034,
        'h', 1124,
        '{', 523,
        '|', 519,
        '}', 258,
        '~', 542,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(1137);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 512,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 257,
        '>', 544,
        'A', 201,
        'C', 210,
        'D', 192,
        'M', 196,
        'N', 205,
        'W', 185,
        '[', 536,
        '`', 1032,
        'h', 248,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 737,
        '\'', 1029,
        '(', 1030,
        '*', 1029,
        ',', 1030,
        '<', 1027,
        '>', 1029,
        'A', 968,
        'C', 977,
        'D', 958,
        'M', 962,
        'N', 972,
        'W', 952,
        '[', 1030,
        '`', 1029,
        'h', 1019,
        '{', 1022,
        '|', 517,
        '~', 1029,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(1029);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '*') ADVANCE(928);
      if (lookahead == '<') ADVANCE(732);
      if (lookahead == '`') ADVANCE(1037);
      if (lookahead == '|') ADVANCE(1031);
      if (lookahead == '}') ADVANCE(1139);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(743);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '>') ADVANCE(580);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(739);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(739);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(473);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(473);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(578);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(1036);
      END_STATE();
    case 31:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 151,
        '>', 544,
        'A', 100,
        'C', 109,
        'D', 91,
        'M', 95,
        'N', 104,
        'W', 85,
        '[', 536,
        '`', 1032,
        'h', 147,
        '{', 521,
        '|', 515,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(253);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 530,
        '*', 474,
        ',', 548,
        '<', 459,
        '>', 544,
        'A', 401,
        'C', 410,
        'D', 392,
        'M', 395,
        'N', 405,
        'W', 385,
        '[', 536,
        '`', 1032,
        'h', 450,
        'v', 430,
        '{', 521,
        '|', 517,
        '~', 540,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(28);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '\n', 737,
        '\'', 478,
        '(', 532,
        '*', 474,
        ',', 548,
        '-', 27,
        '<', 734,
        '=', 381,
        '>', 544,
        'A', 353,
        'C', 355,
        'D', 351,
        'M', 352,
        'N', 354,
        'W', 350,
        '[', 536,
        '`', 1032,
        'h', 450,
        'v', 430,
        '{', 521,
        '|', 517,
        '~', 540,
        0x2022, 28,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(356);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(743);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == 's') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (lookahead == ':') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(739);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(739);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'A') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(679);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'O') ADVANCE(677);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(674);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(722);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'L') ADVANCE(721);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'O') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '>') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '>') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'F') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'G') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '}') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(384);
      if (lookahead == '>') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_token1);
      ADVANCE_MAP(
        ',', 581,
        'B', 611,
        'D', 605,
        'I', 608,
        'P', 599,
        'S', 596,
        '{', 602,
        '\t', 581,
        ' ', 581,
        '(', 581,
        '[', 581,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(581);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(932);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(934);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(931);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(615);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '>') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_token1);
      ADVANCE_MAP(
        'B', 613,
        'D', 607,
        'I', 610,
        'P', 601,
        'S', 598,
        '{', 604,
        '\t', 581,
        ' ', 581,
        '(', 581,
        ',', 581,
        '[', 581,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(581);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'U') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(258);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(933);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(615);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '>') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(553);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ':') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '>') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '>') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'A') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'A') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        '\n', 740,
        'B', 587,
        'D', 585,
        'I', 586,
        'P', 583,
        'S', 582,
        '{', 584,
        '\t', 589,
        ' ', 589,
        '(', 589,
        '[', 589,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'D') ADVANCE(328);
      if (lookahead == 'U') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'D') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'E') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'F') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'G') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'L') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'L') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'N') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'O') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'g') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'k') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'w') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(930);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(349);
      if (lookahead != 0) ADVANCE(929);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(631);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(626);
      if (lookahead != 0) ADVANCE(625);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(617);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        '\n', 740,
        '\t', 25,
        ' ', 25,
        '(', 25,
        '[', 25,
        'A', 262,
        'C', 262,
        'D', 262,
        'M', 262,
        'S', 262,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'A') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'L') ADVANCE(675);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'O') ADVANCE(677);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(671);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '>') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(454);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(407);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        'B', 612,
        'D', 606,
        'I', 609,
        'P', 600,
        'S', 597,
        '{', 603,
        '\t', 581,
        ' ', 581,
        '(', 581,
        '[', 581,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(581);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'C') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(438);
      if (lookahead == 'U') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'G') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'O') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'P') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(934);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(932);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(615);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(743);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(506);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(505);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'L') ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'O') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(508);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'T') ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 't') ADVANCE(938);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == 's') ADVANCE(492);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(558);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(561);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(574);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'a') ADVANCE(509);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'c') ADVANCE(495);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'd') ADVANCE(570);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(491);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(496);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(497);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'g') ADVANCE(493);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'i') ADVANCE(504);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(502);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(501);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'p') ADVANCE(507);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(503);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(499);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(498);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(500);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(934);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(933);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(514);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(514);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(1128);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '}') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(528);
      if (lookahead == '}') ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(528);
      if (lookahead == '}') ADVANCE(524);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '}') ADVANCE(524);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1137);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(731);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1138);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1138);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1138);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '>') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'H') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'H') ADVANCE(712);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(98);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(399);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(199);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(731);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(731);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(731);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(731);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(629);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      ADVANCE_MAP(
        '(', 695,
        ',', 581,
        'B', 689,
        'D', 685,
        'I', 687,
        'P', 683,
        'S', 662,
        '{', 602,
        '\t', 581,
        ' ', 581,
        '[', 581,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(581);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(624);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(615);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(615);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(636);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ':') ADVANCE(564);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'A') ADVANCE(680);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'A') ADVANCE(643);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'A') ADVANCE(642);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      ADVANCE_MAP(
        '(', 695,
        'B', 690,
        'D', 686,
        'I', 688,
        'P', 684,
        'S', 661,
        '{', 603,
        '\t', 581,
        ' ', 581,
        '[', 581,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(581);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'C') ADVANCE(649);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'D') ADVANCE(648);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(646);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(653);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(654);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'F') ADVANCE(681);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'F') ADVANCE(682);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'G') ADVANCE(647);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'H') ADVANCE(663);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'H') ADVANCE(665);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(659);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(669);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(658);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'L') ADVANCE(639);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'L') ADVANCE(641);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'N') ADVANCE(664);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'N') ADVANCE(660);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'P') ADVANCE(673);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'R') ADVANCE(666);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'R') ADVANCE(668);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'R') ADVANCE(656);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'R') ADVANCE(667);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(640);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(657);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(645);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(644);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(629);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(624);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(615);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(615);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ':') ADVANCE(564);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'A') ADVANCE(724);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'A') ADVANCE(698);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'C') ADVANCE(703);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'D') ADVANCE(702);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(700);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(705);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'E') ADVANCE(706);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'F') ADVANCE(725);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'G') ADVANCE(701);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'I') ADVANCE(710);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'I') ADVANCE(716);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'L') ADVANCE(697);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'N') ADVANCE(713);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'N') ADVANCE(711);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'P') ADVANCE(720);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'R') ADVANCE(714);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'R') ADVANCE(715);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'R') ADVANCE(708);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(704);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(707);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(709);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(699);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(629);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      ADVANCE_MAP(
        '(', 614,
        'B', 594,
        'D', 592,
        'I', 593,
        'P', 591,
        'S', 590,
        '{', 604,
        '\t', 581,
        ' ', 581,
        ',', 581,
        '[', 581,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(581);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(624);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(624);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(615);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(615);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__blank_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ' ') ADVANCE(738);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_modeline);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '-') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '-') ADVANCE(831);
      if (lookahead == '>') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == ':') ADVANCE(830);
      if (lookahead == 's') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == ':') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == ':') ADVANCE(832);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == ':') ADVANCE(832);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '>') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '>') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'A') ADVANCE(744);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'A') ADVANCE(776);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'A') ADVANCE(783);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      ADVANCE_MAP(
        ',', 920,
        'B', 816,
        'D', 793,
        'I', 807,
        'P', 785,
        'S', 767,
        '{', 788,
        '(', 927,
        '[', 927,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'D') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'D') ADVANCE(808);
      if (lookahead == 'U') ADVANCE(809);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'E') ADVANCE(775);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'E') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'E') ADVANCE(757);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'E') ADVANCE(758);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'E') ADVANCE(781);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'F') ADVANCE(780);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'G') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'H') ADVANCE(768);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'I') ADVANCE(765);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'I') ADVANCE(773);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'L') ADVANCE(745);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'N') ADVANCE(769);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'N') ADVANCE(766);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'O') ADVANCE(782);
      if (lookahead == 'o') ADVANCE(819);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'P') ADVANCE(778);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'R') ADVANCE(772);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'R') ADVANCE(771);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'R') ADVANCE(762);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'T') ADVANCE(777);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'T') ADVANCE(744);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'T') ADVANCE(753);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'T') ADVANCE(761);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'T') ADVANCE(763);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'c') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'g') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'h') ADVANCE(786);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'k') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'l') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'n') ADVANCE(801);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'p') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'p') ADVANCE(749);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'p') ADVANCE(815);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(805);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(818);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(792);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(797);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 's') ADVANCE(796);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 't') ADVANCE(810);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 't') ADVANCE(795);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == 'w') ADVANCE(804);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '{') ADVANCE(825);
      if (lookahead == '}') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '{') ADVANCE(825);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '}') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(920);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(840);
      if (lookahead == '>') ADVANCE(752);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(752);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ',') ADVANCE(921);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(923);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(848);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(844);
      if (lookahead == '>') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(926);
      if (lookahead == 's') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(922);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(922);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(920);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(920);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(927);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(842);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(842);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(833);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(868);
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(875);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      ADVANCE_MAP(
        'B', 907,
        'D', 885,
        'I', 899,
        'P', 877,
        'S', 859,
        '{', 880,
        '(', 927,
        ',', 927,
        '[', 927,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'C') ADVANCE(847);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(900);
      if (lookahead == 'U') ADVANCE(901);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(867);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(849);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(850);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(873);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(872);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'G') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(860);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(857);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(865);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(872);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(834);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(861);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(858);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'O') ADVANCE(874);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'P') ADVANCE(870);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(864);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(863);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(854);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(869);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(833);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(845);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(853);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(855);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(894);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(891);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(914);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(905);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(892);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(878);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'd') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(836);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(876);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(886);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(879);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(915);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(906);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(838);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(897);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(919);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(884);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(889);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(888);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(883);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(903);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(896);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(917);
      if (lookahead == '}') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(917);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(918);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(920);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(923);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(926);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(930);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(349);
      if (lookahead != 0) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(25);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == ',') ADVANCE(932);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(932);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == 's') ADVANCE(936);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(935);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(937);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(511);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(954);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '>') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(1029);
      if (lookahead == 's') ADVANCE(944);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(1025);
      if (lookahead == 's') ADVANCE(946);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(1025);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1030);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(948);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(948);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(940);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(974);
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(981);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      ADVANCE_MAP(
        'B', 1013,
        'D', 991,
        'I', 1005,
        'P', 983,
        'S', 965,
        '{', 986,
        '(', 1030,
        ',', 1030,
        '[', 1030,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'C') ADVANCE(953);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(944);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(1006);
      if (lookahead == 'U') ADVANCE(1007);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(973);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(944);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(955);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(956);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(979);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(978);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'G') ADVANCE(944);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(966);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(963);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(971);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(978);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(941);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(967);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(964);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'O') ADVANCE(980);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'P') ADVANCE(976);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(970);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(969);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(960);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(975);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(940);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(951);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(959);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(961);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(1011);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(998);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(984);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'd') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(944);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(992);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(985);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(996);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(1015);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(1012);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(945);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(1003);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(1024);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(995);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(1016);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(994);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(989);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(1009);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(1018);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(1002);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(1023);
      if (lookahead == '}') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(1029);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(1023);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(1029);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(1029);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1025);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1026);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1029);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(1030);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(1036);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(1054);
      if (lookahead == '>') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(1129);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(557);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 's') ADVANCE(1047);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1046);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(1134);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1138);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(1052);
      if (lookahead == '}') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1052);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(1078);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(1085);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(1041);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      ADVANCE_MAP(
        'B', 1118,
        'D', 1096,
        'I', 1110,
        'P', 1088,
        'S', 1069,
        '{', 1091,
        '}', 581,
        '\t', 581,
        ' ', 581,
        '(', 1138,
        ',', 1138,
        '[', 1138,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1137);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'C') ADVANCE(1056);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(1111);
      if (lookahead == 'U') ADVANCE(1112);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(1050);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(1077);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(1043);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(1059);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(1061);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(1083);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(1086);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'G') ADVANCE(1048);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(1070);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(1067);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(1075);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(1082);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(1040);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(1071);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(1068);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'O') ADVANCE(1084);
      if (lookahead == 'o') ADVANCE(1122);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'P') ADVANCE(1080);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(1074);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(1073);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(1064);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(1079);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(1039);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(1057);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(1063);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(1065);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(1042);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(1105);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(1102);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(1125);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(1116);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(1103);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(1089);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1106);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1060);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1119);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(1049);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(1097);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(1090);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(1104);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(1101);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(1120);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(1126);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(1117);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(1045);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(1108);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(1132);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(1095);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(1100);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(1121);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(1099);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(1094);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(1114);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(1123);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(1107);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(1128);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(629);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1137);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1137);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(934);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1131);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(622);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1137);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(615);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1137);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(933);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(1137);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(1134);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1137);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(1138);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 19},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__word_common_token1] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Note_COLON] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_Notes_COLON] = ACTIONS(1),
    [anon_sym_Warning_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [anon_sym_Deprecated] = ACTIONS(1),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_codeblock_token2] = ACTIONS(1),
    [aux_sym__blank_token1] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(113),
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(59),
    [sym__blank] = STATE(2),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_help_file_repeat3] = STATE(101),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(33),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [2] = {
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(59),
    [sym__blank] = STATE(40),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_help_file_repeat1] = STATE(40),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_help_file_repeat3] = STATE(100),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(45),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [3] = {
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_help_file_repeat3] = STATE(102),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(49),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [4] = {
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_help_file_repeat3] = STATE(100),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(45),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [5] = {
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_word_noli_token1] = ACTIONS(53),
    [aux_sym_word_noli_token2] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [aux_sym__word_common_token3] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(62),
    [aux_sym__word_common_token4] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_Note_COLON] = ACTIONS(74),
    [anon_sym_NOTE_COLON] = ACTIONS(74),
    [anon_sym_Notes_COLON] = ACTIONS(74),
    [anon_sym_Warning_COLON] = ACTIONS(74),
    [anon_sym_WARNING_COLON] = ACTIONS(74),
    [anon_sym_Deprecated] = ACTIONS(74),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(74),
    [aux_sym_keycode_token1] = ACTIONS(77),
    [aux_sym_keycode_token2] = ACTIONS(77),
    [aux_sym_keycode_token3] = ACTIONS(77),
    [aux_sym_keycode_token4] = ACTIONS(77),
    [aux_sym_keycode_token5] = ACTIONS(80),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(80),
    [aux_sym_keycode_token6] = ACTIONS(77),
    [aux_sym_keycode_token7] = ACTIONS(77),
    [aux_sym_uppercase_name_token1] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_line_li_token1] = ACTIONS(89),
    [sym_modeline] = ACTIONS(51),
    [aux_sym_h1_token1] = ACTIONS(92),
    [aux_sym_h2_token1] = ACTIONS(95),
    [sym_url_word] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(101),
  },
  [6] = {
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_codeblock] = STATE(59),
    [sym__blank] = STATE(41),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(95),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(104),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [7] = {
    [sym__atom_noli] = STATE(19),
    [sym_word_noli] = STATE(19),
    [sym__atom_common] = STATE(19),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(19),
    [sym_keycode] = STATE(19),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(19),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(19),
    [sym_url] = STATE(19),
    [sym_optionlink] = STATE(19),
    [sym_taglink] = STATE(19),
    [sym_codespan] = STATE(19),
    [sym_argument] = STATE(19),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_word_noli_token1] = ACTIONS(106),
    [aux_sym_word_noli_token2] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [aux_sym__word_common_token3] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(115),
    [aux_sym__word_common_token4] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_Note_COLON] = ACTIONS(127),
    [anon_sym_NOTE_COLON] = ACTIONS(127),
    [anon_sym_Notes_COLON] = ACTIONS(127),
    [anon_sym_Warning_COLON] = ACTIONS(127),
    [anon_sym_WARNING_COLON] = ACTIONS(127),
    [anon_sym_Deprecated] = ACTIONS(127),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(127),
    [aux_sym_keycode_token1] = ACTIONS(130),
    [aux_sym_keycode_token2] = ACTIONS(130),
    [aux_sym_keycode_token3] = ACTIONS(130),
    [aux_sym_keycode_token4] = ACTIONS(130),
    [aux_sym_keycode_token5] = ACTIONS(133),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(133),
    [aux_sym_keycode_token6] = ACTIONS(130),
    [aux_sym_keycode_token7] = ACTIONS(130),
    [aux_sym_uppercase_name_token1] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(139),
    [aux_sym__blank_token1] = ACTIONS(141),
    [aux_sym_line_li_token1] = ACTIONS(141),
    [aux_sym_h1_token1] = ACTIONS(143),
    [aux_sym_h2_token1] = ACTIONS(146),
    [sym_url_word] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(152),
  },
  [8] = {
    [sym__atom] = STATE(90),
    [sym_word] = STATE(90),
    [sym__atom_common] = STATE(90),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(90),
    [sym_keycode] = STATE(90),
    [sym_tag] = STATE(90),
    [sym_url] = STATE(90),
    [sym_optionlink] = STATE(90),
    [sym_taglink] = STATE(90),
    [sym_codespan] = STATE(90),
    [sym_argument] = STATE(90),
    [aux_sym_line_li_repeat1] = STATE(30),
    [aux_sym_word_token1] = ACTIONS(155),
    [aux_sym_word_noli_token1] = ACTIONS(157),
    [aux_sym_word_noli_token2] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(159),
    [aux_sym__word_common_token4] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [aux_sym__blank_token1] = ACTIONS(161),
    [aux_sym_line_li_token1] = ACTIONS(161),
    [aux_sym_h1_token1] = ACTIONS(161),
    [aux_sym_h2_token1] = ACTIONS(161),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [9] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(13),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(165),
    [aux_sym__blank_token1] = ACTIONS(167),
    [aux_sym_line_li_token1] = ACTIONS(167),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [10] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(10),
    [aux_sym_word_noli_token1] = ACTIONS(169),
    [aux_sym_word_noli_token2] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [aux_sym__word_common_token3] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(172),
    [aux_sym__word_common_token4] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_Note_COLON] = ACTIONS(187),
    [anon_sym_NOTE_COLON] = ACTIONS(187),
    [anon_sym_Notes_COLON] = ACTIONS(187),
    [anon_sym_Warning_COLON] = ACTIONS(187),
    [anon_sym_WARNING_COLON] = ACTIONS(187),
    [anon_sym_Deprecated] = ACTIONS(187),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(187),
    [aux_sym_keycode_token1] = ACTIONS(190),
    [aux_sym_keycode_token2] = ACTIONS(190),
    [aux_sym_keycode_token3] = ACTIONS(190),
    [aux_sym_keycode_token4] = ACTIONS(190),
    [aux_sym_keycode_token5] = ACTIONS(193),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(193),
    [aux_sym_keycode_token6] = ACTIONS(190),
    [aux_sym_keycode_token7] = ACTIONS(190),
    [aux_sym_uppercase_name_token1] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(199),
    [aux_sym__blank_token1] = ACTIONS(201),
    [aux_sym_line_li_token1] = ACTIONS(201),
    [sym_url_word] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(206),
  },
  [11] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(10),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(209),
    [aux_sym__blank_token1] = ACTIONS(211),
    [aux_sym_line_li_token1] = ACTIONS(211),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [12] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(10),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(213),
    [aux_sym__blank_token1] = ACTIONS(215),
    [aux_sym_line_li_token1] = ACTIONS(215),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [13] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(10),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(217),
    [aux_sym__blank_token1] = ACTIONS(219),
    [aux_sym_line_li_token1] = ACTIONS(219),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [14] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(10),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(221),
    [aux_sym__blank_token1] = ACTIONS(223),
    [aux_sym_line_li_token1] = ACTIONS(223),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [15] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(11),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(225),
    [aux_sym__blank_token1] = ACTIONS(227),
    [aux_sym_line_li_token1] = ACTIONS(227),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [16] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(12),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(229),
    [aux_sym__blank_token1] = ACTIONS(231),
    [aux_sym_line_li_token1] = ACTIONS(231),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [17] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(14),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(233),
    [aux_sym__blank_token1] = ACTIONS(235),
    [aux_sym_line_li_token1] = ACTIONS(235),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(239), 1,
      aux_sym__blank_token1,
    STATE(15), 1,
      sym_codeblock,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [80] = 18,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(241), 1,
      anon_sym_TILDE,
    ACTIONS(244), 1,
      aux_sym__blank_token1,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(159), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [162] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(246), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(67), 1,
      sym_codeblock,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [242] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(248), 1,
      aux_sym__blank_token1,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(65), 1,
      sym_codeblock,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [322] = 18,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(250), 1,
      anon_sym_TILDE,
    ACTIONS(253), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(57), 1,
      sym_codeblock,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(159), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [404] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(255), 1,
      aux_sym__blank_token1,
    STATE(9), 1,
      sym_codeblock,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [484] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(257), 1,
      aux_sym__blank_token1,
    STATE(28), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [559] = 15,
    ACTIONS(259), 1,
      aux_sym_word_token1,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      aux_sym__blank_token1,
    ACTIONS(288), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_BQUOTE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(280), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(283), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(277), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(268), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [634] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(294), 1,
      aux_sym__blank_token1,
    STATE(31), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [709] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(296), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [784] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(298), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [859] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(300), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      sym_tag,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [936] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(302), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(26), 1,
      sym_tag,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1013] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(304), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1088] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    ACTIONS(306), 1,
      aux_sym__blank_token1,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1163] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    STATE(29), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1235] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1307] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(159), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1379] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(42), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(308), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1429] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(316), 1,
      aux_sym_line_li_token1,
    STATE(39), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(314), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(312), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1481] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(316), 1,
      aux_sym_line_li_token1,
    STATE(42), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(308), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1533] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(308), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1583] = 4,
    ACTIONS(322), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(320), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(318), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1633] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(39), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(314), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(312), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1683] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(327), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(325), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1733] = 6,
    ACTIONS(331), 1,
      aux_sym__blank_token1,
    ACTIONS(333), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(335), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(329), 34,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1786] = 6,
    ACTIONS(339), 1,
      aux_sym__blank_token1,
    ACTIONS(342), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(345), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(337), 34,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1839] = 2,
    ACTIONS(349), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(347), 26,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1883] = 5,
    ACTIONS(351), 1,
      aux_sym__blank_token1,
    ACTIONS(354), 1,
      aux_sym_line_code_token1,
    STATE(46), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
    ACTIONS(337), 34,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1932] = 5,
    ACTIONS(357), 1,
      aux_sym__blank_token1,
    ACTIONS(359), 1,
      aux_sym_line_code_token1,
    STATE(46), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
    ACTIONS(329), 34,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1981] = 2,
    ACTIONS(363), 3,
      aux_sym__blank_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(361), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2024] = 2,
    ACTIONS(367), 3,
      aux_sym__blank_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(365), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2067] = 2,
    ACTIONS(369), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(371), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2109] = 2,
    ACTIONS(373), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(375), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2151] = 2,
    ACTIONS(377), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(379), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2193] = 2,
    ACTIONS(381), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(383), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2235] = 2,
    ACTIONS(385), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(387), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2277] = 2,
    ACTIONS(389), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(391), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2319] = 2,
    ACTIONS(393), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(395), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2361] = 2,
    ACTIONS(397), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(399), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2403] = 2,
    ACTIONS(401), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(403), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2445] = 2,
    ACTIONS(405), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(407), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2487] = 2,
    ACTIONS(409), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(411), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2529] = 2,
    ACTIONS(413), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(415), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2571] = 2,
    ACTIONS(417), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(419), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2613] = 2,
    ACTIONS(367), 1,
      aux_sym__blank_token1,
    ACTIONS(365), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2654] = 2,
    ACTIONS(363), 1,
      aux_sym__blank_token1,
    ACTIONS(361), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2695] = 2,
    ACTIONS(377), 12,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(379), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2735] = 2,
    ACTIONS(421), 12,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(423), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2775] = 2,
    ACTIONS(397), 12,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(399), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2815] = 4,
    ACTIONS(431), 1,
      aux_sym_optionlink_token1,
    ACTIONS(429), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(425), 15,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Deprecated,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(427), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
  [2858] = 3,
    ACTIONS(433), 2,
      aux_sym_codeblock_token1,
      aux_sym_codeblock_token2,
    ACTIONS(425), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym__blank_token1,
    ACTIONS(427), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [2898] = 4,
    ACTIONS(439), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(435), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(437), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2940] = 5,
    ACTIONS(448), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(444), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(442), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(446), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
  [2984] = 4,
    ACTIONS(448), 1,
      aux_sym_uppercase_name_token2,
    STATE(75), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(442), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(446), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3026] = 3,
    ACTIONS(450), 2,
      aux_sym_codeblock_token1,
      aux_sym_codeblock_token2,
    ACTIONS(425), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym__blank_token1,
    ACTIONS(427), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3066] = 5,
    ACTIONS(448), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(454), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(452), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(456), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
  [3110] = 4,
    ACTIONS(448), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(452), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(456), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3152] = 3,
    ACTIONS(458), 1,
      aux_sym_tag_token1,
    ACTIONS(427), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(425), 29,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3191] = 3,
    ACTIONS(464), 1,
      anon_sym_QMARK,
    ACTIONS(460), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(462), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3230] = 3,
    ACTIONS(466), 1,
      aux_sym_argument_token1,
    ACTIONS(427), 3,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
    ACTIONS(425), 28,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3269] = 3,
    ACTIONS(472), 1,
      anon_sym_SQUOTE2,
    ACTIONS(468), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(470), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3308] = 3,
    ACTIONS(474), 1,
      aux_sym_taglink_token1,
    ACTIONS(427), 2,
      aux_sym__word_common_token3,
      aux_sym__blank_token1,
    ACTIONS(425), 29,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3347] = 2,
    ACTIONS(476), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token2,
    ACTIONS(478), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3384] = 2,
    ACTIONS(480), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(482), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3420] = 2,
    ACTIONS(484), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(486), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3456] = 2,
    ACTIONS(488), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(490), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3492] = 2,
    ACTIONS(492), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(494), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3528] = 2,
    ACTIONS(496), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(498), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3564] = 2,
    ACTIONS(500), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(502), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3600] = 2,
    ACTIONS(504), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(506), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3636] = 2,
    ACTIONS(508), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(510), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3672] = 2,
    ACTIONS(512), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(514), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3708] = 2,
    ACTIONS(516), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(518), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3744] = 2,
    ACTIONS(520), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(522), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3780] = 2,
    ACTIONS(524), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(526), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3816] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(528), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3833] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(530), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3850] = 4,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(535), 1,
      aux_sym__blank_token1,
    ACTIONS(537), 1,
      aux_sym_line_li_token1,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3864] = 4,
    ACTIONS(331), 1,
      aux_sym__blank_token1,
    ACTIONS(333), 1,
      aux_sym_line_code_token1,
    STATE(43), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
  [3877] = 4,
    ACTIONS(357), 1,
      aux_sym__blank_token1,
    ACTIONS(359), 1,
      aux_sym_line_code_token1,
    STATE(47), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
  [3890] = 3,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      sym_modeline,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3900] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 1,
      sym_modeline,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3910] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 1,
      sym_modeline,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3920] = 3,
    ACTIONS(545), 1,
      sym_modeline,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3930] = 3,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(551), 1,
      aux_sym__blank_token1,
    STATE(32), 1,
      sym_tag,
  [3940] = 1,
    ACTIONS(553), 1,
      anon_sym_TILDE,
  [3944] = 1,
    ACTIONS(555), 1,
      aux_sym_codespan_token1,
  [3948] = 1,
    ACTIONS(557), 1,
      aux_sym_codeblock_token2,
  [3952] = 1,
    ACTIONS(458), 1,
      aux_sym_tag_token1,
  [3956] = 1,
    ACTIONS(559), 1,
      anon_sym_BQUOTE2,
  [3960] = 1,
    ACTIONS(561), 1,
      anon_sym_STAR2,
  [3964] = 1,
    ACTIONS(316), 1,
      aux_sym_line_li_token1,
  [3968] = 1,
    ACTIONS(563), 1,
      anon_sym_SQUOTE2,
  [3972] = 1,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
  [3976] = 1,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
  [3980] = 1,
    ACTIONS(569), 1,
      anon_sym_PIPE2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 80,
  [SMALL_STATE(20)] = 162,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 404,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 559,
  [SMALL_STATE(26)] = 634,
  [SMALL_STATE(27)] = 709,
  [SMALL_STATE(28)] = 784,
  [SMALL_STATE(29)] = 859,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 1013,
  [SMALL_STATE(32)] = 1088,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1235,
  [SMALL_STATE(35)] = 1307,
  [SMALL_STATE(36)] = 1379,
  [SMALL_STATE(37)] = 1429,
  [SMALL_STATE(38)] = 1481,
  [SMALL_STATE(39)] = 1533,
  [SMALL_STATE(40)] = 1583,
  [SMALL_STATE(41)] = 1633,
  [SMALL_STATE(42)] = 1683,
  [SMALL_STATE(43)] = 1733,
  [SMALL_STATE(44)] = 1786,
  [SMALL_STATE(45)] = 1839,
  [SMALL_STATE(46)] = 1883,
  [SMALL_STATE(47)] = 1932,
  [SMALL_STATE(48)] = 1981,
  [SMALL_STATE(49)] = 2024,
  [SMALL_STATE(50)] = 2067,
  [SMALL_STATE(51)] = 2109,
  [SMALL_STATE(52)] = 2151,
  [SMALL_STATE(53)] = 2193,
  [SMALL_STATE(54)] = 2235,
  [SMALL_STATE(55)] = 2277,
  [SMALL_STATE(56)] = 2319,
  [SMALL_STATE(57)] = 2361,
  [SMALL_STATE(58)] = 2403,
  [SMALL_STATE(59)] = 2445,
  [SMALL_STATE(60)] = 2487,
  [SMALL_STATE(61)] = 2529,
  [SMALL_STATE(62)] = 2571,
  [SMALL_STATE(63)] = 2613,
  [SMALL_STATE(64)] = 2654,
  [SMALL_STATE(65)] = 2695,
  [SMALL_STATE(66)] = 2735,
  [SMALL_STATE(67)] = 2775,
  [SMALL_STATE(68)] = 2815,
  [SMALL_STATE(69)] = 2858,
  [SMALL_STATE(70)] = 2898,
  [SMALL_STATE(71)] = 2940,
  [SMALL_STATE(72)] = 2984,
  [SMALL_STATE(73)] = 3026,
  [SMALL_STATE(74)] = 3066,
  [SMALL_STATE(75)] = 3110,
  [SMALL_STATE(76)] = 3152,
  [SMALL_STATE(77)] = 3191,
  [SMALL_STATE(78)] = 3230,
  [SMALL_STATE(79)] = 3269,
  [SMALL_STATE(80)] = 3308,
  [SMALL_STATE(81)] = 3347,
  [SMALL_STATE(82)] = 3384,
  [SMALL_STATE(83)] = 3420,
  [SMALL_STATE(84)] = 3456,
  [SMALL_STATE(85)] = 3492,
  [SMALL_STATE(86)] = 3528,
  [SMALL_STATE(87)] = 3564,
  [SMALL_STATE(88)] = 3600,
  [SMALL_STATE(89)] = 3636,
  [SMALL_STATE(90)] = 3672,
  [SMALL_STATE(91)] = 3708,
  [SMALL_STATE(92)] = 3744,
  [SMALL_STATE(93)] = 3780,
  [SMALL_STATE(94)] = 3816,
  [SMALL_STATE(95)] = 3833,
  [SMALL_STATE(96)] = 3850,
  [SMALL_STATE(97)] = 3864,
  [SMALL_STATE(98)] = 3877,
  [SMALL_STATE(99)] = 3890,
  [SMALL_STATE(100)] = 3900,
  [SMALL_STATE(101)] = 3910,
  [SMALL_STATE(102)] = 3920,
  [SMALL_STATE(103)] = 3930,
  [SMALL_STATE(104)] = 3940,
  [SMALL_STATE(105)] = 3944,
  [SMALL_STATE(106)] = 3948,
  [SMALL_STATE(107)] = 3952,
  [SMALL_STATE(108)] = 3956,
  [SMALL_STATE(109)] = 3960,
  [SMALL_STATE(110)] = 3964,
  [SMALL_STATE(111)] = 3968,
  [SMALL_STATE(112)] = 3972,
  [SMALL_STATE(113)] = 3976,
  [SMALL_STATE(114)] = 3980,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(71),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(110),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, 0, 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, 0, 8),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(72),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, 0, 12),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, 0, 12),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, 0, 11),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, 0, 11),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 8),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 7),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 12),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 12),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 11),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 11),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, 0, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, 0, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__column_heading, 1, 1, 0), SHIFT(88),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__column_heading, 2, 1, 0), SHIFT(88),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, 0, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, 0, 6),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, 0, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 5, 0, 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 5, 0, 9),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 4, 0, 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 4, 0, 9),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 5, 0, 9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 5, 0, 9),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, 0, 10),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, 0, 10),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3, 0, 9),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3, 0, 9),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3, 0, 9),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3, 0, 9),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 4, 0, 9),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 4, 0, 9),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, 0, 13),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, 0, 13),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, 0, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, 0, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, 0, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, 0, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, 0, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, 0, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, 0, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, 0, 5),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 4, 0, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, 0, 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, 0, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, 0, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, 0, 5),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, 0, 5),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, 0, 5),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(110),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2, 0, 0), SHIFT_REPEAT(99),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [567] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vimdoc(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
