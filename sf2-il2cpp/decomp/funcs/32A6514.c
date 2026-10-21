// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$PCJCDPOMJJN @ RVA 0x32A6514

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__PCJCDPOMJJN
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t HEHMPFLAEGE,
               bool IFNFDFALLMG,MethodInfo *method)

{
  bool bVar1;
  HintButton_o *pHVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar3;
  NLIDHEAMLMC_o *pNVar4;
  
  if ((DAT_045673f7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673f7 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__PCJCDPOMJJN
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,IFNFDFALLMG,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._playerOne;
  if ((pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) &&
     (pHVar2 = (pNVar3->fields)._TagHint, pHVar2 != (HintButton_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pHVar2,(__this->fields).super.FPFGDOBNLCP == false,
               (MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      pHVar2 = (pNVar3->fields)._TagHint;
      bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                        ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
      if ((bVar1) || ((__this->fields).super.FPFGDOBNLCP == false)) {
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                          ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = (__this->fields).super.FODJGPABKLP == false;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
      if (pHVar2 != (HintButton_o *)0x0) {
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pHVar2,bVar1,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._playerTwo;
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                          ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        if ((bVar1) || ((__this->fields).super.FPFGDOBNLCP == false)) {
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
          pNVar4 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
        }
        else {
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
          pNVar4 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
        }
        if ((pNVar4 != (NLIDHEAMLMC_o *)0x0) && (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0)) {
          Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                    (pNVar3,(pNVar4->fields).OFFPEKODFPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

