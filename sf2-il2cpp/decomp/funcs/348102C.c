// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$InsertPlayer @ RVA 0x348102C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,NODLJPNGNBG_o *OGFALADNBHC,
               GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)HEHMPFLAEGE;
                    /* try { // try from 03581040 to 0368104b has its CatchHandler @ 03581220 */
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
            (__this,HEHMPFLAEGE,(MethodInfo *)HEHMPFLAEGE);
                    /* try { // try from 0358104c to 0368106b has its CatchHandler @ 0358124c */
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__NCMPNFLGPPE(__this,OGFALADNBHC,method_00);
  if (OGFALADNBHC != (NODLJPNGNBG_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateRaidStatus
              (__this,HEHMPFLAEGE,(OGFALADNBHC->fields).PFJPLCAIGJH,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

