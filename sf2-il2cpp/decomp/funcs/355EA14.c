// Nekki.SF2.GUI.Fight.ScreenModel$$set_Statistic @ RVA 0x355EA14

void Nekki_SF2_GUI_Fight_ScreenModel__set_Statistic
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,GOJLGHMMDBO_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  GOJLGHMMDBO_o **ppGVar2;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar3;
  
  if ((DAT_04568ba6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba6 = 1;
  }
  pNVar3 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._comboModel;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      ppGVar2 = &(pNVar3->fields).AMKECFKEGJH;
      *ppGVar2 = CJNHFNHJHPE;
      thunk_FUN_01c20e04(ppGVar2,CJNHFNHJHPE);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

