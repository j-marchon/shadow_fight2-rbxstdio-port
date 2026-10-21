// Nekki.SF2.GUI.Glyphs.ImageGlyph$$.ctor @ RVA 0x343D874

void Nekki_SF2_GUI_Glyphs_ImageGlyph___ctor
               (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045681f3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    DAT_045681f3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo,method);
  }
  Nekki_SF2_GUI_Glyphs_Glyph___ctor((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  return;
}

