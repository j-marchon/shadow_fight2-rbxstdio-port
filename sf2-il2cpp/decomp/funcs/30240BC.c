// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$.ctor @ RVA 0x30240BC

void Nekki_SF2_GUI_Glyphs_PrefabGlyph___ctor
               (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c7c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    DAT_04565c7c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo,method);
  }
  Nekki_SF2_GUI_Glyphs_Glyph___ctor((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  return;
}

