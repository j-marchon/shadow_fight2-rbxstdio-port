// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$JJADPCJIMOJ @ RVA 0x3075188

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JJADPCJIMOJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  ACHLOMELAJE_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  EEGDOGKBLNG_o *pEVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar6;
  
  if ((DAT_04565fa4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fa4 = 1;
  }
  (__this->fields).MDHGKKKIJIM = (__this->fields).MDFMCFCMEEB;
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
  if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03175474;
  method_00 = (MethodInfo *)0x0;
  ACHLOMELAJE__NACCJJHFBFK(__this_00,true,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JFNBGKMIBPD(__this,false,method_00);
  pNVar5 = (__this->fields).ONCOODOJIIH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    ACCIHBHMFPN = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                            (pNVar5,(MethodInfo *)0x0);
  }
  else {
    ACCIHBHMFPN = 1;
  }
  pNVar5 = (__this->fields).MDFMCFCMEEB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if ((pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03175474;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar5,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__SetActiveBoard
              (pNVar5,ACCIHBHMFPN,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).ONCOODOJIIH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar5,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if ((pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03175474;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._prevSeasonLabel;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._titleLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._btnCurSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar6 = (__this->fields)._btnCurSeasonLeaderboard;
        if (pNVar6 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_03175474;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar6,false,(MethodInfo *)0x0);
      }
      pNVar6 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar6 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((__this->fields).AJCDHIBILLO == false) {
        bVar1 = false;
      }
      else {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar4 == (EEGDOGKBLNG_o *)0x0) goto LAB_03175474;
        bVar1 = 0 < (pEVar4->fields)._DHPJJLCDAJD_k__BackingField;
      }
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar6,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03175474:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

