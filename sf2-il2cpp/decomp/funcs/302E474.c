// Nekki.SF2.GUI.SimpleScroll$$TeleportContentToPos @ RVA 0x302E474

void Nekki_SF2_GUI_SimpleScroll__TeleportContentToPos
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float EMPKHNEPHPO,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields local_18;
  
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE(__this,method_00);
  Nekki_SF2_GUI_SimpleScroll__PMAAPFAKLNJ(__this,method_01);
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    local_18 = (UnityEngine_Vector2_Fields)
               UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    if ((__this->fields).super.m_Vertical != false) {
      local_18.y = EMPKHNEPHPO;
      Nekki_SF2_GUI_SimpleScroll__OLABKBMECLF(__this,(UnityEngine_Vector2_o *)&local_18,in_x2);
    }
    if ((__this->fields).super.m_Horizontal != false) {
      local_18.x = EMPKHNEPHPO;
      Nekki_SF2_GUI_SimpleScroll__HGDFKDAJKOB(__this,(UnityEngine_Vector2_o *)&local_18,in_x2);
    }
    pUVar1 = (__this->fields).super.m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar1,(UnityEngine_Vector2_o)local_18,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).super.m_Content;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
        (__this->fields).super.m_ContentStartPosition.fields = UVar2;
        UnityEngine_UI_ScrollRect__UpdatePrevData
                  ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).super.m_Content;
        *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 0;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar2 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
          (__this->fields).IFDBJFNPOEK.fields = UVar2;
          UnityEngine_UI_ScrollRect__UpdateBounds
                    ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

