// Nekki.SF2.GUI.SimpleScroll$$GetScrollY @ RVA 0x302CF28

float Nekki_SF2_GUI_SimpleScroll__GetScrollY
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

