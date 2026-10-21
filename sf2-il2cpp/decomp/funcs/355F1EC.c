// Nekki.SF2.GUI.Fight.ScreenModel$$get_Statistic @ RVA 0x355F1EC

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ScreenModel__get_Statistic
          (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  GOJLGHMMDBO_o *pGVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar3;
  
  if ((DAT_04568bb6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb6 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar2 = (GOJLGHMMDBO_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._comboModel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar2 = (pNVar3->fields).AMKECFKEGJH;
  }
  return pGVar2;
}

