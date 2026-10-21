// Nekki.SF2.GUI.TextDebugger$$get_GenerateAlignedTextBounds @ RVA 0x35A75B0

bool Nekki_SF2_GUI_TextDebugger__get_GenerateAlignedTextBounds(MethodInfo *method)

{
  if ((DAT_04568e22 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e22 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036a7604 to 037a7607 has its CatchHandler @ 036a764c */
  return Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->AJOAHCMGKNH;
}

