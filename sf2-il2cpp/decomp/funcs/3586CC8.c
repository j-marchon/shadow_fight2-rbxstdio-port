// Nekki.SF2.GUI.Map.MapScene$$MKDPNEIAKBM @ RVA 0x3586CC8

void Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *pNVar1;
  
                    /* try { // try from 03686cd0 to 03786cdb has its CatchHandler @ 03686d1c */
  pNVar1 = (__this->fields).MGIJJGGPFJB;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
                    /* try { // try from 03686cdc to 03786d03 has its CatchHandler @ 03686b64 */
    Nekki_SF2_GUI_Map_MapButtonsPanel__AddMapButtons(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MGIJJGGPFJB;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapButtonsPanel__AddEventsButton(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).MGIJJGGPFJB;
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_MapButtonsPanel__AddRouletteButton(pNVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03686d04 to 03786d07 has its CatchHandler @ 03686d28 */
  FUN_01bab8c8();
}

