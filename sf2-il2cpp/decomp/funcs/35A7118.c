// Nekki.SF2.GUI.TextDebugger$$get_GenerateGlyphBounds @ RVA 0x35A7118

bool Nekki_SF2_GUI_TextDebugger__get_GenerateGlyphBounds(MethodInfo *method)

{
  if ((DAT_04568e1d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1d = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->NIGDAINCGMM;
}

