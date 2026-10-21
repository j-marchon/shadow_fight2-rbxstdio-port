// Nekki.SF2.GUI.DebugUIModule$$ACBLFBAIHPN @ RVA 0x3322844

bool Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugUIModule_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04567856 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567856 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045678dd == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_045678dd = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugUI_TypeInfo,method);
  }
  if (Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI != (Nekki_SF2_GUI_DebugUI_o *)0x0)
  {
    if (DAT_045673fe == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
      DAT_045673fe = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    return Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03422908 to 03522917 has its CatchHandler @ 03422918 */
  FUN_01bab8c8();
}

