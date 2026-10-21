// Nekki.SF2.GUI.TextDebugger$$get_GenerateRTBounds @ RVA 0x35A6D3C

bool Nekki_SF2_GUI_TextDebugger__get_GenerateRTBounds(MethodInfo *method)

{
  if ((DAT_04568e16 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e16 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->BEIEJGPCMEM;
}

