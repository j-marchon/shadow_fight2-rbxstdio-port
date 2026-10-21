// Nekki.SF2.GUI.Pvp.PhaseBox$$get_PlayerWeapon @ RVA 0x32D78B8

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_PhaseBox__get_PlayerWeapon
          (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this_00;
  HOOAAGABMBL_o *pHVar1;
  
  __this_00 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    pHVar1 = Nekki_SF2_GUI_Pvp_PhaseWeapon__get_ResultWeapon(__this_00,(MethodInfo *)0x0);
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

