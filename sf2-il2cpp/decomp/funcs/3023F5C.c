// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$get_Ratio @ RVA 0x3023F5C

float Nekki_SF2_GUI_Glyphs_PrefabGlyph__get_Ratio
                (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  
  pUVar1 = (__this->fields).super._MPAMHJJKABE_k__BackingField;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super._MPAMHJJKABE_k__BackingField;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      return UVar2.fields.y / UVar3.fields.x;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

