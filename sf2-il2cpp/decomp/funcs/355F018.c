// Nekki.SF2.GUI.Fight.ScreenModel$$UpdateCombo @ RVA 0x355F018

void Nekki_SF2_GUI_Fight_ScreenModel__UpdateCombo
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,int32_t CJNHFNHJHPE,int32_t LHLELGFDIAP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568bb2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb2 = 1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__UpdateCombo(pNVar2,CJNHFNHJHPE,LHLELGFDIAP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

