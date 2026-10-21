// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Scroll @ RVA 0x33DF864

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  bool bVar1;
  BNAIBAODKAK_o *__this_00;
  
                    /* try { // try from 034df864 to 035df86b has its CatchHandler @ 034e01a8 */
  __this_00 = (__this->fields).super.KPLEAGPMKFD;
  if (__this_00 != (BNAIBAODKAK_o *)0x0) {
    bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 034df888 to 035df88f has its CatchHandler @ 034e016c */
      Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB
                (__this,(__this->fields).CCOCEGOEFNL + DPJIDNBJIBG,0.3,method);
                    /* try { // try from 034df8a0 to 035df8a7 has its CatchHandler @ 034e0150 */
      (__this->fields).LHNJHBEEBMN = false;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

