// AJMOIOIBPGP$$.ctor @ RVA 0x32764E0

void AJMOIOIBPGP___ctor(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar2;
  System_Collections_Generic_List_OPNMPAJKDMI__o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567246 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
    DAT_04567246 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  pSVar2 = (System_Collections_Generic_List_OPNMPAJKDMI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
  ppSVar3 = &(__this->fields).FHPIEPONJFG;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_OPNMPAJKDMI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
  ppSVar3 = &(__this->fields).KMBLPHNJINH;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_OPNMPAJKDMI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
  ppSVar3 = &(__this->fields).KALGMNLLLNO;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

