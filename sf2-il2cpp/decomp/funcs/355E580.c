// Nekki.SF2.GUI.Fight.ScreenModel$$get_CurrentStyleValue @ RVA 0x355E580

float Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleValue
                (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar2;
  float fVar3;
  
  if ((DAT_04568bb4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb4 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._stylePanel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      fVar3 = Nekki_SF2_GUI_Fight_StylePanel__GetStyleValue(pNVar2,(MethodInfo *)0x0);
      return fVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}

