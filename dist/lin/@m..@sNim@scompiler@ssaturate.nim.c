/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
#define nimfr_(x, y)
#define nimln_(x, y)
static N_INLINE(NI64, pluspercent___diI9aRPc9bjx9bT39cDuabKh5Asystem)(NI64 x, NI64 y);
static N_INLINE(NI64, starpercent___diI9aRPc9bjx9bT39cDuabKh5A_3system)(NI64 x, NI64 y);
static N_INLINE(NF, toBiggestFloat__hTpm9cXKgh17pxyZUsNnUyQsystem)(NI64 i);
static N_INLINE(NF, abs__BRaAqinz6OWTHkALb4oj6Qsystem)(NF x);
static N_INLINE(NI64, minuspercent___diI9aRPc9bjx9bT39cDuabKh5A_2system)(NI64 x, NI64 y);
static N_INLINE(NI64, pluspercent___diI9aRPc9bjx9bT39cDuabKh5Asystem)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = ((NI64) ((NU64)((NU64)(((NU64) (x))) + (NU64)(((NU64) (y))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barplusbar___AMT0epkRpHisEnmPCWqESg)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = pluspercent___diI9aRPc9bjx9bT39cDuabKh5Asystem(a, b);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (a < IL64(0));
		if (T9_) goto LA10_;
		T9_ = (b < IL64(0));
		LA10_: ;
		if (!T9_) goto LA11_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA11_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI64, starpercent___diI9aRPc9bjx9bT39cDuabKh5A_3system)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = ((NI64) ((NU64)((NU64)(((NU64) (x))) * (NU64)(((NU64) (y))))));
	return result;
}
static N_INLINE(NF, toBiggestFloat__hTpm9cXKgh17pxyZUsNnUyQsystem)(NI64 i) {
	NF result;
	result = (NF)0;
	result = ((NF) (i));
	return result;
}
static N_INLINE(NF, abs__BRaAqinz6OWTHkALb4oj6Qsystem)(NF x) {
	NF result;
	result = (NF)0;
	{
		if (!(x < 0.0)) goto LA3_;
		result = -(x);
	}
	goto LA1_;
	LA3_: ;
	{
		result = x;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barstarbar___AMT0epkRpHisEnmPCWqESg_2)(NI64 a, NI64 b) {
	NI64 result;
	NF resAsFloat;
	NF floatProd;
	NF T1_;
{	result = (NI64)0;
	resAsFloat = (NF)0;
	floatProd = (NF)0;
	result = starpercent___diI9aRPc9bjx9bT39cDuabKh5A_3system(a, b);
	floatProd = toBiggestFloat__hTpm9cXKgh17pxyZUsNnUyQsystem(a);
	T1_ = (NF)0;
	T1_ = toBiggestFloat__hTpm9cXKgh17pxyZUsNnUyQsystem(b);
	floatProd = ((NF)(floatProd) * (NF)(T1_));
	resAsFloat = toBiggestFloat__hTpm9cXKgh17pxyZUsNnUyQsystem(result);
	{
		if (!(resAsFloat == floatProd)) goto LA4_;
		goto BeforeRet_;
	}
	LA4_: ;
	{
		NF T8_;
		NF T9_;
		T8_ = (NF)0;
		T8_ = abs__BRaAqinz6OWTHkALb4oj6Qsystem(((NF)(resAsFloat) - (NF)(floatProd)));
		T9_ = (NF)0;
		T9_ = abs__BRaAqinz6OWTHkALb4oj6Qsystem(floatProd);
		if (!(((NF)(3.2000000000000000e+01) * (NF)(T8_)) <= T9_)) goto LA10_;
		goto BeforeRet_;
	}
	LA10_: ;
	{
		if (!(0.0 <= floatProd)) goto LA14_;
		result = IL64(9223372036854775807);
	}
	goto LA12_;
	LA14_: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA12_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI64, minuspercent___diI9aRPc9bjx9bT39cDuabKh5A_2system)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = ((NI64) ((NU64)((NU64)(((NU64) (x))) - (NU64)(((NU64) (y))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barminusbar___AMT0epkRpHisEnmPCWqESg_3)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = minuspercent___diI9aRPc9bjx9bT39cDuabKh5A_2system(a, b);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		if (!(IL64(0) < b)) goto LA9_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA9_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}
