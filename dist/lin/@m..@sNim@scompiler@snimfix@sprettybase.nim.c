/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw tyObject_Target__9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence__tNFrR3kRuS1FSwuiLGoSSA tySequence__tNFrR3kRuS1FSwuiLGoSSA;
typedef struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence__7lEisrXlQEzwtUKW5pzRCw tySequence__7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ tySequence__Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw tySequence__4eRCaZmrYLLw2k30GPTiMw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw tySequence__pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ;
typedef struct tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig;
typedef struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tySequence__Ef05srmQTDulnBdXR4Ja6Q tySequence__Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA tySequence__DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ tySequence__DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyTuple__z822nu9bFF1AlQnLrHjdwpA tyTuple__z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw tyTuple__xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg;
typedef struct tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA;

/* section: NIM_merge_TYPES */
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TBackend__4OBsgZ9cscH2JLUE5Wcz01g;
typedef NU8 tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA {
tySequence__7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence__tNFrR3kRuS1FSwuiLGoSSA* msgContext;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence__Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_TCommands__VH3ghgQVwLSg3krOAoXigw;
typedef NU8 tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_ExceptionSystem__1mkAogyaDAT7g9cQjzsgKLQ;
typedef NU8 tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg {
tySequence__4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU16 tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA;
typedef NU8 tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA;
typedef NU8 tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA[9];
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc__YD0MR9bJ2x4beJkZdnjXN9cA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc__k2HFjxisIgDALbEUFojxaQ;
typedef NU8 tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc__oL9coyIA2VDTGdUcur9aL9bew;
struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw {
tyEnum_TBackend__4OBsgZ9cscH2JLUE5Wcz01g backend;
tyObject_Target__9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* macrosToExpand;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* arcToExpand;
tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A m;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_TCommands__VH3ghgQVwLSg3krOAoXigw cmd;
tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw selectedGC;
tyEnum_ExceptionSystem__1mkAogyaDAT7g9cQjzsgKLQ exc;
NI verbosity;
NI numberOfProcessors;
NimStringDesc* evalExpr;
NF lastCmdTime;
tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ features;
tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA legacyFeatures;
NimStringDesc* arguments;
tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA modifiedyNotes;
tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA cmdlineNotes;
tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA foreignPackageNotes;
tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA notes;
tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA warningAsErrors;
tySet_tyEnum_TMsgKind__2KKSM6ZBSQgjWsy4q169bgA mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
NI maxLoopIterationsVM;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* nimblePaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* outDir;
NimStringDesc* jsonBuildFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* cfileSpecificOptions;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
NIM_BOOL lastMsgWasDot;
NI32 projectMainIdx;
NI32 projectMainIdx2;
NimStringDesc* command;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NimStringDesc* commandLine;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* extraCmds;
NIM_BOOL keepComments;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
NimStringDesc* docRoot;
NimStringDesc* docCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* cCompilerPath;
tySequence__pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc__YD0MR9bJ2x4beJkZdnjXN9cA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc__k2HFjxisIgDALbEUFojxaQ writelnHook;
tyProc__oL9coyIA2VDTGdUcur9aL9bew structuredErrorHook;
NimStringDesc* cppCustomNamespace;
tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig* vmProfileData;
};
struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyFile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU8 tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence__Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
} _kind_1;
struct {tySequence__DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* transformedBody;
} _kind_2;
struct {tySequence__DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab;
} _kind_3;
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
NI alignment;
} _kind_4;
};
tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct tyTuple__z822nu9bFF1AlQnLrHjdwpA {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field0;
NimStringDesc* Field1;
};
struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* nimname;
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA flags;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__tNFrR3kRuS1FSwuiLGoSSA {
  TGenericSeq Sup;
  tyTuple__z822nu9bFF1AlQnLrHjdwpA data[SEQ_DECL_SIZE];
};
struct tySequence__7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple__xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence__4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple__QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
struct tySequence__Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, replaceDeprecated__6mcebbEZG8lkp8I2EHGJ4A)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* oldSym, tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* newSym);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, sourceLine__b49bYNvmBdG6RP9cHaZGFhvQ)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q i);
N_LIB_PRIVATE N_NIMCALL(NI, identLen__cr8f4oiC7y4wZkhdloxc7w)(NimStringDesc* line, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, X5BX5D___FPvLvuwqfYMFkcbGfPM8QQsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__iGg0RIKceRvsmvq8FUHOEw)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NimStringDesc*, X5BX5D___FPvLvuwqfYMFkcbGfPM8QQsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	result = (NimStringDesc*)0;
	a = x.a;
	L = (NI)((NI)(x.b - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, replaceDeprecated__6mcebbEZG8lkp8I2EHGJ4A)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* oldSym, tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* newSym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI T17_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	line = sourceLine__b49bYNvmBdG6RP9cHaZGFhvQ(conf, info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	{
		if (!(first < ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		while (1) {
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) < first);
			if (!(T7_)) goto LA8_;
			T7_ = (((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) == ((NU8)(95)));
			LA8_: ;
			if (!T7_) goto LA6;
			first -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first < ((NI) 0))) goto LA11_;
		goto BeforeRet_;
	}
	LA11_: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15_;
		first += ((NI) 1);
	}
	LA15_: ;
	T17_ = (NI)0;
	T17_ = identLen__cr8f4oiC7y4wZkhdloxc7w(line, first);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	last = (NI)((NI)(first + T17_) - ((NI) 1));
	{
		tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T20_;
		NimStringDesc* T21_;
		NI T22_;
		NimStringDesc* x;
		NimStringDesc* T25_;
		NimStringDesc* T26_;
		NimStringDesc* T27_;
		T20_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(first, last);
		T21_ = (NimStringDesc*)0;
		T21_ = X5BX5D___FPvLvuwqfYMFkcbGfPM8QQsystem(line, T20_);
		T22_ = (NI)0;
		T22_ = nsuCmpIgnoreStyle(T21_, (*oldSym).s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!(T22_ == ((NI) 0))) goto LA23_;
		T25_ = (NimStringDesc*)0;
		T26_ = (NimStringDesc*)0;
		T26_ = substr__2yh9cer0ymNRHlOOg8P7IuA(line, ((NI) 0), (NI)(first - ((NI) 1)));
		T27_ = (NimStringDesc*)0;
		T27_ = substr__iGg0RIKceRvsmvq8FUHOEw(line, (NI)(last + ((NI) 1)));
		T25_ = rawNewString((T26_ ? T26_->Sup.len : 0) + ((*newSym).s ? (*newSym).s->Sup.len : 0) + (T27_ ? T27_->Sup.len : 0) + 0);
appendString(T25_, T26_);
appendString(T25_, (*newSym).s);
appendString(T25_, T27_);
		x = T25_;
		(*conf).m.fileInfos->data[info.fileIndex].lines->data[(NI)(((NI) (info.line)) - ((NI) 1))] = x;
		(*conf).m.fileInfos->data[info.fileIndex].dirty = NIM_TRUE;
	}
	LA23_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, replaceDeprecated__gwkcrA9aySxcttSaRoWR78w)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* oldSym, tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* newSym) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	replaceDeprecated__6mcebbEZG8lkp8I2EHGJ4A(conf, info, (*oldSym).name, (*newSym).name);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}