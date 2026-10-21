// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$SetArrowBtnsTouchEnable @ RVA 0x307547C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SetArrowBtnsTouchEnable
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  EEGDOGKBLNG_o *pEVar2;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar3;
  
  if ((DAT_04565f9a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f9a = 1;
  }
  (__this->fields).AJCDHIBILLO = CJNHFNHJHPE;
  if (CJNHFNHJHPE) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_031755c4;
    bVar1 = ACHLOMELAJE__HPDCJKNJELO(__this_00,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._btnCurSeasonLeaderboard;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_031755c4;
    if (bVar1) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar3,false,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pEVar2 == (EEGDOGKBLNG_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0))
      goto LAB_031755c4;
      bVar1 = 0 < (pEVar2->fields)._DHPJJLCDAJD_k__BackingField;
      goto LAB_031755b0;
    }
    bVar1 = true;
  }
  else {
    pNVar3 = (__this->fields)._btnCurSeasonLeaderboard;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_031755c4;
    bVar1 = false;
  }
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)pNVar3,bVar1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._btnPrevSeasonLeaderboard;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    bVar1 = false;
LAB_031755b0:
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar3,bVar1,(MethodInfo *)0x0);
    return;
  }
LAB_031755c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

