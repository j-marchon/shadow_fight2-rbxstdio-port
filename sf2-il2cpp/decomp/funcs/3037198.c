// Nekki.SF2.GUI.Fight.PauseScreen$$CIDHNFNLHOG @ RVA 0x3037198

void Nekki_SF2_GUI_Fight_PauseScreen__CIDHNFNLHOG
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  AFFHKININGD_o *__this_00;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  FCJBEKHDLAF_o *pFVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04565d54 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565d54 = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
  }
  pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if ((pFVar2 != (FCJBEKHDLAF_o *)0x0) &&
     (__this_00 = (pFVar2->fields).FBFPLEFCDOK, __this_00 != (AFFHKININGD_o *)0x0)) {
    value = AFFHKININGD__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).RulesLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,!bVar1,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar3 = (__this->fields).RulesLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

