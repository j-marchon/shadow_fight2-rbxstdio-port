// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$AGPKHOBELPJ @ RVA 0x3477A94

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__AGPKHOBELPJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t OGPGLGPMEPD;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  MethodInfo *method_00;
  
  pNVar2 = (__this->fields).PDHMLFAMNCO;
  if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(pNVar2,(MethodInfo *)0x0);
    if (bVar1) {
      OGPGLGPMEPD = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__CELLNGLMJGA
                              (__this,method_00);
      if (OGPGLGPMEPD < 0) {
                    /* try { // try from 03577af8 to 03677afb has its CatchHandler @ 03577b2c */
        return;
      }
                    /* try { // try from 03577ac0 to 03677ac7 has its CatchHandler @ 03577bb4 */
      pNVar2 = (__this->fields).PDHMLFAMNCO;
      if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
LAB_03577ae8:
                    /* try { // try from 03577aec to 03677aef has its CatchHandler @ 03577ba8 */
                    /* try { // try from 03577af0 to 03677af7 has its CatchHandler @ 03577b40 */
        Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar2,OGPGLGPMEPD,0.0,8,(MethodInfo *)0x0);
        return;
      }
    }
    else {
                    /* try { // try from 03577ad4 to 03677aeb has its CatchHandler @ 03577c5c */
      pNVar2 = (__this->fields).PDHMLFAMNCO;
      if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        OGPGLGPMEPD = 0;
        goto LAB_03577ae8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03577afc to 03677aff has its CatchHandler @ 03577b20 */
  FUN_01bab8c8();
}

