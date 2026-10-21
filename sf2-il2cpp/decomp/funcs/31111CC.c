// Nekki.SF2.GUI.TableViewScroll$$SetOrientation @ RVA 0x31111CC

void Nekki_SF2_GUI_TableViewScroll__SetOrientation
               (Nekki_SF2_GUI_TableViewScroll_o *__this,int32_t KKHMNJHDBDD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_o value;
  
  pUVar2 = (__this->fields).super.m_Content;
  (__this->fields).HBFGPJPFNBG = KKHMNJHDBDD;
  if (KKHMNJHDBDD == 1) {
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin(pUVar2,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMax
                  (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).super.m_Content;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          fVar3 = 0.0;
          fVar4 = 0.5;
LAB_03211260:
          value.fields.y = fVar4;
          value.fields.x = fVar3;
          UnityEngine_RectTransform__set_pivot(pUVar2,value,(MethodInfo *)0x0);
          bVar1 = (__this->fields).HBFGPJPFNBG == 1;
          (__this->fields).super.m_Horizontal = bVar1;
          (__this->fields).super.m_Vertical = !bVar1;
          return;
        }
      }
    }
  }
  else if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).super.m_Content;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMax
                (pUVar2,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        fVar3 = 0.5;
        fVar4 = 1.0;
        goto LAB_03211260;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

