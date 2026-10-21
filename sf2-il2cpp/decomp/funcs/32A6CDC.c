// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$COFBGCFPCPM @ RVA 0x32A6CDC

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__COFBGCFPCPM
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t FGBMMFIFMGM,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  
  __this_00 = (__this->fields)._playerTwo;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this_00,2,(MethodInfo *)0x0);
    bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                      ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    if (!bVar1) {
      FGBMMFIFMGM = (int32_t)(__this->fields).super.FODJGPABKLP;
    }
    Nekki_SF2_GUI_Pvp_SelectModule__COFBGCFPCPM
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,FGBMMFIFMGM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

