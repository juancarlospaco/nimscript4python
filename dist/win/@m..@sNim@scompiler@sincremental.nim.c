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
typedef struct tyObject_IncrementalCtx__sdH7TnbKACuAzE7DBabnCA tyObject_IncrementalCtx__sdH7TnbKACuAzE7DBabnCA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;

/* section: NIM_merge_TYPES */
struct tyObject_IncrementalCtx__sdH7TnbKACuAzE7DBabnCA {
char dummy;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__sdH7TnbKACuAzE7DBabnCA_;
N_LIB_PRIVATE N_NIMCALL(void, compiler_incrementalDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[1];

/* section: NIM_merge_TYPE_INIT3 */
NTI__sdH7TnbKACuAzE7DBabnCA_.size = sizeof(tyObject_IncrementalCtx__sdH7TnbKACuAzE7DBabnCA);
NTI__sdH7TnbKACuAzE7DBabnCA_.align = NIM_ALIGNOF(tyObject_IncrementalCtx__sdH7TnbKACuAzE7DBabnCA);
NTI__sdH7TnbKACuAzE7DBabnCA_.kind = 18;
NTI__sdH7TnbKACuAzE7DBabnCA_.base = 0;
NTI__sdH7TnbKACuAzE7DBabnCA_.flags = 3;
TM__YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[0].len = 0; TM__YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[0].kind = 2;
NTI__sdH7TnbKACuAzE7DBabnCA_.node = &TM__YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[0];
}

