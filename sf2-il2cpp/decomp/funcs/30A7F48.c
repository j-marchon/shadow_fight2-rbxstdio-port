// Nekki.SF2.GUI.Fight.ScreenFight$$CreateFightRule @ RVA 0x30A7F48

void Nekki_SF2_GUI_Fight_ScreenFight__CreateFightRule
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04566184 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566184 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).NLKCBHLEEDA,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
  (__this->fields).Type = 4;
  pNVar2 = (__this->fields).ruleDescription;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_x1;
  if (bVar1) {
    pNVar2 = (__this->fields).ruleDescription;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).ruleDescription;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(__this->fields).NLKCBHLEEDA,(MethodInfo *)0x0);
        method_01 = extraout_x1_00;
        goto LAB_031a8004;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a8004:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,5.833,method_01);
  return;
}

