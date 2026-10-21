// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GetPlayersCount @ RVA 0x3480DE4

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersCount
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  CNIFAIKGHKO_o *__this_00;
  
                    /* try { // try from 03580de8 to 03680df3 has its CatchHandler @ 035812d8 */
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580df4 to 03680dff has its CatchHandler @ 035812c0 */
    iVar1 = CNIFAIKGHKO__LDJLMEFOMLG(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

