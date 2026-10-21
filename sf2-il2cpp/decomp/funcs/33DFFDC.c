// Nekki.SF2.GUI.Pvp.PhaseWeapon$$ResetToDefaultWeapon @ RVA 0x33DFFDC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__ResetToDefaultWeapon
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  BNAIBAODKAK_o *__this_00;
  int32_t DPJIDNBJIBG;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  bool_conflict bVar3;
  
                    /* try { // try from 034dffe4 to 035dffeb has its CatchHandler @ 034e0214 */
  __this_00 = (__this->fields).super.KPLEAGPMKFD;
  if (__this_00 == (BNAIBAODKAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034dfff8 to 035e0017 has its CatchHandler @ 034e02e8 */
  if (!bVar2) {
    return;
  }
  if ((__this->fields).LHNJHBEEBMN == false) {
    iVar1 = (__this->fields).CCOCEGOEFNL;
    if (iVar1 == 0) {
      return;
    }
    DPJIDNBJIBG = 0;
    bVar3 = true;
                    /* try { // try from 034e0020 to 035e0037 has its CatchHandler @ 034e02e4 */
    (__this->fields).JOGFBLKFHFG = iVar1;
  }
  else {
    DPJIDNBJIBG = (__this->fields).JOGFBLKFHFG;
    bVar3 = false;
  }
  Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB(__this,DPJIDNBJIBG,0.3,in_x2);
  (__this->fields).LHNJHBEEBMN = bVar3;
                    /* try { // try from 034e003c to 035e0047 has its CatchHandler @ 034e0208 */
  Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK(__this,method_00);
  return;
}

