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
typedef struct tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence__9brg1xNurxcus33lU4IE1Dw tySequence__9brg1xNurxcus33lU4IE1Dw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* head;
tySequence__9brg1xNurxcus33lU4IE1Dw* data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU tyArray__VqSA39cBDWnwnJySTumCdjw[8];
struct tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ {
tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
tyArray__VqSA39cBDWnwnJySTumCdjw bits;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct tySequence__9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__Vz0pPzxitckVclPPWiz0xw)(void* p, NI op);
static N_NIMCALL(void, Marker_tySequence__9brg1xNurxcus33lU4IE1Dw)(void* p, NI op);
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(void, bitincl__E9cDk0lZrpCTkoPoFYHbLEAintsets)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*, intSetPut__JuDvqAxqqazeTie5vkhxBA)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t, NI key);
static N_INLINE(NI, nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets)(NI h, NI maxHash, NI* perturb);
static N_INLINE(NIM_BOOL, mustRehash__XGqeeQObH8F6XvrIu35PQQintsets)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t);
N_LIB_PRIVATE N_NIMCALL(void, intSetEnlarge__gAxAZSheQnyMikueBAoGpQ)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t);
N_LIB_PRIVATE N_NIMCALL(void, intSetRawInsert__Zr3KsTeukB1Ek9b8W3JdY8Q)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t, tySequence__9brg1xNurxcus33lU4IE1Dw** data, tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* desc);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(void, incl__jENnK9c9bPE73pKmo2vYjpqg)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*, intSetGet__sgEEbaJIQsQO4zFm2Zy3yQ)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t, NI key);
N_LIB_PRIVATE N_NIMCALL(void, exclImpl__jENnK9c9bPE73pKmo2vYjpqg_3)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initIntSet__n8oDZMn19bEdodSnrBQB9a1Q)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* Result);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__R6uRTGpl30Ofaw4Ni3vawA)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
N_LIB_PRIVATE TNimType NTI__PQrmFm4BXFkFSVOUl1ojSg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTI__ul49aWfv9aes8cutmeltT3gQ_;
N_LIB_PRIVATE TNimType NTI__hMQEc0FMry7Up7EoPki79aA_;
N_LIB_PRIVATE TNimType NTI__VqSA39cBDWnwnJySTumCdjw_;
N_LIB_PRIVATE TNimType NTI__Vz0pPzxitckVclPPWiz0xw_;
N_LIB_PRIVATE TNimType NTI__9brg1xNurxcus33lU4IE1Dw_;
N_LIB_PRIVATE TNimType NTI__emiAJ8okywrJw7ZHLzlXbQ_;
static N_NIMCALL(void, Marker_tyRef__Vz0pPzxitckVclPPWiz0xw)(void* p, NI op) {
	tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* a;
	NI T1_;
	a = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*)p;
	nimGCvisit((void*)(*a).next, op);
	T1_ = (NI)0;
}
static N_NIMCALL(void, Marker_tySequence__9brg1xNurxcus33lU4IE1Dw)(void* p, NI op) {
	tySequence__9brg1xNurxcus33lU4IE1Dw* a;
	NI T1_;
	a = (tySequence__9brg1xNurxcus33lU4IE1Dw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src) {
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, initIntSet__n8oDZMn19bEdodSnrBQB9a1Q)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* Result) {
	NI T1_;
	(*Result).elems = 0;
	(*Result).counter = 0;
	(*Result).max = 0;
	unsureAsgnRef((void**)&(*Result).head, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).data, NIM_NIL);
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 34; T1_++) {
	(*Result).a[T1_] = 0;
	}
	(*Result).elems = ((NI) 0);
	(*Result).counter = ((NI) 0);
	(*Result).max = ((NI) 0);
	(*Result).head = NIM_NIL;
	(*Result).data = NIM_NIL;
}
static N_INLINE(NI, nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets)(NI h, NI maxHash, NI* perturb) {
	NI result;
	NU perturb2;
	result = (NI)0;
	perturb2 = (NU)((NU64)(((NU) ((*perturb)))) >> (NU64)(((NI) 5)));
	(*perturb) = ((NI) (perturb2));
	result = (NI)((NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) + (*perturb)) & maxHash);
	return result;
}
static N_INLINE(NIM_BOOL, mustRehash__XGqeeQObH8F6XvrIu35PQQintsets)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t) {
	NIM_BOOL result;
	NI length;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	length = (NI)((*t).max + ((NI) 1));
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)((*t).counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - (*t).counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, intSetRawInsert__Zr3KsTeukB1Ek9b8W3JdY8Q)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t, tySequence__9brg1xNurxcus33lU4IE1Dw** data, tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* desc) {
	NI h;
	NI perturb;
	h = (NI)((*desc).key & (*t).max);
	perturb = (*desc).key;
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets(h, (*t).max, (&perturb));
		} LA2: ;
	}
	(*data)->data[h] = desc;
}
N_LIB_PRIVATE N_NIMCALL(void, intSetEnlarge__gAxAZSheQnyMikueBAoGpQ)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t) {
	tySequence__9brg1xNurxcus33lU4IE1Dw* n;
	NI oldMax;
	tySequence__9brg1xNurxcus33lU4IE1Dw* T8_;
	n = (tySequence__9brg1xNurxcus33lU4IE1Dw*)0;
	oldMax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (tySequence__9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI__9brg1xNurxcus33lU4IE1Dw_), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= oldMax)) goto LA3;
				i = res;
				{
					if (!!(((*t).data->data[i] == NIM_NIL))) goto LA6_;
					intSetRawInsert__Zr3KsTeukB1Ek9b8W3JdY8Q((&(*t)), (&n), (*t).data->data[i]);
				}
				LA6_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	T8_ = (tySequence__9brg1xNurxcus33lU4IE1Dw*)0;
	T8_ = (*t).data;
	(*t).data = n;
	n = T8_;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*, intSetPut__JuDvqAxqqazeTie5vkhxBA)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t, NI key) {
	tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* result;
	NI h;
	NI perturb;
{	result = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*)0;
	h = (NI)(key & (*t).max);
	perturb = key;
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets(h, (*t).max, (&perturb));
		} LA2: ;
	}
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = mustRehash__XGqeeQObH8F6XvrIu35PQQintsets((&(*t)));
		if (!T9_) goto LA10_;
		intSetEnlarge__gAxAZSheQnyMikueBAoGpQ(t);
	}
	LA10_: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	perturb = key;
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets(h, (*t).max, (&perturb));
		} LA13: ;
	}
	result = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI__Vz0pPzxitckVclPPWiz0xw_), sizeof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ));
	(*result).next = (*t).head;
	(*result).key = key;
	(*t).head = result;
	(*t).data->data[h] = result;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, bitincl__E9cDk0lZrpCTkoPoFYHbLEAintsets)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* ret;
	tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* t;
	NI u;
	ret = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*)0;
	t = intSetPut__JuDvqAxqqazeTie5vkhxBA(s, (NI)((NI64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] = (NU)((*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] | (NU)((NU64)(((NU) 1)) << (NU64)((NI)(u & ((NI) 63)))));
}
N_LIB_PRIVATE N_NIMCALL(void, incl__jENnK9c9bPE73pKmo2vYjpqg)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
{	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI i_2;
			i = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < (*s).elems)) goto LA7;
					i = i_2;
					{
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						goto BeforeRet_;
					}
					LA10_: ;
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
		{
			if (!((*s).elems < ((NI) 34))) goto LA14_;
			(*s).a[((*s).elems)- 0] = key;
			(*s).elems += ((NI) 1);
			goto BeforeRet_;
		}
		LA14_: ;
		(*s).data = (tySequence__9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI__9brg1xNurxcus33lU4IE1Dw_), ((NI) 8));
		(*s).max = ((NI) 7);
		{
			NI i_3;
			NI i_4;
			i_3 = (NI)0;
			i_4 = ((NI) 0);
			{
				while (1) {
					if (!(i_4 < (*s).elems)) goto LA18;
					i_3 = i_4;
					bitincl__E9cDk0lZrpCTkoPoFYHbLEAintsets(s, (*s).a[(i_3)- 0]);
					i_4 += ((NI) 1);
				} LA18: ;
			}
		}
		(*s).elems = ((NI) 35);
	}
	LA3_: ;
	bitincl__E9cDk0lZrpCTkoPoFYHbLEAintsets(s, key);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*, intSetGet__sgEEbaJIQsQO4zFm2Zy3yQ)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* t, NI key) {
	tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* result;
	NI h;
	NI perturb;
{	result = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*)0;
	h = (NI)(key & (*t).max);
	perturb = key;
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets(h, (*t).max, (&perturb));
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl__VFt0uM7bgfJ5age9alOsU9cg)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI i_2;
			i = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < (*s).elems)) goto LA7;
					i = i_2;
					{
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA10_: ;
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
		incl__jENnK9c9bPE73pKmo2vYjpqg(s, key);
		result = NIM_FALSE;
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* t;
		t = intSetGet__sgEEbaJIQsQO4zFm2Zy3yQ((&(*s)), (NI)((NI64)(key) >> (NU64)(((NI) 9))));
		{
			NI u;
			if (!!((t == NIM_NIL))) goto LA15_;
			u = (NI)(key & ((NI) 511));
			result = !(((NU)((*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] & (NU)((NU64)(((NU) 1)) << (NU64)((NI)(u & ((NI) 63))))) == ((NU) 0)));
			{
				if (!!(result)) goto LA19_;
				(*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] = (NU)((*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] | (NU)((NU64)(((NU) 1)) << (NU64)((NI)(u & ((NI) 63)))));
			}
			LA19_: ;
		}
		goto LA13_;
		LA15_: ;
		{
			incl__jENnK9c9bPE73pKmo2vYjpqg(s, key);
			result = NIM_FALSE;
		}
		LA13_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, exclImpl__jENnK9c9bPE73pKmo2vYjpqg_3)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
{	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI i_2;
			i = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < (*s).elems)) goto LA7;
					i = i_2;
					{
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						(*s).a[(i)- 0] = (*s).a[((NI)((*s).elems - ((NI) 1)))- 0];
						(*s).elems -= ((NI) 1);
						goto BeforeRet_;
					}
					LA10_: ;
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* t;
		t = intSetGet__sgEEbaJIQsQO4zFm2Zy3yQ((&(*s)), (NI)((NI64)(key) >> (NU64)(((NI) 9))));
		{
			NI u;
			if (!!((t == NIM_NIL))) goto LA15_;
			u = (NI)(key & ((NI) 511));
			(*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] = (NU)((*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] & (NU)((NU64) ~((NU)((NU64)(((NU) 1)) << (NU64)((NI)(u & ((NI) 63)))))));
		}
		LA15_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, excl__jENnK9c9bPE73pKmo2vYjpqg_2)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	exclImpl__jENnK9c9bPE73pKmo2vYjpqg_3(s, key);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__R6uRTGpl30Ofaw4Ni3vawA)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI i_2;
			i = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < (*s).elems)) goto LA7;
					i = i_2;
					{
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA10_: ;
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* t;
		t = intSetGet__sgEEbaJIQsQO4zFm2Zy3yQ(s, (NI)((NI64)(key) >> (NU64)(((NI) 9))));
		{
			NI u;
			if (!!((t == NIM_NIL))) goto LA15_;
			u = (NI)(key & ((NI) 511));
			result = !(((NU)((*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] & (NU)((NU64)(((NU) 1)) << (NU64)((NI)(u & ((NI) 63))))) == ((NU) 0)));
		}
		goto LA13_;
		LA15_: ;
		{
			result = NIM_FALSE;
		}
		LA13_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
N_LIB_PRIVATE N_NIMCALL(void, assign__9aeoXSYLtfdHDeDWcO9bHVbg)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* dest, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* src) {
	{
		if (!((*src).elems <= ((NI) 34))) goto LA3_;
		(*dest).data = NIM_NIL;
		(*dest).max = ((NI) 0);
		(*dest).counter = (*src).counter;
		(*dest).head = NIM_NIL;
		(*dest).elems = (*src).elems;
		nimCopyMem((void*)(*dest).a, (NIM_CONST void*)(*src).a, sizeof(tyArray__emiAJ8okywrJw7ZHLzlXbQ));
	}
	goto LA1_;
	LA3_: ;
	{
		NI T6_;
		tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* it;
		(*dest).counter = (*src).counter;
		(*dest).max = (*src).max;
		(*dest).elems = (*src).elems;
		T6_ = ((*src).data ? (*src).data->Sup.len : 0);
		(*dest).data = (tySequence__9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI__9brg1xNurxcus33lU4IE1Dw_), ((NI) (T6_)));
		it = (*src).head;
		{
			while (1) {
				NI h;
				NI perturb;
				tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* n;
				if (!!((it == NIM_NIL))) goto LA8;
				h = (NI)((*it).key & (*dest).max);
				perturb = (*it).key;
				{
					while (1) {
						if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA10;
						h = nextTry__Z9c09aOq4RqopL3OeMW6rqOwintsets(h, (*dest).max, (&perturb));
					} LA10: ;
				}
				n = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*)0;
				n = (tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI__Vz0pPzxitckVclPPWiz0xw_), sizeof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ));
				(*n).next = (*dest).head;
				(*n).key = (*it).key;
				nimCopyMem((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(tyArray__VqSA39cBDWnwnJySTumCdjw));
				(*dest).head = n;
				(*dest).data->data[h] = n;
				it = (*it).next;
			} LA8: ;
		}
	}
	LA1_: ;
}
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, difference__jhF9cCHu5ggiDdc87e1wx3g)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s1, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s2, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* Result) {
	initIntSet__n8oDZMn19bEdodSnrBQB9a1Q(Result);
	{
		NI item;
		item = (NI)0;
		{
			if (!((*s1).elems <= ((NI) 34))) goto LA4_;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < (*s1).elems)) goto LA8;
						i = i_2;
						item = (*s1).a[(i)- 0];
						{
							NIM_BOOL T11_;
							T11_ = (NIM_BOOL)0;
							T11_ = contains__R6uRTGpl30Ofaw4Ni3vawA(s2, item);
							if (!!(T11_)) goto LA12_;
							incl__jENnK9c9bPE73pKmo2vYjpqg(Result, item);
						}
						LA12_: ;
						i_2 += ((NI) 1);
					} LA8: ;
				}
			}
		}
		goto LA2_;
		LA4_: ;
		{
			tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* r;
			r = (*s1).head;
			{
				while (1) {
					NI i_3;
					if (!!((r == NIM_NIL))) goto LA16;
					i_3 = ((NI) 0);
					{
						while (1) {
							NU w;
							NI j;
							if (!(i_3 <= ((NI) 7))) goto LA18;
							w = (*r).bits[(i_3)- 0];
							j = ((NI) 0);
							{
								while (1) {
									if (!!((w == ((NU) 0)))) goto LA20;
									{
										NI T25_;
										if (!!(((NU)(w & ((NU) 1)) == ((NU) 0)))) goto LA23_;
										T25_ = (NI)0;
										T25_ = pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem((NI)((NU64)(i_3) << (NU64)(((NI) 6))), j);
										item = (NI)((NI)((NU64)((*r).key) << (NU64)(((NI) 9))) | T25_);
										{
											NIM_BOOL T28_;
											T28_ = (NIM_BOOL)0;
											T28_ = contains__R6uRTGpl30Ofaw4Ni3vawA(s2, item);
											if (!!(T28_)) goto LA29_;
											incl__jENnK9c9bPE73pKmo2vYjpqg(Result, item);
										}
										LA29_: ;
									}
									LA23_: ;
									j += ((NI) 1);
									w = (NU)((NU64)(w) >> (NU64)(((NI) 1)));
								} LA20: ;
							}
							i_3 += ((NI) 1);
						} LA18: ;
					}
					r = (*r).next;
				} LA16: ;
			}
		}
		LA2_: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[6];
