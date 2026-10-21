// IJCLCKIJJDH$$.ctor @ RVA 0x3530C20

void IJCLCKIJJDH___ctor(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *__this_00;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o **ppSVar1;
  UniRx_CompositeDisposable_o *pUVar2;
  MethodInfo *extraout_x1;
  UniRx_CompositeDisposable_o **ppUVar3;
  UniRx_CompositeDisposable_o **ppUVar4;
  
  if ((DAT_04568a5a & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
    FUN_01bab630(&Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>__ctor__);
    DAT_04568a5a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>__ctor__);
  ppSVar1 = &(__this->fields).MFENGHDGHGI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pUVar2 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields).HBJPBPBIOOB;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).MEMOAFOBLCM;
  *ppUVar4 = pUVar2;
  thunk_FUN_01c20e04(ppUVar4,pUVar2);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>__ctor__);
  UniRx_DisposableExtensions__AddTo<object>
            ((Il2CppObject *)*ppUVar4,
             (System_Collections_Generic_ICollection_IDisposable__o *)*ppUVar3,
             Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
  return;
}

