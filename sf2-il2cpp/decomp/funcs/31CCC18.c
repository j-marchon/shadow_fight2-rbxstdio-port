// GKOFFCMIOFC$$EJKKHEHGNPN @ RVA 0x31CCC18

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
GKOFFCMIOFC__EJKKHEHGNPN(int32_t MGKGAOFOPLA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar2;
  UnityEngine_Object_o *__this;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04566c7c & 1) == 0) {
    FUN_01bab630(&BECNIAAJCFO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintGroup>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15484);
    FUN_01bab630(&StringLiteral_7108);
    FUN_01bab630(&StringLiteral_7107);
    DAT_04566c7c = 1;
  }
  local_48.klass = (System_Enum_c *)BECNIAAJCFO_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = MGKGAOFOPLA;
  str1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  System_String__Concat(StringLiteral_7108,str1,(MethodInfo *)0x0);
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
    UnityEngine_Debug__LogError(StringLiteral_15484,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
  }
  else {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)0x0,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Object__set_name(__this,StringLiteral_7107,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<HintGroup>__);
  }
  return pNVar2;
}

