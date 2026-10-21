// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$Reset @ RVA 0x312DA40

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__Reset
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *pNVar1;
  
  pNVar1 = (__this->fields)._playerOne;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem(pNVar1,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._playerTwo;
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem(pNVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

