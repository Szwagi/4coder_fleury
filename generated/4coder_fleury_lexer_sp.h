#if !defined(FCODER_LEX_GEN_HAND_WRITTEN_TYPES)
#define FCODER_LEX_GEN_HAND_WRITTEN_TYPES

struct Lexeme_Table_Value{
    Token_Base_Kind base_kind;
    u16 sub_kind;
};

struct Lexeme_Table_Lookup{
    b32 found_match;
    Token_Base_Kind base_kind;
    u16 sub_kind;
};

#endif
typedef u16 Token_Sp_Kind;
enum{
TokenSpKind_EOF = 0,
TokenSpKind_Whitespace = 1,
TokenSpKind_LexError = 2,
TokenSpKind_BlockComment = 3,
TokenSpKind_LineComment = 4,
TokenSpKind_Backslash = 5,
TokenSpKind_LiteralInteger = 6,
TokenSpKind_LiteralIntegerU = 7,
TokenSpKind_LiteralIntegerL = 8,
TokenSpKind_LiteralIntegerUL = 9,
TokenSpKind_LiteralIntegerLL = 10,
TokenSpKind_LiteralIntegerULL = 11,
TokenSpKind_LiteralIntegerHex = 12,
TokenSpKind_LiteralIntegerHexU = 13,
TokenSpKind_LiteralIntegerHexL = 14,
TokenSpKind_LiteralIntegerHexUL = 15,
TokenSpKind_LiteralIntegerHexLL = 16,
TokenSpKind_LiteralIntegerHexULL = 17,
TokenSpKind_LiteralIntegerOct = 18,
TokenSpKind_LiteralIntegerOctU = 19,
TokenSpKind_LiteralIntegerOctL = 20,
TokenSpKind_LiteralIntegerOctUL = 21,
TokenSpKind_LiteralIntegerOctLL = 22,
TokenSpKind_LiteralIntegerOctULL = 23,
TokenSpKind_LiteralFloat32 = 24,
TokenSpKind_LiteralFloat64 = 25,
TokenSpKind_LiteralString = 26,
TokenSpKind_LiteralStringWide = 27,
TokenSpKind_LiteralStringUTF8 = 28,
TokenSpKind_LiteralStringUTF16 = 29,
TokenSpKind_LiteralStringUTF32 = 30,
TokenSpKind_LiteralStringRaw = 31,
TokenSpKind_LiteralStringWideRaw = 32,
TokenSpKind_LiteralStringUTF8Raw = 33,
TokenSpKind_LiteralStringUTF16Raw = 34,
TokenSpKind_LiteralStringUTF32Raw = 35,
TokenSpKind_LiteralCharacter = 36,
TokenSpKind_LiteralCharacterWide = 37,
TokenSpKind_LiteralCharacterUTF8 = 38,
TokenSpKind_LiteralCharacterUTF16 = 39,
TokenSpKind_LiteralCharacterUTF32 = 40,
TokenSpKind_PPIncludeFile = 41,
TokenSpKind_PPErrorMessage = 42,
TokenSpKind_KeywordGeneric = 43,
TokenSpKind_BraceOp = 44,
TokenSpKind_BraceCl = 45,
TokenSpKind_ParenOp = 46,
TokenSpKind_BrackOp = 47,
TokenSpKind_ParenCl = 48,
TokenSpKind_BrackCl = 49,
TokenSpKind_Semicolon = 50,
TokenSpKind_Colon = 51,
TokenSpKind_DotDotDot = 52,
TokenSpKind_ColonColon = 53,
TokenSpKind_PlusPlus = 54,
TokenSpKind_MinusMinus = 55,
TokenSpKind_Dot = 56,
TokenSpKind_Arrow = 57,
TokenSpKind_Plus = 58,
TokenSpKind_Minus = 59,
TokenSpKind_Not = 60,
TokenSpKind_Tilde = 61,
TokenSpKind_Star = 62,
TokenSpKind_And = 63,
TokenSpKind_DotStar = 64,
TokenSpKind_ArrowStar = 65,
TokenSpKind_Div = 66,
TokenSpKind_Mod = 67,
TokenSpKind_LeftLeft = 68,
TokenSpKind_RightRight = 69,
TokenSpKind_Compare = 70,
TokenSpKind_Less = 71,
TokenSpKind_LessEq = 72,
TokenSpKind_Grtr = 73,
TokenSpKind_GrtrEq = 74,
TokenSpKind_EqEq = 75,
TokenSpKind_NotEq = 76,
TokenSpKind_Xor = 77,
TokenSpKind_Or = 78,
TokenSpKind_AndAnd = 79,
TokenSpKind_OrOr = 80,
TokenSpKind_Ternary = 81,
TokenSpKind_Eq = 82,
TokenSpKind_PlusEq = 83,
TokenSpKind_MinusEq = 84,
TokenSpKind_StarEq = 85,
TokenSpKind_DivEq = 86,
TokenSpKind_ModEq = 87,
TokenSpKind_LeftLeftEq = 88,
TokenSpKind_RightRightEq = 89,
TokenSpKind_Comma = 90,
TokenSpKind_PPStringify = 91,
TokenSpKind_PPConcat = 92,
TokenSpKind_Void = 93,
TokenSpKind_Bool = 94,
TokenSpKind_Char = 95,
TokenSpKind_Int = 96,
TokenSpKind_Float = 97,
TokenSpKind_Const = 98,
TokenSpKind_Break = 99,
TokenSpKind_Case = 100,
TokenSpKind_Continue = 101,
TokenSpKind_Default = 102,
TokenSpKind_Do = 103,
TokenSpKind_Else = 104,
TokenSpKind_For = 105,
TokenSpKind_If = 106,
TokenSpKind_Return = 107,
TokenSpKind_Switch = 108,
TokenSpKind_While = 109,
TokenSpKind_Enum = 110,
TokenSpKind_Struct = 111,
TokenSpKind_Typedef = 112,
TokenSpKind_Public = 113,
TokenSpKind_Static = 114,
TokenSpKind_Null = 115,
TokenSpKind_This = 116,
TokenSpKind_ViewAs = 117,
TokenSpKind_SizeOf = 118,
TokenSpKind_New = 119,
TokenSpKind_Delete = 120,
TokenSpKind_methodmap = 121,
TokenSpKind_typeset = 122,
TokenSpKind_property = 123,
TokenSpKind_native = 124,
TokenSpKind_forward = 125,
TokenSpKind_function = 126,
TokenSpKind_LiteralTrue = 127,
TokenSpKind_LiteralFalse = 128,
TokenSpKind_Identifier = 129,
TokenSpKind_PPInclude = 130,
TokenSpKind_PPVersion = 131,
TokenSpKind_PPDefine = 132,
TokenSpKind_PPUndef = 133,
TokenSpKind_PPIf = 134,
TokenSpKind_PPIfDef = 135,
TokenSpKind_PPIfNDef = 136,
TokenSpKind_PPElse = 137,
TokenSpKind_PPElIf = 138,
TokenSpKind_PPEndIf = 139,
TokenSpKind_PPError = 140,
TokenSpKind_PPImport = 141,
TokenSpKind_PPUsing = 142,
TokenSpKind_PPLine = 143,
TokenSpKind_PPPragma = 144,
TokenSpKind_PPUnknown = 145,
TokenSpKind_PPDefined = 146,
TokenSpKind_COUNT = 147,
};
char *token_sp_kind_names[] = {
"EOF",
"Whitespace",
"LexError",
"BlockComment",
"LineComment",
"Backslash",
"LiteralInteger",
"LiteralIntegerU",
"LiteralIntegerL",
"LiteralIntegerUL",
"LiteralIntegerLL",
"LiteralIntegerULL",
"LiteralIntegerHex",
"LiteralIntegerHexU",
"LiteralIntegerHexL",
"LiteralIntegerHexUL",
"LiteralIntegerHexLL",
"LiteralIntegerHexULL",
"LiteralIntegerOct",
"LiteralIntegerOctU",
"LiteralIntegerOctL",
"LiteralIntegerOctUL",
"LiteralIntegerOctLL",
"LiteralIntegerOctULL",
"LiteralFloat32",
"LiteralFloat64",
"LiteralString",
"LiteralStringWide",
"LiteralStringUTF8",
"LiteralStringUTF16",
"LiteralStringUTF32",
"LiteralStringRaw",
"LiteralStringWideRaw",
"LiteralStringUTF8Raw",
"LiteralStringUTF16Raw",
"LiteralStringUTF32Raw",
"LiteralCharacter",
"LiteralCharacterWide",
"LiteralCharacterUTF8",
"LiteralCharacterUTF16",
"LiteralCharacterUTF32",
"PPIncludeFile",
"PPErrorMessage",
"KeywordGeneric",
"BraceOp",
"BraceCl",
"ParenOp",
"BrackOp",
"ParenCl",
"BrackCl",
"Semicolon",
"Colon",
"DotDotDot",
"ColonColon",
"PlusPlus",
"MinusMinus",
"Dot",
"Arrow",
"Plus",
"Minus",
"Not",
"Tilde",
"Star",
"And",
"DotStar",
"ArrowStar",
"Div",
"Mod",
"LeftLeft",
"RightRight",
"Compare",
"Less",
"LessEq",
"Grtr",
"GrtrEq",
"EqEq",
"NotEq",
"Xor",
"Or",
"AndAnd",
"OrOr",
"Ternary",
"Eq",
"PlusEq",
"MinusEq",
"StarEq",
"DivEq",
"ModEq",
"LeftLeftEq",
"RightRightEq",
"Comma",
"PPStringify",
"PPConcat",
"Void",
"Bool",
"Char",
"Int",
"Float",
"Const",
"Break",
"Case",
"Continue",
"Default",
"Do",
"Else",
"For",
"If",
"Return",
"Switch",
"While",
"Enum",
"Struct",
"Typedef",
"Public",
"Static",
"Null",
"This",
"ViewAs",
"SizeOf",
"New",
"Delete",
"methodmap",
"typeset",
"property",
"native",
"forward",
"function",
"LiteralTrue",
"LiteralFalse",
"Identifier",
"PPInclude",
"PPVersion",
"PPDefine",
"PPUndef",
"PPIf",
"PPIfDef",
"PPIfNDef",
"PPElse",
"PPElIf",
"PPEndIf",
"PPError",
"PPImport",
"PPUsing",
"PPLine",
"PPPragma",
"PPUnknown",
"PPDefined",
};
