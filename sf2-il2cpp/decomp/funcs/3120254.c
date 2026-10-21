// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$StopAddingItems @ RVA 0x3120254

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  BANPLPOPIGI_o *__this_00;
  PBHDPJBLDLG_o *__this_01;
  
  __this_00 = (__this->fields).PlayersLeaderboardSource;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    BANPLPOPIGI__JOIFLMJEEJK(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).ClansLeaderboardSource;
    if (__this_01 != (PBHDPJBLDLG_o *)0x0) {
      PBHDPJBLDLG__DNNPDIPCCEN(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

