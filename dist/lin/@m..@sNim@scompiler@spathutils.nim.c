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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosrelativePath)(NimStringDesc* path, NimStringDesc* base, NIM_CHAR sep);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NIM_BOOL, isEmpty__ZNWb41IwBSHCUIjlqlGoxgpathutils)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__bx9csIXjBBeHkYSkIUixO1g)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, relativeTo__zjjWvxBunys9bbBJHoqyLyQ)(NimStringDesc* fullPath, NimStringDesc* baseFilename, NIM_CHAR sep) {
	NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = nosrelativePath(fullPath, baseFilename, sep);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, splitFile__z7B4FbwzX3Y0L1EA2lLGXw)(NimStringDesc* x, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result) {
	tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T1_;
	NimStringDesc* a;
	NimStringDesc* b;
	NimStringDesc* c;
	NimStringDesc* colontmp_;
	NimStringDesc* colontmp__2;
	NimStringDesc* colontmp__3;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&T1_), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
	nossplitFile(x, (&T1_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = (NimStringDesc*)0;
	a = T1_.Field0;
	b = (NimStringDesc*)0;
	b = T1_.Field1;
	c = (NimStringDesc*)0;
	c = T1_.Field2;
	colontmp_ = copyString(a);
	colontmp__2 = copyString(b);
	colontmp__3 = copyString(c);
	(*Result).Field0 = copyString(colontmp_);
	(*Result).Field1 = copyString(colontmp__2);
	(*Result).Field2 = copyString(colontmp__3);
	}BeforeRet_: ;
}
static N_INLINE(NIM_BOOL, isEmpty__ZNWb41IwBSHCUIjlqlGoxgpathutils)(NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((x ? x->Sup.len : 0) == ((NI) 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash___QVqo5OOQAdrjFqBsPctklw)(NimStringDesc* base, NimStringDesc* f) {
	NimStringDesc* result;
	NimStringDesc* base_2;
	NI state;
	NimStringDesc* T7_;
	NimStringDesc* T8_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isEmpty__ZNWb41IwBSHCUIjlqlGoxgpathutils(base);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		base_2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		base_2 = base;
	}
	LA1_: ;
	result = rawNewString(((NI) ((NI)((base_2 ? base_2->Sup.len : 0) + (f ? f->Sup.len : 0)))));
	state = ((NI) 0);
	T7_ = (NimStringDesc*)0;
	T7_ = base_2;
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(T7_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T8_ = (NimStringDesc*)0;
	T8_ = f;
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(T8_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash___0U8YTiSB6NvFwgvyimFN2Q)(NimStringDesc* base, NimStringDesc* f) {
	NimStringDesc* result;
	NimStringDesc* base_2;
	NI state;
	NimStringDesc* T7_;
	NimStringDesc* T8_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isEmpty__ZNWb41IwBSHCUIjlqlGoxgpathutils(base);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		base_2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		base_2 = base;
	}
	LA1_: ;
	result = rawNewString(((NI) ((NI)((base_2 ? base_2->Sup.len : 0) + (f ? f->Sup.len : 0)))));
	state = ((NI) 0);
	T7_ = (NimStringDesc*)0;
	T7_ = base_2;
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(T7_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T8_ = (NimStringDesc*)0;
	T8_ = f;
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(T8_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
