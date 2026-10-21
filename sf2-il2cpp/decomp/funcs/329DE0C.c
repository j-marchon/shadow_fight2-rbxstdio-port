// ICOEHFKOMGO$$EEKGHNMBKND @ RVA 0x329DE0C

bool ICOEHFKOMGO__EEKGHNMBKND(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  OGGBALCBCLL_o *__this;
  System_String_o *message;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673af & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&StringLiteral_9391);
    DAT_045673af = 1;
    method = extraout_x1;
  }
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (!bVar1) {
      message = System_String__Concat(StringLiteral_9391,KGLJICLJHEL,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return false;
    }
    if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this = (OGGBALCBCLL_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                           ), __this != (OGGBALCBCLL_o *)0x0)) {
      bVar1 = OGGBALCBCLL__GKAJEILCKLG(__this,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

