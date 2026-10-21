// Nekki.SF2.GUI.Pvp.PlayerMenu$$OnPlayerOneSwitchInputClick @ RVA 0x3047BE8

void Nekki_SF2_GUI_Pvp_PlayerMenu__OnPlayerOneSwitchInputClick
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03147bf4 to 03247c0b has its CatchHandler @ 03147c74 */
  if ((DAT_04565df0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565df0 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03147c20 to 03247c3b has its CatchHandler @ 03147c7c */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,method);
  }
  Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerOneInput((MethodInfo *)0x0);
  if (DAT_04565e5c == '\0') {
                    /* try { // try from 03147c40 to 03247c53 has its CatchHandler @ 03147c88 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5c = '\x01';
  }
                    /* try { // try from 03147c54 to 03247c9f has its CatchHandler @ 03147b14 */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147bf4 with catch @ 03147c74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147bc8 with catch @ 03147c78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147c20 with catch @ 03147c7c
                        */
  Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
            (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,in_x2);
  return;
}

