// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$KLOCOMEOKIO @ RVA 0x34CE85C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__KLOCOMEOKIO
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = DJFFMPLBCKC;
  auVar2._0_8_ = __this;
  if ((DAT_04568697 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    auVar2 = FUN_01bab630(&StringLiteral_10982);
    DAT_04568697 = 1;
  }
  pNVar1 = (__this->fields)._prevSeasonLeaderboard;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
    (pNVar1->fields).HOKHHIBHFBM = false;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10982,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

