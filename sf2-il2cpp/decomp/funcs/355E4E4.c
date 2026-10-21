// Nekki.SF2.GUI.Fight.ScreenModel$$get_CurrentStyleName @ RVA 0x355E4E4

System_String_o *
Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleName
          (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar3;
  
  if ((DAT_04568bba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568bba = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._stylePanel;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      pSVar2 = Nekki_SF2_GUI_Fight_StylePanel__get_CurrentStyleName(pNVar3,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return StringLiteral_1;
}

