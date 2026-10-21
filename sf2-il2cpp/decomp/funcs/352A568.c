// Nekki.SF2.GUI.Pvp.PvPHintController$$RefreshHintsTrackingDevices @ RVA 0x352A568

void Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *extraout_x1_11;
  MethodInfo *extraout_x1_12;
  int32_t iVar1;
  NLIDHEAMLMC_o *pNVar2;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar3;
  
  if ((DAT_04568a1c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04568a1c = 1;
    method = extraout_x1;
  }
  pNVar3 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565e5c == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5c = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar2 != (NLIDHEAMLMC_o *)0x0) {
    if ((pNVar2->fields).ELHIGHABJBJ == 2) {
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_03;
      }
      if (DAT_04565e5c == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5c = '\x01';
        method = extraout_x1_04;
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_05;
      }
      pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
      if (pNVar2 == (NLIDHEAMLMC_o *)0x0) goto LAB_0362a75c;
      iVar1 = (pNVar2->fields).OFFPEKODFPE;
    }
    else {
      iVar1 = -1;
    }
    if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      if ((pNVar3->fields)._TrackingDeviceID != iVar1) {
        (pNVar3->fields)._TrackingDeviceID = iVar1;
        Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(pNVar3,method);
        method = extraout_x1_06;
      }
      pNVar3 = (__this->fields).LAPCPDGHEIH;
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_07;
      }
      if (DAT_04565e5b == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5b = '\x01';
        method = extraout_x1_08;
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_09;
      }
      pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
      if (pNVar2 != (NLIDHEAMLMC_o *)0x0) {
        if ((pNVar2->fields).ELHIGHABJBJ == 2) {
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method = extraout_x1_10;
          }
          if (DAT_04565e5b == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5b = '\x01';
            method = extraout_x1_11;
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method = extraout_x1_12;
          }
          pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
          if (pNVar2 == (NLIDHEAMLMC_o *)0x0) goto LAB_0362a75c;
          iVar1 = (pNVar2->fields).OFFPEKODFPE;
        }
        else {
          iVar1 = -1;
        }
        if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          if ((pNVar3->fields)._TrackingDeviceID == iVar1) {
            return;
          }
          (pNVar3->fields)._TrackingDeviceID = iVar1;
          Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(pNVar3,method);
          return;
        }
      }
    }
  }
LAB_0362a75c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

