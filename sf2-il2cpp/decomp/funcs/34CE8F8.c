// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$LJLEHMBBENH @ RVA 0x34CE8F8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__LJLEHMBBENH
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  BANPLPOPIGI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar1;
  
  if ((DAT_04568699 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10981);
    DAT_04568699 = 1;
  }
  pNVar1 = (__this->fields)._prevSeasonLeaderboard;
  if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (pNVar1->fields).HOKHHIBHFBM = false;
  if (DJFFMPLBCKC == (JCFJFJCKLKG_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10981,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (__this->fields).KGCCGHDBPFM;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    BANPLPOPIGI__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,(System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}

