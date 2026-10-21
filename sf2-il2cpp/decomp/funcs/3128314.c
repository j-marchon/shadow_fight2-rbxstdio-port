// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$CanEnableScroll @ RVA 0x3128314

bool Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  pUVar1 = (__this->fields)._contentScroll;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._viewportScroll;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      return UVar3.fields.m_Height + 0.01 <= UVar2.fields.y;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

