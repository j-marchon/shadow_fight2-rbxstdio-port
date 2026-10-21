// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.LPFAKMADDHI$$GHJIFKFHMOM @ RVA 0x3477F34

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI__GHJIFKFHMOM
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI_o *__this,
                  KGBIBHEFBHA_o *p1,KGBIBHEFBHA_o *p2,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (p1 != (KGBIBHEFBHA_o *)0x0) {
    lVar2 = (__this->fields).currentPlayerId;
    if ((p1->fields).ANAJGHJEEOC == lVar2) {
      uVar1 = 0xffffffff;
    }
    else {
      if (p2 == (KGBIBHEFBHA_o *)0x0) goto LAB_03577f6c;
      uVar1 = (uint)((p2->fields).ANAJGHJEEOC == lVar2);
    }
    return uVar1;
  }
LAB_03577f6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

