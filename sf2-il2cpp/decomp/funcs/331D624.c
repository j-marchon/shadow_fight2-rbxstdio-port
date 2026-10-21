// CMCJGLAABFO$$ENNCOIHDFKP @ RVA 0x331D624

int32_t CMCJGLAABFO__ENNCOIHDFKP
                  (int32_t GJMEFGJIFJD,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *pSVar3;
  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *__this;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04567827 & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_ContainsKey__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_get_Item__);
    FUN_01bab630(&CMCJGLAABFO_NNLDBLLCHFL_TypeInfo);
    FUN_01bab630(&StringLiteral_5575);
    DAT_04567827 = 1;
  }
  if (GJMEFGJIFJD == 1) {
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      __this = CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
      if (__this != (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)0x0)
      {
        bVar1 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (Il2CppObject *)CJNHFNHJHPE,
                           Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_ContainsKey__
                          );
        if (!bVar1) {
          return 0;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)
                 CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
          puVar5 = &
                   Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_get_Item__
          ;
          goto LAB_0341d754;
        }
      }
      goto LAB_0341d7f4;
    }
  }
  else {
    if (GJMEFGJIFJD != 0) {
      local_38.klass = (System_Enum_c *)CMCJGLAABFO_NNLDBLLCHFL_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      local_28 = GJMEFGJIFJD;
      pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_5575,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return -1;
    }
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)CJNHFNHJHPE,
                           Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_ContainsKey__
                          );
        if (!bVar1) {
          return 0;
        }
        pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
          puVar5 = &Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_get_Item__;
LAB_0341d754:
          iVar2 = System_Collections_Generic_Dictionary<object,_Int32Enum>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                             (Il2CppObject *)CJNHFNHJHPE,(MethodInfo_232FF88 *)*puVar5);
          return iVar2;
        }
      }
LAB_0341d7f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return 0;
}

