// MPFCDEPCALP$$KPPLCBBJIOA @ RVA 0x303640C

void MPFCDEPCALP__KPPLCBBJIOA(MPFCDEPCALP_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar1;
  
                    /* try { // try from 0313641c to 03236427 has its CatchHandler @ 03136648 */
  if ((DAT_04565d44 & 1) == 0) {
                    /* try { // try from 0313642c to 03236433 has its CatchHandler @ 03136644 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_MPFCDEPCALP_KPPLCBBJIOA__);
    DAT_04565d44 = 1;
  }
                    /* try { // try from 0313644c to 03236457 has its CatchHandler @ 03136628 */
  __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).OGOAKBNLIDJ;
    if (pNVar1 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
                    /* try { // try from 03136478 to 0323647f has its CatchHandler @ 03136624 */
      AKJJAPEHKCG__HJDDBKPCAFJ
                ((UnityEngine_UI_Selectable_o *)(pNVar1->fields)._goToRaidBtn,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).OGOAKBNLIDJ;
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0313648c to 032364ab has its CatchHandler @ 03136634 */
      System_Action___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
        Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnClick(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031364cc to 032364d3 has its CatchHandler @ 031366c0 */
  FUN_01bab8c8();
}

