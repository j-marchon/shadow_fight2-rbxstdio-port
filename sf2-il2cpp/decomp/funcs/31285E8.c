// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$CanEnableButtons @ RVA 0x31285E8

bool Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableButtons
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Slider_o *pUVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  pUVar2 = (__this->fields)._contentScroll;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._viewportScroll;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._slider;
      if (pUVar3 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = (float)(*(pUVar3->klass->vtable)._46_get_value.methodPtr)
                                 (UVar6.fields.m_XMin,UVar6.fields.m_YMin,UVar6.fields.m_Width,
                                  pUVar3,(pUVar3->klass->vtable)._46_get_value.method);
        if ((UVar5.fields.m_Height - UVar6.fields.m_Height) * (1.0 - fVar4) <
            (__this->fields)._enableButtonsThreshold) {
          bVar1 = true;
        }
        else {
          bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll(__this,method_00);
          bVar1 = !bVar1;
        }
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

