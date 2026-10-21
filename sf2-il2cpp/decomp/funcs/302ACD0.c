// Nekki.SF2.GUI.SimpleScroll$$get_IsYUp @ RVA 0x302ACD0

bool Nekki_SF2_GUI_SimpleScroll__get_IsYUp(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
    return 0.99 < UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

