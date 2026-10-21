// LDHBHPILNMA$$BKCFPHNEONL @ RVA 0x31A03E4

void LDHBHPILNMA__BKCFPHNEONL(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *KHIINLPNKPC;
  System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN;
  System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO;
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  LDHBHPILNMA_c *method_00;
  LDHBHPILNMA_StaticFields *pLVar3;
  System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *JAGLGJNPPHA;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566adb & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryAdd__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_04566adb = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar3 = LDHBHPILNMA_TypeInfo->static_fields;
  JAGLGJNPPHA = pLVar3->ICLBNEKDHIO;
  KHIINLPNKPC = pLVar3->KDDGJMCPJNA;
  LKHHJJJFHGN = pLVar3->GLNEIGKMPDC;
  pSVar2 = pLVar3->HDGPEJOPPOB;
  AIEIIIHLDPO = pLVar3->MHKDMKDBMBE;
  if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CGALNIOABHK__HNIHOIAMDPC(pSVar2,KHIINLPNKPC,JAGLGJNPPHA,LKHHJJJFHGN,AIEIIIHLDPO,(MethodInfo *)0x0)
  ;
  pSVar2 = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
      value = local_60.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
        method_00 = LDHBHPILNMA_TypeInfo;
        if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (LDHBHPILNMA_c *)thunk_FUN_01ba7564();
        }
        LDHBHPILNMA__PEEPFDGHBCB((MethodInfo *)method_00);
        return;
      }
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (value == (Il2CppObject *)0x0) break;
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               LDHBHPILNMA_TypeInfo->static_fields->EJNINLMPAAO;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_object>__TryAdd
                (__this,value[6].monitor,value,
                 Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryAdd__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

