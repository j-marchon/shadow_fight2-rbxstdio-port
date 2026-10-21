// GKOFFCMIOFC$$NLFGHCGIJIE @ RVA 0x31CC798

Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o * GKOFFCMIOFC__NLFGHCGIJIE(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *pNVar2;
  
  if ((DAT_04566c79 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ButtonHintUI>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15483);
    FUN_01bab630(&StringLiteral_3615);
    DAT_04566c79 = 1;
  }
  if ((GKOFFCMIOFC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_15483,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_Object_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)0x0,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,StringLiteral_3615,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<ButtonHintUI>__);
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

