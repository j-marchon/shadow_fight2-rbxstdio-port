// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$UpdateRaidStatus @ RVA 0x3480D3C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateRaidStatus
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               int32_t IMCNFANMLKD,MethodInfo *method)

{
  CNIFAIKGHKO_o *__this_00;
  IFFFKKMMKFO_o *pIVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar2;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580d58 to 03680d5b has its CatchHandler @ 035812b0 */
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
                    /* try { // try from 03580d5c to 03680d6b has its CatchHandler @ 035812e0 */
    if (pIVar1 != (IFFFKKMMKFO_o *)0x0) {
      (pIVar1->fields).FPPPAMFABJP = IMCNFANMLKD;
      pNVar2 = (__this->fields).OMFKAKGPCCM;
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0)
      goto LAB_03580d80;
      (pNVar2->fields).PDFPPFKDPOD = true;
    }
                    /* try { // try from 03580d7c to 03680d83 has its CatchHandler @ 035812bc */
    return;
  }
LAB_03580d80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

