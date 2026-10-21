// Nekki.SF2.GUI.Fight.ScreenModel$$UpdateStyle @ RVA 0x355E7E0

void Nekki_SF2_GUI_Fight_ScreenModel__UpdateStyle
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar2;
  
  if ((DAT_04568ba3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba3 = 1;
  }
  pNVar2 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._stylePanel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      Nekki_SF2_GUI_Fight_StylePanel__UpdateStyle(pNVar2,CAMAHOAFAPK,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._stylePanel;
      if ((pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) &&
         (__this_00 = (__this->fields)._comboModel,
         __this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_ComboModel__AddCrazyStyle
                  (__this_00,(pNVar2->fields).OOADLOIGCHI,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH(__this,true,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

