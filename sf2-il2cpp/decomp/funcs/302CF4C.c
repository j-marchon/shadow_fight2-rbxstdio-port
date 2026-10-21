// Nekki.SF2.GUI.SimpleScroll$$GetScrollX @ RVA 0x302CF4C

float Nekki_SF2_GUI_SimpleScroll__GetScrollX
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.x;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

