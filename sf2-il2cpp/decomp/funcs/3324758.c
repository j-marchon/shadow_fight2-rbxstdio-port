// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$ScrollToIndex @ RVA 0x3324758

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__ScrollToIndex
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,int32_t DPJIDNBJIBG,
               float LFJGFLNMBMC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this_00,DPJIDNBJIBG,LFJGFLNMBMC,8,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

