// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$LLGCACMKNAN @ RVA 0x32A6D30

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__LLGCACMKNAN
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar2;
  NLIDHEAMLMC_o *pNVar3;
  
  if ((DAT_045673fb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673fb = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__LLGCACMKNAN
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._playerOne;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(pNVar2,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._playerTwo;
    if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(pNVar2,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                        ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._playerTwo;
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
      pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
      if ((pNVar3 != (NLIDHEAMLMC_o *)0x0) && (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0)) {
        Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                  (pNVar2,(pNVar3->fields).OFFPEKODFPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

