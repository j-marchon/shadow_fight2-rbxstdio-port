// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$SetSecondPlayerAvailable @ RVA 0x32A67D4

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,bool EHJMCCFLOLK,
               MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_00;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar4;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this_01;
  HintButton_o *pHVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  undefined8 *puVar6;
  NLIDHEAMLMC_o *pNVar7;
  
  if ((DAT_045673f9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_17771);
    FUN_01bab630(&StringLiteral_10597);
    DAT_045673f9 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__SetSecondPlayerAvailable
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,EHJMCCFLOLK,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) ||
       (__this_00 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_00 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PvPHintController__set_IsSinglePlayer
              (__this_00,(bool)(~EHJMCCFLOLK & 1),(MethodInfo *)0x0);
    if ((~EHJMCCFLOLK & 1U) == 0) {
      pNVar3 = (__this->fields)._playerTwo;
      if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
         (pNVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(pNVar3,(MethodInfo *)0x0),
         pNVar4 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)) goto LAB_033a6b68;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (__this_01 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
         __this_01 == (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) goto LAB_033a6b68;
      puVar6 = &StringLiteral_10597;
    }
    else {
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
      pNVar3 = (__this->fields)._playerTwo;
      if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
         (pNVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(pNVar3,(MethodInfo *)0x0),
         pNVar4 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)) goto LAB_033a6b68;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                (0x3f000000,0x3f000000,0x3f000000,0x3f800000,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
      pNVar3 = (__this->fields)._playerTwo;
      if (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a6b68;
      Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar3,2,(MethodInfo *)0x0);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (__this_01 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
         __this_01 == (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) goto LAB_033a6b68;
      puVar6 = &StringLiteral_17771;
    }
    Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader(__this_01,(System_String_o *)*puVar6,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerOne;
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e5c == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
      DAT_04565e5c = '\x01';
    }
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar7 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
    if ((pNVar7 == (NLIDHEAMLMC_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0))
    goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
              (pNVar3,(pNVar7->fields).OFFPEKODFPE,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
       (pHVar5 = (pNVar3->fields)._TagHint, pHVar5 == (HintButton_o *)0x0)) goto LAB_033a6b68;
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pHVar5,EHJMCCFLOLK,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
       (pHVar5 = (pNVar3->fields)._TagHint, pHVar5 == (HintButton_o *)0x0)) goto LAB_033a6b68;
    bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pHVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields)._playerTwo;
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e5b == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5b = '\x01';
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar7 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
      if ((pNVar7 == (NLIDHEAMLMC_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0))
      goto LAB_033a6b68;
      Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                (pNVar3,(pNVar7->fields).OFFPEKODFPE,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields)._playerOne;
    if (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar3,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar3,false,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._playerTwoChooseOrSelect;
  if ((__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,(bool)(~EHJMCCFLOLK & 1),(MethodInfo *)0x0);
    return;
  }
LAB_033a6b68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

