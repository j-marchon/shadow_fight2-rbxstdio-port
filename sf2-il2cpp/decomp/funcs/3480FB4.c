// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$UpdateInsertedPlayer @ RVA 0x3480FB4

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateInsertedPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *pCVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar3;
  
                    /* try { // try from 03580fb8 to 03680fc7 has its CatchHandler @ 03581248 */
  pCVar2 = (__this->fields).JECONAHEKIN;
  if (pCVar2 != (CNIFAIKGHKO_o *)0x0) {
    bVar1 = CNIFAIKGHKO__NFJIIGCLFOF(pCVar2,HEHMPFLAEGE,(MethodInfo *)0x0);
                    /* try { // try from 03580fd4 to 03680fdb has its CatchHandler @ 03581240 */
    if (!bVar1) {
                    /* try { // try from 03581008 to 0368100f has its CatchHandler @ 03581230 */
      return;
    }
    pCVar2 = (__this->fields).JECONAHEKIN;
    if (pCVar2 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580fe4 to 03680feb has its CatchHandler @ 03581238 */
      CNIFAIKGHKO__JOMFHMDCMNG(pCVar2,HEHMPFLAEGE,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).OMFKAKGPCCM;
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03580ffc to 03681003 has its CatchHandler @ 03581200 */
        (pNVar3->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

