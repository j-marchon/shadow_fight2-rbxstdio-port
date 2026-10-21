// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$IsSelected @ RVA 0x307575C

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,
               BANPLPOPIGI_o *KIFIMBGOPFG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar3;
  
  if ((DAT_04565f9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f9d = 1;
  }
  pNVar3 = (__this->fields).MDHGKKKIJIM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pNVar3 = (__this->fields).MDHGKKKIJIM;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                      (pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      return false;
    }
    pNVar3 = (__this->fields).MDHGKKKIJIM;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
      return (pNVar3->fields).PlayersLeaderboardSource == KIFIMBGOPFG;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

