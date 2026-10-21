// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$KGNBJLLJHOC @ RVA 0x35545FC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar1;
  
  if ((DAT_04568b5a & 1) == 0) {
                    /* try { // try from 03654618 to 0375461b has its CatchHandler @ 03654620 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036545b0 with catch @ 0365461c
                       try { // try from 0365461c to 0375463b has its CatchHandler @ 03654500 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03654618 with catch @ 03654620
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03654574 with catch @ 03654624
                        */
    DAT_04568b5a = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
                    /* try { // try from 0365467c to 0375482f has its CatchHandler @ 0365467c
                       catch() { ... } // from try @ 0365467c with catch @ 0365467c
                       catch() { ... } // from try @ 036548a4 with catch @ 0365467c
                       catch() { ... } // from try @ 03654914 with catch @ 0365467c
                       catch() { ... } // from try @ 03654950 with catch @ 0365467c
                       catch() { ... } // from try @ 03654980 with catch @ 0365467c
                       catch() { ... } // from try @ 036549bc with catch @ 0365467c
                       catch() { ... } // from try @ 036549dc with catch @ 0365467c
                       catch() { ... } // from try @ 03654a0c with catch @ 0365467c */
    return;
  }
                    /* try { // try from 0365463c to 0375463f has its CatchHandler @ 0365464c */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 0365463c with catch @ 0365464c */
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pNVar1 = (__this->fields).DICNIMJBGML;
                    /* try { // try from 03654658 to 03754663 has its CatchHandler @ 03654678 */
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
     (__this_00 != (PEEIMHCMDND_o *)0x0)) {
                    /* try { // try from 03654664 to 0375466f has its CatchHandler @ 03654500 */
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(pNVar1->fields).AACMAAOJMFK,(MethodInfo *)0x0);
                    /* try { // try from 03654670 to 03754677 has its CatchHandler @ 03654678 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03654658 with catch @ 03654678
                       catch(type#2 @ 00000000) { ... } // from try @ 03654670 with catch @ 03654678
                        */
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

