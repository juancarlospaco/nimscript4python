/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__Ef05srmQTDulnBdXR4Ja6Q tySequence__Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence__MvZmat48bhe9b6x9aUD58D5Q tySequence__MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw;
typedef struct tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w;
typedef struct tyObject_TProcCon__s5jyYR8yL1QmFqiHICzU9aQ tyObject_TProcCon__s5jyYR8yL1QmFqiHICzU9aQ;
typedef struct tyObject_TMatchedConcept__9blNHn9cqK8EfxnwsfjDnKvg tyObject_TMatchedConcept__9blNHn9cqK8EfxnwsfjDnKvg;
typedef struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ tySequence__DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence__9brg1xNurxcus33lU4IE1Dw tySequence__9brg1xNurxcus33lU4IE1Dw;
typedef struct tySequence__oYkV9aFZe0MXcEAprJaOUsA tySequence__oYkV9aFZe0MXcEAprJaOUsA;
typedef struct tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct tySequence__Mh9agqM29bm9aP5AUL1x7dZGA tySequence__Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct tySequence__arD7Tw6eD6lvOczWZl9buNg tySequence__arD7Tw6eD6lvOczWZl9buNg;
typedef struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA;
typedef struct tyObject_TCtx__S3Av1Ng7MBWGEZZBhfDYCw tyObject_TCtx__S3Av1Ng7MBWGEZZBhfDYCw;
typedef struct tySequence__jWKvSdankQPoT5bw9cBU9aiw tySequence__jWKvSdankQPoT5bw9cBU9aiw;
typedef struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_ModuleGraphcolonObjectType___RZI3hCs0FTPYx8StfC81qQ tyObject_ModuleGraphcolonObjectType___RZI3hCs0FTPYx8StfC81qQ;
typedef struct tySequence__YceFcaugL2PWNtVbyffD9bQ tySequence__YceFcaugL2PWNtVbyffD9bQ;
typedef struct tySequence__d4l6E4jBnTQ3BEfsLOpmEQ tySequence__d4l6E4jBnTQ3BEfsLOpmEQ;
typedef struct tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w;
typedef struct tySequence__Bis5AbpONWcIRrPyPJS8Yw tySequence__Bis5AbpONWcIRrPyPJS8Yw;
typedef struct tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg;
typedef struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA tySequence__DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyTuple__zwpS6d6iewrdlBSTNFoyVA tyTuple__zwpS6d6iewrdlBSTNFoyVA;
typedef struct tyObject_TOptionEntry__H9ac5KbrDJVwT1zH5O83r7w tyObject_TOptionEntry__H9ac5KbrDJVwT1zH5O83r7w;
typedef struct tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg;
typedef struct tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ;
typedef struct tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple__KlSLWBROOViO04uLQHu7ig tyTuple__KlSLWBROOViO04uLQHu7ig;
typedef struct tyTuple__DJxbl4DYEJfb29cy1MYaUPQ tyTuple__DJxbl4DYEJfb29cy1MYaUPQ;
typedef struct tyTuple__NAaJgGVgNmlGoqmiWxdOHQ tyTuple__NAaJgGVgNmlGoqmiWxdOHQ;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef NU8 tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringDesc* strVal;
} _kind_3;
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
} _kind_4;
struct {tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* ident;
} _kind_5;
struct {tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} _kind_6;
};
NimStringDesc* comment;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
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
typedef NU8 tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw;
typedef tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* tyArray__PsPyPA45AAjHu4uDGHNjTg[6];
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
struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence__Ef05srmQTDulnBdXR4Ja6Q* sons;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
tyArray__PsPyPA45AAjHu4uDGHNjTg attachedOps;
tySequence__MvZmat48bhe9b6x9aUD58D5Q* methods;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
NI16 lockLevel;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typeInst;
NI uniqueId;
};
struct tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w {
  RootObj Sup;
};
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* head;
tySequence__9brg1xNurxcus33lU4IE1Dw* data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
};
struct tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q {
NI counter;
tySequence__Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__RcJNn9bSvWdJgUmA1O6sbHA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
typedef NU32 tySet_tyEnum_TExprFlag__0WWd9a4ssQWuY7Q6ZKepq9cQ;
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__39auogS0nN05zO6JrT7za9cQ) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TExprFlag__0WWd9a4ssQWuY7Q6ZKepq9cQ flags);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__msQKNa7Ucgnt49aAZ3YRJww) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t);
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, void* ClE_0);
void* ClE_0;
} tyProc__SyIRUaCbN5R6rlwWDNniLQ;
typedef NU32 tySet_tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__qlV9aWvA5wrWVg9bI5PqwJyA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* nOrig, tySet_tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw filter, tySet_tyEnum_TExprFlag__0WWd9a4ssQWuY7Q6ZKepq9cQ flags);
typedef N_NIMCALL_PTR(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, tyProc__PiEiMdzXg9bcm3lEo4Q6iNw) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* prev);
typedef struct {
N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, ClP_0) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q pt, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, void* ClE_0);
void* ClE_0;
} tyProc__icITxWxlFufT9aDDCEKD2VQ;
typedef struct {
N_NIMCALL_PTR(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*, ClP_0) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* fn, tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q pt, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, void* ClE_0);
void* ClE_0;
} tyProc__GeenfmDntvGEQoCko16JtA;
struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU8 tyEnum_TTypeAttachedOp__Rp5P9bWYldQTLkZ7DytmxOg;
typedef N_NIMCALL_PTR(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*, tyProc__9amcenQyXzP9cCQNnXZVgnYQ) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* dc, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TTypeAttachedOp__Rp5P9bWYldQTLkZ7DytmxOg op, NI col);
typedef NU16 tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ;
struct tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w {
tySequence__Bis5AbpONWcIRrPyPJS8Yw* data;
NI counter;
};
struct tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug {
  tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w Sup;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* enforceVoidContext;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* module;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* currentScope;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* importTable;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* topLevelScope;
tyObject_TProcCon__s5jyYR8yL1QmFqiHICzU9aQ* p;
tyObject_TMatchedConcept__9blNHn9cqK8EfxnwsfjDnKvg* matchedConcept;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* friendModules;
NI instCounter;
tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg ambiguousSymbols;
NI inGenericContext;
NI inStaticContext;
NI inUnrolledContext;
NI compilesContextId;
NI compilesContextIdGenerator;
NI inGenericInst;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* converters;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* patterns;
tySequence__oYkV9aFZe0MXcEAprJaOUsA* optionStack;
tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q symMapping;
tySequence__arD7Tw6eD6lvOczWZl9buNg* libs;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA semConstExpr;
tyProc__39auogS0nN05zO6JrT7za9cQ semExpr;
tyProc__39auogS0nN05zO6JrT7za9cQ semTryExpr;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA semTryConstExpr;
tyProc__msQKNa7Ucgnt49aAZ3YRJww computeRequiresInit;
tyProc__SyIRUaCbN5R6rlwWDNniLQ hasUnresolvedArgs;
tyProc__39auogS0nN05zO6JrT7za9cQ semOperand;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA semConstBoolExpr;
tyProc__qlV9aWvA5wrWVg9bI5PqwJyA semOverloadedCall;
tyProc__PiEiMdzXg9bcm3lEo4Q6iNw semTypeNode;
tyProc__icITxWxlFufT9aDDCEKD2VQ semInferredLambda;
tyProc__GeenfmDntvGEQoCko16JtA semGenerateInstance;
tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg includedFiles;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA pureEnumFields;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA userPragmas;
tyObject_TCtx__S3Av1Ng7MBWGEZZBhfDYCw* evalContext;
tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg unknownIdents;
tySequence__jWKvSdankQPoT5bw9cBU9aiw* generics;
NI topStmts;
NI lastGenericIdx;
NI hloLoopDetector;
NI inParallelStmt;
tyProc__9amcenQyXzP9cCQNnXZVgnYQ instTypeBoundOp;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* selfName;
tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* cache;
tyObject_ModuleGraphcolonObjectType___RZI3hCs0FTPYx8StfC81qQ* graph;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA signatures;
NimStringDesc* recursiveDep;
NIM_BOOL suggestionsMade;
tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ features;
NI inTypeContext;
tySequence__YceFcaugL2PWNtVbyffD9bQ* typesWithOps;
tySequence__d4l6E4jBnTQ3BEfsLOpmEQ* unusedImports;
tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w exportIndirections;
};
struct tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw {
NI depthLevel;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA symbols;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* parent;
};
struct tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg {
NI h;
};
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
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
typedef NU64 tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
struct tyTuple__zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg {
tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA* key;
RootObj* val;
};
struct tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ {
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* genericSym;
tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA* inst;
};
struct tyTuple__KlSLWBROOViO04uLQHu7ig {
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* Field0;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* Field1;
};
struct tyTuple__DJxbl4DYEJfb29cy1MYaUPQ {
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* Field0;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field1;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyTuple__NAaJgGVgNmlGoqmiWxdOHQ {
NI Field0;
tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ Field1;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence__MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple__zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
struct tySequence__9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence__oYkV9aFZe0MXcEAprJaOUsA {
  TGenericSeq Sup;
  tyObject_TOptionEntry__H9ac5KbrDJVwT1zH5O83r7w* data[SEQ_DECL_SIZE];
};
struct tySequence__Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
};
struct tySequence__arD7Tw6eD6lvOczWZl9buNg {
  TGenericSeq Sup;
  tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* data[SEQ_DECL_SIZE];
};
struct tySequence__jWKvSdankQPoT5bw9cBU9aiw {
  TGenericSeq Sup;
  tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ data[SEQ_DECL_SIZE];
};
struct tySequence__YceFcaugL2PWNtVbyffD9bQ {
  TGenericSeq Sup;
  tyTuple__KlSLWBROOViO04uLQHu7ig data[SEQ_DECL_SIZE];
};
struct tySequence__d4l6E4jBnTQ3BEfsLOpmEQ {
  TGenericSeq Sup;
  tyTuple__DJxbl4DYEJfb29cy1MYaUPQ data[SEQ_DECL_SIZE];
};
struct tySequence__Bis5AbpONWcIRrPyPJS8Yw {
  TGenericSeq Sup;
  tyTuple__NAaJgGVgNmlGoqmiWxdOHQ data[SEQ_DECL_SIZE];
};
struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, newTypeS__xb5E2cGIynZweqWlCP8Tig)(tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind, tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newNodeIT__2kgyckjaq2XB9bxBo5ZeIbg)(tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newNodeI__vokyXY9cZDshCSxFKChhG9bg)(tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*, getCurrOwner__ETdcFH1xSyhy8lRl3iwf6w)(tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*, initTabIter__Ag5U6LHpF7iSy3G6AzXM9cw)(tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg* ti, tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, skipTypes__zsqmUNR5OZrTUna0Y9bdu9bg)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*, newSym__IXbidcxhXTQGZY9abN63Cxg)(tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw symKind, tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* name, tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options);
N_LIB_PRIVATE N_NIMCALL(void, add__P8dDSotTW25BkfbyspojGg)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newSymNode__I2DV2TmmOysY1ZEGW19b9bRg)(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym);
N_LIB_PRIVATE N_NIMCALL(void, addSonSkipIntLit__2IwAMgUJgjdjR7Qyvt9bjCQ)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* father, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newSymNode__AFd9c9cdRrILXl9anrr9aRvqig)(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newDeref__RzKgK8tcIIFHt7HBTQVoYQlowerings)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*, nextIter__Ag5U6LHpF7iSy3G6AzXM9cw_2)(tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg* ti, tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newDeref__RzKgK8tcIIFHt7HBTQVoYQlowerings)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeIT__2kgyckjaq2XB9bxBo5ZeIbg(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	add__P8dDSotTW25BkfbyspojGg(result, n);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, semLocals__UZKPH7X5GcC9bXeyF6OaeNg)(tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	NI counter;
	tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* tupleType;
	tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	counter = ((NI) 0);
	tupleType = newTypeS__xb5E2cGIynZweqWlCP8Tig(((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 18), c);
	result = newNodeIT__2kgyckjaq2XB9bxBo5ZeIbg(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 37), (*n).info, tupleType);
	(*tupleType).n = newNodeI__vokyXY9cZDshCSxFKChhG9bg(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 138), (*n).info);
	owner = getCurrOwner__ETdcFH1xSyhy8lRl3iwf6w(c);
	{
		tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* scope;
		tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* current;
		scope = (tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw*)0;
		current = (*c).currentScope;
		{
			while (1) {
				if (!!((current == NIM_NIL))) goto LA3;
				scope = current;
				{
					if (!(scope == (*c).topLevelScope)) goto LA6_;
					goto LA1;
				}
				LA6_: ;
				{
					tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* it;
					tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg it_2;
					tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* s;
					it = (tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w*)0;
					nimZeroMem((void*)(&it_2), sizeof(tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg));
					s = initTabIter__Ag5U6LHpF7iSy3G6AzXM9cw((&it_2), (*scope).symbols);
					{
						while (1) {
							if (!!((s == NIM_NIL))) goto LA10;
							it = s;
							{
								NIM_BOOL T13_;
								tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T15_;
								T13_ = (NIM_BOOL)0;
								T13_ = ((2099976 &(1U<<((NU)((*it).kind)&31U)))!=0);
								if (!(T13_)) goto LA14_;
								T15_ = (tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
								T15_ = skipTypes__zsqmUNR5OZrTUna0Y9bdu9bg((*it).typ, 8390656);
								T13_ = !(((IL64(1153202979717775816) &((NU64)1<<((NU)((*T15_).kind)&63U)))!=0));
								LA14_: ;
								if (!T13_) goto LA16_;
								{
									tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* field;
									tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T22_;
									tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a;
									if (!((*it).owner == owner)) goto LA20_;
									field = newSym__IXbidcxhXTQGZY9abN63Cxg(((tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw) 19), (*it).name, owner, (*n).info, 0);
									(*field).typ = skipTypes__zsqmUNR5OZrTUna0Y9bdu9bg((*it).typ, 8388608);
									(*field).position = counter;
									counter += ((NI) 1);
									T22_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
									T22_ = newSymNode__I2DV2TmmOysY1ZEGW19b9bRg(field);
									add__P8dDSotTW25BkfbyspojGg((*tupleType).n, T22_);
									addSonSkipIntLit__2IwAMgUJgjdjR7Qyvt9bjCQ(tupleType, (*field).typ);
									a = newSymNode__AFd9c9cdRrILXl9anrr9aRvqig(it, (*result).info);
									{
										tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T25_;
										T25_ = (tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
										T25_ = skipTypes__zsqmUNR5OZrTUna0Y9bdu9bg((*it).typ, 2048);
										if (!((*T25_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 23))) goto LA26_;
										a = newDeref__RzKgK8tcIIFHt7HBTQVoYQlowerings(a);
									}
									LA26_: ;
									add__P8dDSotTW25BkfbyspojGg(result, a);
								}
								LA20_: ;
							}
							LA16_: ;
							s = nextIter__Ag5U6LHpF7iSy3G6AzXM9cw_2((&it_2), (*scope).symbols);
						} LA10: ;
					}
				}
				current = (*current).parent;
			} LA3: ;
		}
	} LA1: ;
	return result;
}
