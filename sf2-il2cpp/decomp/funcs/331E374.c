// CMCJGLAABFO$$EOGEJOBHJMC @ RVA 0x331E374

int32_t CMCJGLAABFO__EOGEJOBHJMC(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *pSVar3;
  
  if ((DAT_0456782a & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_get_Item__
                );
    DAT_0456782a = 1;
  }
  pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)CJNHFNHJHPE,
                       Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_ContainsKey__
                      );
    if (!bVar1) {
      return 0;
    }
    pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<object,_Int32Enum>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)CJNHFNHJHPE,
                         Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_get_Item__
                        );
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

