// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$NCMPNFLGPPE @ RVA 0x3480D90

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__NCMPNFLGPPE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,NODLJPNGNBG_o *EMMICKBACOI,
               MethodInfo *method)

{
  CNIFAIKGHKO_o *__this_00;
  IFFFKKMMKFO_o *pIVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar2;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580da4 to 03680dab has its CatchHandler @ 035812dc */
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this_00,EMMICKBACOI,(MethodInfo *)0x0);
                    /* try { // try from 03580db0 to 03680db7 has its CatchHandler @ 035812cc */
    if (pIVar1 == (IFFFKKMMKFO_o *)0x0) {
      return;
    }
    if (EMMICKBACOI != (NODLJPNGNBG_o *)0x0) {
      (pIVar1->fields).JOAHABGBLEF = (float)(EMMICKBACOI->fields).LINGIJDCLLC;
      pNVar2 = (__this->fields).OMFKAKGPCCM;
                    /* try { // try from 03580dc8 to 03680dcf has its CatchHandler @ 035812c4 */
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03580dd0 to 03680de3 has its CatchHandler @ 035812b4 */
        (pNVar2->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

