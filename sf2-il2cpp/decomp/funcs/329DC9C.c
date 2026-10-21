// ICOEHFKOMGO$$HLFDFELPNHP @ RVA 0x329DC9C

System_Type_o * ICOEHFKOMGO__HLFDFELPNHP(System_String_o *CELOLGNMKCG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *message;
  MethodInfo *extraout_x1;
  Il2CppClass *left;
  
  if ((DAT_045673ae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_9394);
    DAT_045673ae = 1;
    method = extraout_x1;
  }
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)CELOLGNMKCG,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (bVar1) {
      if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar2,(Il2CppObject *)CELOLGNMKCG,
                              Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) goto LAB_0339de08;
      left = pIVar3[1].klass;
    }
    else {
      left = (Il2CppClass *)0x0;
    }
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Type__op_Equality((System_Type_o *)left,(System_Type_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      message = System_String__Concat(StringLiteral_9394,CELOLGNMKCG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    return (System_Type_o *)left;
  }
LAB_0339de08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

