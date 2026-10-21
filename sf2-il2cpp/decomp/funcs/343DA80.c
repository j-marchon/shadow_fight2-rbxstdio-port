// Nekki.SF2.GUI.Glyphs.ImageGlyph$$.cctor @ RVA 0x343DA80

void Nekki_SF2_GUI_Glyphs_ImageGlyph___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Glyphs_ImageGlyph_StaticFields *pNVar1;
  
  if ((DAT_045681f5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo);
    DAT_045681f5 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->static_fields;
  (pNVar1->GKKLLBCACBA).fields.b = 0.5;
  (pNVar1->GKKLLBCACBA).fields.a = 1.0;
  (pNVar1->GKKLLBCACBA).fields.r = 0.5;
  (pNVar1->GKKLLBCACBA).fields.g = 0.5;
  return;
}

