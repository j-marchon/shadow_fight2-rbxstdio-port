// Nekki.SF2.GUI.Pvp.PlayerMenu$$OnPlayerTwoSwitchInputClick @ RVA 0x304785C

void Nekki_SF2_GUI_Pvp_PlayerMenu__OnPlayerTwoSwitchInputClick
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0314785c to 0324787f has its CatchHandler @ 03147840 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147858 with catch @ 03147868
                        */
  if ((DAT_04565dee & 1) == 0) {
                    /* try { // try from 03147880 to 03247897 has its CatchHandler @ 031478d8 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565dee = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03147898 to 032478c7 has its CatchHandler @ 03147840 */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,method);
  }
  Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerTwoInput((MethodInfo *)0x0);
  if (DAT_04565e5b == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5b = '\x01';
  }
                    /* try { // try from 031478c8 to 032478d7 has its CatchHandler @ 031478d8 */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03147880 with catch @ 031478d8
                       catch() { ... } // from try @ 031478c8 with catch @ 031478d8 */
  }
                    /* try { // try from 031478dc to 032478df has its CatchHandler @ 031478e8 */
                    /* try { // try from 031478e0 to 032478eb has its CatchHandler @ 03147840 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031478dc with catch @ 031478e8
                        */
  Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
            (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,in_x2);
  return;
}

