// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$get_ContentWidth @ RVA 0x3023F38

float Nekki_SF2_GUI_Glyphs_PrefabGlyph__get_ContentWidth
                (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super._MPAMHJJKABE_k__BackingField;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.x;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

