// LDHBHPILNMA$$CCNAGCKPEHD @ RVA 0x31A1684

FCFGGKLDBFJ_o * LDHBHPILNMA__CCNAGCKPEHD(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  FCFGGKLDBFJ_o *pFVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ae0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    DAT_04566ae0 = 1;
    method = extraout_x1;
  }
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           LDHBHPILNMA_TypeInfo->static_fields->ICLBNEKDHIO;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (FCFGGKLDBFJ_o *)0x0;
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             LDHBHPILNMA_TypeInfo->static_fields->ICLBNEKDHIO;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pFVar3 = (FCFGGKLDBFJ_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__
                         );
      return pFVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

