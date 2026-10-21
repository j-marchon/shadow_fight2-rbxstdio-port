// Nekki.SF2.GUI.Pvp.PhaseBox$$get_Avatar @ RVA 0x32D7DA4

Nekki_SF2_GUI_ResolutionImageAvatar_o *
Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar1;
  Nekki_SF2_GUI_Fight_DisplayModel_o *pNVar2;
  
  pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method);
  if ((pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) &&
     (pNVar2 = (pNVar1->fields)._avatar, pNVar2 != (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0)) {
    return (pNVar2->fields).avatar;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

