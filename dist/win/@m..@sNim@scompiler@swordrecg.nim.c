/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray__apWyxRcm1PKKoYB6feJLUA[288];

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_2, "addr", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_3, "and", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_4, "as", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_5, "asm", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_6, "bind", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_7, "block", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_8, "break", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_9, "case", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_10, "cast", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_11, "concept", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_12, "const", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_13, "continue", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_14, "converter", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_15, "defer", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_16, "discard", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_17, "distinct", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_18, "div", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_19, "do", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_20, "elif", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_21, "else", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_22, "end", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_23, "enum", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_24, "except", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_25, "export", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_26, "finally", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_27, "for", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_28, "from", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_29, "func", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_30, "if", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_31, "import", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_32, "in", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_33, "include", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_34, "interface", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_35, "is", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_36, "isnot", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_37, "iterator", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_38, "let", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_39, "macro", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_40, "method", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_41, "mixin", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_42, "mod", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_43, "nil", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_44, "not", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_45, "notin", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_46, "object", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_47, "of", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_48, "or", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_49, "out", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_50, "proc", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_51, "ptr", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_52, "raise", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_53, "ref", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_54, "return", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_55, "shl", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_56, "shr", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_57, "static", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_58, "template", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_59, "try", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_60, "tuple", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_61, "type", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_62, "using", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_63, "var", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_64, "when", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_65, "while", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_66, "xor", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_67, "yield", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_68, ":", 1);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_69, "::", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_70, "=", 1);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_71, ".", 1);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_72, "..", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_73, "*", 1);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_74, "-", 1);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_75, "magic", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_76, "thread", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_77, "final", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_78, "profiler", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_79, "memtracker", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_80, "objchecks", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_81, "intdefine", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_82, "strdefine", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_83, "booldefine", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_84, "cursor", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_85, "immediate", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_86, "constructor", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_87, "destructor", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_88, "delegator", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_89, "override", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_90, "importcpp", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_91, "importobjc", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_92, "importCompilerProc", 18);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_93, "importc", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_94, "importjs", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_95, "exportc", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_96, "exportcpp", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_97, "exportnims", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_98, "incompleteStruct", 16);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_99, "completeStruct", 14);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_100, "requiresInit", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_101, "align", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_102, "nodecl", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_103, "pure", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_104, "sideEffect", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_105, "header", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_106, "noSideEffect", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_107, "gcsafe", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_108, "noreturn", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_109, "nosinks", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_110, "merge", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_111, "lib", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_112, "dynlib", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_113, "compilerproc", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_114, "core", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_115, "procvar", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_116, "base", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_117, "used", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_118, "fatal", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_119, "error", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_120, "warning", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_121, "hint", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_122, "warningAsError", 14);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_123, "line", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_124, "push", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_125, "pop", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_126, "define", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_127, "undef", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_128, "lineDir", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_129, "stackTrace", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_130, "lineTrace", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_131, "link", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_132, "compile", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_133, "linksys", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_134, "deprecated", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_135, "varargs", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_136, "callconv", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_137, "debugger", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_138, "nimcall", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_139, "stdcall", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_140, "cdecl", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_141, "safecall", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_142, "syscall", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_143, "inline", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_144, "noinline", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_145, "fastcall", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_146, "thiscall", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_147, "closure", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_148, "noconv", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_149, "on", 2);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_150, "off", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_151, "checks", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_152, "rangeChecks", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_153, "boundChecks", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_154, "overflowChecks", 14);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_155, "nilChecks", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_156, "floatChecks", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_157, "nanChecks", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_158, "infChecks", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_159, "styleChecks", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_160, "staticBoundChecks", 17);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_161, "nonReloadable", 13);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_162, "executeOnReload", 15);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_163, "assertions", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_164, "patterns", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_165, "trmacros", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_166, "sinkinference", 13);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_167, "warnings", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_168, "hints", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_169, "optimization", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_170, "raises", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_171, "writes", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_172, "reads", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_173, "size", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_174, "effects", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_175, "tags", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_176, "requires", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_177, "ensures", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_178, "invariant", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_179, "assume", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_180, "assert", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_181, "deadCodeElim", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_182, "safecode", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_183, "package", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_184, "noforward", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_185, "reorder", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_186, "norewrite", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_187, "nodestroy", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_188, "pragma", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_189, "compileTime", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_190, "noinit", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_191, "passc", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_192, "passl", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_193, "localPassC", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_194, "borrow", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_195, "discardable", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_196, "fieldChecks", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_197, "subschar", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_198, "acyclic", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_199, "shallow", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_200, "unroll", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_201, "linearScanEnd", 13);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_202, "computedGoto", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_203, "injectStmt", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_204, "experimental", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_205, "write", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_206, "gensym", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_207, "inject", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_208, "dirty", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_209, "inheritable", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_210, "threadvar", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_211, "emit", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_212, "asmNoStackFrame", 15);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_213, "implicitStatic", 14);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_214, "global", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_215, "codegenDecl", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_216, "unchecked", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_217, "guard", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_218, "locks", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_219, "partial", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_220, "explain", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_221, "liftLocals", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_222, "auto", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_223, "bool", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_224, "catch", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_225, "char", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_226, "class", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_227, "compl", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_228, "const_cast", 10);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_229, "default", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_230, "delete", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_231, "double", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_232, "dynamic_cast", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_233, "explicit", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_234, "extern", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_235, "false", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_236, "float", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_237, "friend", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_238, "goto", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_239, "int", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_240, "long", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_241, "mutable", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_242, "namespace", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_243, "new", 3);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_244, "operator", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_245, "private", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_246, "protected", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_247, "public", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_248, "register", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_249, "reinterpret_cast", 16);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_250, "restrict", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_251, "short", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_252, "signed", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_253, "sizeof", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_254, "static_cast", 11);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_255, "struct", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_256, "switch", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_257, "this", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_258, "throw", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_259, "true", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_260, "typedef", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_261, "typeid", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_262, "typeof", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_263, "typename", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_264, "union", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_265, "packed", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_266, "unsigned", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_267, "virtual", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_268, "void", 4);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_269, "volatile", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_270, "wchar_t", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_271, "alignas", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_272, "alignof", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_273, "constexpr", 9);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_274, "decltype", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_275, "nullptr", 7);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_276, "noexcept", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_277, "thread_local", 12);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_278, "static_assert", 13);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_279, "char16_t", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_280, "char32_t", 8);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_281, "stdin", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_282, "stdout", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_283, "stderr", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_284, "inout", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_285, "bycopy", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_286, "byref", 5);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_287, "oneway", 6);
STRING_LITERAL(TM__U2GgQs2n1Q2Wng1z9ci28MQ_288, "bitsize", 7);
N_LIB_PRIVATE NIM_CONST tyArray__apWyxRcm1PKKoYB6feJLUA specialWords__jS3I1dUcvbZAEuApBSUHng = {((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_2),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_3),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_4),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_5),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_6),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_7),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_8),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_9),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_10),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_11),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_12),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_13),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_14),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_15),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_16),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_17),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_18),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_19),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_20),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_21),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_22),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_23),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_24),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_25),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_26),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_27),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_28),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_29),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_30),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_31),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_32),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_33),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_34),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_35),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_36),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_37),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_38),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_39),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_40),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_41),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_42),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_43),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_44),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_45),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_46),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_47),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_48),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_49),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_50),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_51),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_52),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_53),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_54),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_55),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_56),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_57),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_58),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_59),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_60),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_61),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_62),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_63),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_64),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_65),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_66),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_67),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_68),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_69),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_70),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_71),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_72),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_73),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_74),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_75),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_76),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_77),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_78),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_79),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_80),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_81),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_82),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_83),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_84),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_85),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_86),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_87),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_88),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_89),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_90),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_91),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_92),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_93),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_94),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_95),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_96),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_97),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_98),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_99),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_100),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_101),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_102),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_103),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_104),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_105),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_106),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_107),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_108),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_109),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_110),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_111),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_112),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_113),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_114),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_115),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_116),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_117),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_118),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_119),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_120),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_121),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_122),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_123),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_124),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_125),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_126),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_127),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_128),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_129),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_130),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_131),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_132),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_133),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_134),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_135),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_136),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_137),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_138),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_139),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_140),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_141),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_142),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_143),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_144),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_145),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_146),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_147),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_148),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_149),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_150),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_151),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_152),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_153),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_154),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_155),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_156),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_157),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_158),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_159),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_160),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_161),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_162),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_163),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_164),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_165),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_166),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_167),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_168),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_169),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_170),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_171),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_172),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_173),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_174),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_175),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_176),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_177),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_178),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_179),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_180),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_181),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_182),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_183),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_184),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_185),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_186),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_187),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_188),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_189),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_190),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_191),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_192),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_193),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_194),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_195),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_196),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_197),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_198),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_199),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_200),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_201),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_202),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_203),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_204),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_205),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_206),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_207),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_208),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_209),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_210),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_211),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_212),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_213),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_214),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_215),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_216),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_217),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_218),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_219),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_220),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_221),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_222),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_223),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_224),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_225),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_226),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_227),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_228),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_229),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_230),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_231),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_232),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_233),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_234),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_235),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_236),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_237),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_238),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_239),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_240),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_241),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_242),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_243),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_244),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_245),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_246),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_247),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_248),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_249),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_250),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_251),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_252),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_253),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_254),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_255),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_256),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_257),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_258),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_259),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_260),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_261),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_262),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_263),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_264),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_265),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_266),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_267),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_268),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_269),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_270),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_271),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_272),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_273),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_274),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_275),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_276),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_277),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_278),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_279),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_280),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_281),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_282),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_283),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_284),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_285),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_286),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_287),
((NimStringDesc*) &TM__U2GgQs2n1Q2Wng1z9ci28MQ_288)}
;

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, findStr__hEgkiaE9aR30m0sTnaIzc5w)(NimStringDesc** a, NI aLen_0, NimStringDesc* s) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (aLen_0-1);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				{
					NI T6_;
					T6_ = (NI)0;
					T6_ = nsuCmpIgnoreStyle(a[i], s);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					if (!(T6_ == ((NI) 0))) goto LA7_;
					result = i;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
