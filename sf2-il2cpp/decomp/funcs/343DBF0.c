// Nekki.SF2.GUI.Glyphs.ImageGlyph$$get_Ratio @ RVA 0x343DBF0

float Nekki_SF2_GUI_Glyphs_ImageGlyph__get_Ratio
                (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Rect_o UVar4;
  
  pNVar2 = (__this->fields)._IANGGJCONIH_k__BackingField;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = (pNVar2->fields).super.super.m_Corners, pUVar1 != (UnityEngine_Vector3_array *)0x0))
  {
    UVar3 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._IANGGJCONIH_k__BackingField;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar1 = (pNVar2->fields).super.super.m_Corners, pUVar1 != (UnityEngine_Vector3_array *)0x0)
       ) {
      UVar4 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar1,(MethodInfo *)0x0);
      return UVar3.fields.m_Height / UVar4.fields.m_Width;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