static TNimNode* TM__ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[3];
static TNimNode TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[11];
NTI__PQrmFm4BXFkFSVOUl1ojSg_.size = sizeof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg);
NTI__PQrmFm4BXFkFSVOUl1ojSg_.kind = 18;
NTI__PQrmFm4BXFkFSVOUl1ojSg_.base = 0;
NTI__PQrmFm4BXFkFSVOUl1ojSg_.flags = 2;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[0] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[1];
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].offset = offsetof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg, elems);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].name = "elems";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[1] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[2];
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].offset = offsetof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg, counter);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].name = "counter";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[2] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[3];
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].offset = offsetof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg, max);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].name = "max";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[3] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[4];
NTI__ul49aWfv9aes8cutmeltT3gQ_.size = sizeof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ);
NTI__ul49aWfv9aes8cutmeltT3gQ_.kind = 18;
NTI__ul49aWfv9aes8cutmeltT3gQ_.base = 0;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[0] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[6];
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].offset = offsetof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ, next);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].typ = (&NTI__Vz0pPzxitckVclPPWiz0xw_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].name = "next";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[1] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[7];
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].offset = offsetof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ, key);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].name = "key";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[2] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[8];
NTI__hMQEc0FMry7Up7EoPki79aA_.size = sizeof(NU);
NTI__hMQEc0FMry7Up7EoPki79aA_.kind = 40;
NTI__hMQEc0FMry7Up7EoPki79aA_.base = 0;
NTI__hMQEc0FMry7Up7EoPki79aA_.flags = 3;
NTI__VqSA39cBDWnwnJySTumCdjw_.size = sizeof(tyArray__VqSA39cBDWnwnJySTumCdjw);
NTI__VqSA39cBDWnwnJySTumCdjw_.kind = 16;
NTI__VqSA39cBDWnwnJySTumCdjw_.base = (&NTI__hMQEc0FMry7Up7EoPki79aA_);
NTI__VqSA39cBDWnwnJySTumCdjw_.flags = 3;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].offset = offsetof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ, bits);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].typ = (&NTI__VqSA39cBDWnwnJySTumCdjw_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].name = "bits";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].len = 3; TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].kind = 2; TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].sons = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[0];
NTI__ul49aWfv9aes8cutmeltT3gQ_.node = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[5];
NTI__Vz0pPzxitckVclPPWiz0xw_.size = sizeof(tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ*);
NTI__Vz0pPzxitckVclPPWiz0xw_.kind = 22;
NTI__Vz0pPzxitckVclPPWiz0xw_.base = (&NTI__ul49aWfv9aes8cutmeltT3gQ_);
NTI__Vz0pPzxitckVclPPWiz0xw_.marker = Marker_tyRef__Vz0pPzxitckVclPPWiz0xw;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].offset = offsetof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg, head);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].typ = (&NTI__Vz0pPzxitckVclPPWiz0xw_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].name = "head";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[4] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[9];
NTI__9brg1xNurxcus33lU4IE1Dw_.size = sizeof(tySequence__9brg1xNurxcus33lU4IE1Dw*);
NTI__9brg1xNurxcus33lU4IE1Dw_.kind = 24;
NTI__9brg1xNurxcus33lU4IE1Dw_.base = (&NTI__Vz0pPzxitckVclPPWiz0xw_);
NTI__9brg1xNurxcus33lU4IE1Dw_.flags = 2;
NTI__9brg1xNurxcus33lU4IE1Dw_.marker = Marker_tySequence__9brg1xNurxcus33lU4IE1Dw;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].offset = offsetof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg, data);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].typ = (&NTI__9brg1xNurxcus33lU4IE1Dw_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].name = "data";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[5] = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[10];
NTI__emiAJ8okywrJw7ZHLzlXbQ_.size = sizeof(tyArray__emiAJ8okywrJw7ZHLzlXbQ);
NTI__emiAJ8okywrJw7ZHLzlXbQ_.kind = 16;
NTI__emiAJ8okywrJw7ZHLzlXbQ_.base = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
NTI__emiAJ8okywrJw7ZHLzlXbQ_.flags = 3;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].kind = 1;
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].offset = offsetof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg, a);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].typ = (&NTI__emiAJ8okywrJw7ZHLzlXbQ_);
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].name = "a";
TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].len = 6; TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].kind = 2; TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].sons = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[0];
NTI__PQrmFm4BXFkFSVOUl1ojSg_.node = &TM__ulJ2WYumkJwZ9b5Ewe7sCpg_0[0];
}

