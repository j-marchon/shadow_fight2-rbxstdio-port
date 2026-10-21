// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$JJMDGMDDDAA @ RVA 0x32C82E0

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__JJMDGMDDDAA
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_00;
  
                    /* try { // try from 033c82ec to 034c8327 has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c81b0 with catch @ 033c82f4 */
                    /* catch() { ... } // from try @ 033c81ac with catch @ 033c82f8 */
  if ((DAT_04567500 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c7d5c with catch @ 033c82fc */
                    /* catch() { ... } // from try @ 033c7e90 with catch @ 033c8300 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567500 = 1;
  }
  __this_00 = JJPNLEPEAFM__OHIKPLPOJBK((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033c8328 to 034c832b has its CatchHandler @ 033c8574 */
                    /* try { // try from 033c832c to 034c8583 has its CatchHandler @ 033c79c8 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SwitchToPrevSeasonLeaderboard
                (__this_00,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

