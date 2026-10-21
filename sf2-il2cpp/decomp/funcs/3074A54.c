// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$OIAOIPFOCMD @ RVA 0x3074A54

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OIAOIPFOCMD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  ACHLOMELAJE_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar5;
  
  if ((DAT_04565fa3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fa3 = 1;
  }
  (__this->fields).MDHGKKKIJIM = (__this->fields).ONCOODOJIIH;
  thunk_FUN_01c20e04(&(__this->fields).MDHGKKKIJIM);
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
  if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03174cec;
  method_00 = (MethodInfo *)0x0;
  ACHLOMELAJE__NACCJJHFBFK(__this_00,false,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JFNBGKMIBPD(__this,true,method_00);
  pNVar4 = (__this->fields).MDFMCFCMEEB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).MDFMCFCMEEB;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    ACCIHBHMFPN = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                            (pNVar4,(MethodInfo *)0x0);
  }
  else {
    ACCIHBHMFPN = 1;
  }
  pNVar4 = (__this->fields).MDFMCFCMEEB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).MDFMCFCMEEB;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).MDFMCFCMEEB;
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03174cec;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).ONCOODOJIIH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).ONCOODOJIIH;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).ONCOODOJIIH;
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03174cec;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).ONCOODOJIIH;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__SetActiveBoard
              (pNVar4,ACCIHBHMFPN,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._prevSeasonLabel;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._titleLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._btnCurSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._btnCurSeasonLeaderboard;
        if (pNVar5 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_03174cec;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar5,(__this->fields).AJCDHIBILLO,
                   (MethodInfo *)0x0);
      }
      pNVar5 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar5 = (__this->fields)._btnPrevSeasonLeaderboard;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar5,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03174cec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

