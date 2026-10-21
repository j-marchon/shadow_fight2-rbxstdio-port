// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$InsertPlayer @ RVA 0x30E212C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,NODLJPNGNBG_o *OGFALADNBHC,
               GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar3;
  
  pNVar2 = (__this->fields)._raidPlayersRoll;
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
              (pNVar2,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._raidPlayersRoll;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
      pNVar3 = (__this->fields)._raidInfoSprite;
      iVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersInBattleCount
                        (pNVar2,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
        (pNVar3->fields).MOFFPNNIMBJ = iVar1;
        pNVar2 = (__this->fields)._raidPlayersRoll;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
          pNVar3 = (__this->fields)._raidInfoSprite;
          iVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersCount
                            (pNVar2,(MethodInfo *)0x0);
          if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
            (pNVar3->fields).CMEBGPLHEGM = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

