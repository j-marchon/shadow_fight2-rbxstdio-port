// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SelectCurrentItem @ RVA 0x312D9B4

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SelectCurrentItem
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,bool IFNFDFALLMG,
               MethodInfo *method)

{
  long lVar1;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this_00;
  
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  __this_00 = *(Nekki_SF2_GUI_Pvp_PlayerSelector_o **)((long)&__this->klass + lVar1);
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem(__this_00,IFNFDFALLMG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

