// Nekki.SF2.GUI.Fight.ScreenModel$$IncreaseStyleByValue @ RVA 0x355F304

void Nekki_SF2_GUI_Fight_ScreenModel__IncreaseStyleByValue
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar2;
  
  if ((DAT_04568bb8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb8 = 1;
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
      Nekki_SF2_GUI_Fight_StylePanel__IncreaseStyleStripByValue
                (pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
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

