// Nekki.SF2.GUI.Glyphs.ImageGlyph$$get_ContentWidth @ RVA 0x343D848

float Nekki_SF2_GUI_Glyphs_ImageGlyph__get_ContentWidth
                (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Rect_o UVar2;
  
  pNVar1 = (__this->fields)._IANGGJCONIH_k__BackingField;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = (pNVar1->fields).super.super.m_Corners,
     __this_00 != (UnityEngine_Vector3_array *)0x0)) {
    UVar2 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)__this_00,(MethodInfo *)0x0);
    return UVar2.fields.m_Width;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

