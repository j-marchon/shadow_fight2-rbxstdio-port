// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$SetActiveBoard @ RVA 0x31211BC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__SetActiveBoard
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  
  iVar1 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                    (__this,(MethodInfo *)(ulong)(uint)ACCIHBHMFPN);
  if (iVar1 == ACCIHBHMFPN) {
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh(__this,method_00);
    return;
  }
  if (ACCIHBHMFPN == 2) {
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__JEJPCCIPOEI(__this,false,method);
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__EKAMMIMDIPJ(__this,false,method);
  return;
}

