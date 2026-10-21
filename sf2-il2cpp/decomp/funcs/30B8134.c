// Nekki.SF2.GUI.TextPic$$get_GenerationGeometryBounds @ RVA 0x30B8134

UnityEngine_Vector2_o
Nekki_SF2_GUI_TextPic__get_GenerationGeometryBounds
          (Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_o UVar1;
  
  __this_00 = Nekki_SF2_GUI_TextPic__get_FittingBoundsRectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields._8_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

