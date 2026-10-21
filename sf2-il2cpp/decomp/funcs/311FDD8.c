// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$Update @ RVA 0x311FDD8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Update
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  BANPLPOPIGI_o *__this_00;
  PBHDPJBLDLG_o *__this_01;
  MethodInfo *method_00;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO(__this,method_00);
  }
  if ((__this->fields).ILIAKNEMPHH == 1) {
    __this_00 = (__this->fields).PlayersLeaderboardSource;
    if (__this_00 != (BANPLPOPIGI_o *)0x0) {
      BANPLPOPIGI__LLCONNGHGKD(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_01 = (__this->fields).ClansLeaderboardSource;
    if (__this_01 != (PBHDPJBLDLG_o *)0x0) {
      PBHDPJBLDLG__LLCONNGHGKD(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

