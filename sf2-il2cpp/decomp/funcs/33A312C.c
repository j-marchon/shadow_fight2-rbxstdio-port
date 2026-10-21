// HCIAFAIBMAL$$BJMKPONFOPK @ RVA 0x33A312C

void HCIAFAIBMAL__BJMKPONFOPK(System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__double__o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  double value;
  
  if ((DAT_04567cca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_set_Item__);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cca = 1;
    method = extraout_x1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo,method);
  }
  pSVar2 = HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__double__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_double>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (Il2CppObject *)KKJPPDNKGAI,
                       Method_System_Collections_Generic_Dictionary<string,_double>_ContainsKey__);
    method_00 = (MethodInfo *)(ulong)bVar1;
    if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
    }
    pSVar2 = HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
    value = HCIAFAIBMAL__GHPDCPMLHFJ(method_00);
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__double__o *)0x0) {
      if (bVar1) {
        System_Collections_Generic_Dictionary<object,_double>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                   (Il2CppObject *)KKJPPDNKGAI,value,
                   Method_System_Collections_Generic_Dictionary<string,_double>_set_Item__);
        return;
      }
      System_Collections_Generic_Dictionary<object,_double>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)KKJPPDNKGAI,value,
                 Method_System_Collections_Generic_Dictionary<string,_double>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

