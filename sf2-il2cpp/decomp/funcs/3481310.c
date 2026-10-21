// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ELGDDCNOLJL @ RVA 0x3481310

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ELGDDCNOLJL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  int32_t OGPGLGPMEPD;
  
                    /* catch() { ... } // from try @ 03580c00 with catch @ 03581310 */
                    /* catch() { ... } // from try @ 03580d2c with catch @ 03581314 */
                    /* catch() { ... } // from try @ 03580c94 with catch @ 03581318 */
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ArrangeBySiblingIndex(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
                    /* try { // try from 03581330 to 03681333 has its CatchHandler @ 03581340 */
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      value = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 03581330 with catch @ 03581340 */
      if (value) {
        if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_03581398;
        OGPGLGPMEPD = (__this->fields).NBNHIBIPJMG;
      }
      else {
        if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_03581398;
        OGPGLGPMEPD = 0;
      }
      Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar1,OGPGLGPMEPD,0.0,8,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
                    /* try { // try from 03581380 to 036813a7 has its CatchHandler @ 035813bc */
      if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pNVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03581398:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

