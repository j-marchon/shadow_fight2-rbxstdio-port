// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$GKHAKLDEIJI @ RVA 0x32A640C

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__GKHAKLDEIJI
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  NLIDHEAMLMC_o *pNVar3;
  
  if ((DAT_045673f6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673f6 = 1;
  }
  bVar2 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (__this == (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) goto LAB_033a6510;
  }
  else if ((__this->fields).HKKEEPMCBFO == 1) {
    OPHMGAKOJLP = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__GKHAKLDEIJI
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
             (MethodInfo *)0x0);
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
  if (pNVar3 != (NLIDHEAMLMC_o *)0x0) {
    lVar1 = 0x88;
    if (OPHMGAKOJLP != (pNVar3->fields).OFFPEKODFPE) {
      lVar1 = 0x90;
    }
    __this_00 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
    if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__OnControlUp(__this_00,AAJGEHHPMGH,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033a6510:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

