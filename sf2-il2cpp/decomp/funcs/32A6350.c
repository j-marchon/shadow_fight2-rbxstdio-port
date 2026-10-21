// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$JMOMGHNMHGM @ RVA 0x32A6350

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__JMOMGHNMHGM
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar1;
  
  Nekki_SF2_GUI_Pvp_SelectModule__JMOMGHNMHGM
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._playerOne;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__Free(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._playerTwo;
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__Free(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

