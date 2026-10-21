// Nekki.SF2.GUI.DebugUI$$get_Current @ RVA 0x32912F8

Nekki_SF2_GUI_DebugUI_o * Nekki_SF2_GUI_DebugUI__get_Current(MethodInfo *method)

{
  if ((DAT_04567320 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567320 = 1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI;
}

