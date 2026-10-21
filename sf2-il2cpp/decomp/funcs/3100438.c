// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$JBEGLHIMFPE @ RVA 0x3100438

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  NFFDIPBFJHP_o *pNVar5;
  EEGDOGKBLNG_o *__this_00;
  System_String_o *pSVar6;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar7;
  long lVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar9;
  int local_24;
  
  if ((DAT_045664bb & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664bb = 1;
    method = extraout_x1;
  }
  local_24 = 0;
  pNVar9 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if ((pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar9,false,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(pNVar9,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).KPGAAKKCKOA;
    if ((pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
    UnityEngine_GameObject__SetActive(pUVar3,(__this->fields).CGJKLEEEPPN,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).KPGAAKKCKOA;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar9,(__this->fields).CGJKLEEEPPN,(MethodInfo *)0x0)
    ;
  }
  pNVar4 = (__this->fields)._timeLabel;
  if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
  UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._prevSeasonLabel;
  if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
  UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
  if ((__this->fields).CGJKLEEEPPN == false) {
    pNVar4 = (__this->fields)._notParticipatedInSeasonLabel;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
  }
  else {
    pNVar4 = (__this->fields)._leagueDan;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
    if (bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (pNVar5 == (NFFDIPBFJHP_o *)0x0) goto LAB_032007ac;
      if ((pNVar5->fields).DFGECIPDPCD == (GLPEFEEGCPM_o *)0x0) {
LAB_03200680:
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_032007ac;
        local_24 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
        if ((pNVar5 == (NFFDIPBFJHP_o *)0x0) ||
           (pGVar7 = (pNVar5->fields).DFGECIPDPCD, pGVar7 == (GLPEFEEGCPM_o *)0x0))
        goto LAB_032007ac;
        lVar8 = (pGVar7->fields).LAEGCKIFDOC;
        if (lVar8 == 0) goto LAB_03200680;
        lVar8 = lVar8 / 10000000;
        auVar1 = SEXT816(lVar8) * ZEXT816(0xa3d70a3d70a3d70b);
        local_24 = (int)lVar8 + ((int)(auVar1._8_8_ >> 6) - (auVar1._12_4_ >> 0x1f)) * -100;
      }
      pNVar4 = (__this->fields)._leagueDan;
      pSVar6 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032007ac;
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar6,(pNVar4->klass->vtable)._75_set_text.method);
    }
  }
  LJLLAKHOFFF__JAEOMHIAHJB
            ((UnityEngine_UI_Button_o *)(__this->fields)._btnCurrentLeague,0,true,(MethodInfo *)0x0)
  ;
  LJLLAKHOFFF__JAEOMHIAHJB
            ((UnityEngine_UI_Button_o *)(__this->fields)._btnOldLeague,2,true,(MethodInfo *)0x0);
  pNVar9 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData(pNVar9,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).KPGAAKKCKOA;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if ((pNVar5 == (NFFDIPBFJHP_o *)0x0) ||
       (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0)) {
LAB_032007ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
              (pNVar9,(pNVar5->fields).DFGECIPDPCD,(MethodInfo *)0x0);
  }
  (__this->fields).LNIAPAKKPHL = 0.0;
  return;
}

