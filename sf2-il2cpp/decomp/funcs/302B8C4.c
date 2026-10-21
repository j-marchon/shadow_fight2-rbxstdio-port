// Nekki.SF2.GUI.SimpleScroll$$PBDJKOPCAOK @ RVA 0x302B8C4

void Nekki_SF2_GUI_SimpleScroll__PBDJKOPCAOK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o value;
  
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    value.fields.x = MJBMLNKAPGC.fields.x + UVar4.fields.x;
    value.fields.y = MJBMLNKAPGC.fields.y + UVar4.fields.y;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value,(MethodInfo *)0x0);
    UVar2 = (__this->fields).super.m_ContentStartPosition.fields;
    UVar3.x = MJBMLNKAPGC.fields.x + UVar2.x;
    UVar3.y = MJBMLNKAPGC.fields.y + UVar2.y;
    (__this->fields).super.m_ContentStartPosition.fields = UVar3;
    UnityEngine_UI_ScrollRect__UpdatePrevData
              ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
      (__this->fields).IFDBJFNPOEK.fields.x = UVar4.fields.x;
      (__this->fields).IFDBJFNPOEK.fields.y = UVar4.fields.y;
      UnityEngine_UI_ScrollRect__UpdateBounds
                ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

