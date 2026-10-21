// LJNJDFEAIOH$$DNGIFOCGGCN @ RVA 0x303A584

void LJNJDFEAIOH__DNGIFOCGGCN
               (LJNJDFEAIOH_o *__this,int32_t OGPGLGPMEPD,float LFJGFLNMBMC,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar1;
  
  pNVar1 = (__this->fields).PDEAGAFHDFI;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) &&
     (__this_00 = (pNVar1->fields)._raidPlayersRoll,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ScrollToItem
              (__this_00,OGPGLGPMEPD,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

