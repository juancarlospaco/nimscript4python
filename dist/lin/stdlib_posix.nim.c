/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <sys/types.h>
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;

/* section: NIM_merge_TYPES */
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

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG__T7ZeAv6ofGPBA29bsuGG1ug)(int s);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__r9bTMVI8f19ah9b11jMgY4kPg_;

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFSIGNALED__o9b5GK70QLj9ahJeczQ2LyRg)(int s) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (((NI8) 0) < (NI8)((NI64)(((NI8) ((NI32)((NI32)(s & ((NI32) 127)) + ((NI32) 1))))) >> (NU64)(((NI) 1))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG__T7ZeAv6ofGPBA29bsuGG1ug)(int s) {
	int result;
	result = (int)0;
	result = (NI32)(s & ((NI32) 127));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, WEXITSTATUS__T7ZeAv6ofGPBA29bsuGG1ug_2)(int s) {
	int result;
	result = (int)0;
	result = (NI32)((NI64)((NI32)(s & ((NI32) 65280))) >> (NU64)(((NI) 8)));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFEXITED__o9b5GK70QLj9ahJeczQ2LyRg_2)(int s) {
	NIM_BOOL result;
	int T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = WTERMSIG__T7ZeAv6ofGPBA29bsuGG1ug(s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (T1_ == ((NI32) 0));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT3 */
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.align = NIM_ALIGNOF(pid_t);
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
}

