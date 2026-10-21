// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.<>c$$OJICBBKAFOH @ RVA 0x3477E70

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c__OJICBBKAFOH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard___c_o *__this,
               System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *list,
               MethodInfo *method)

{
  if ((DAT_04568336 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard___c_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                         );
    DAT_04568336 = 1;
  }
  if (list != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    return (list->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

