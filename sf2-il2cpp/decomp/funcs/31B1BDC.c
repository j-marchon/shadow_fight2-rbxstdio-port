// Nekki.SF2.GUI.Profile.TrickContent$$FHDMIIOMAJN @ RVA 0x31B1BDC

void Nekki_SF2_GUI_Profile_TrickContent__FHDMIIOMAJN
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  pNVar2 = (__this->fields)._DamageLabel;
  if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032b1cf8;
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._DamageLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._DescriptionLabel;
                    /* catch() { ... } // from try @ 032b1490 with catch @ 032b1c38
                       try { // try from 032b1c38 to 033b1c47 has its CatchHandler @ 032b122c */
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 032b1c48 to 033b1c4b has its CatchHandler @ 032b1c60 */
        pNVar2 = (__this->fields)._DescriptionLabel;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b1c48 with catch @ 032b1c60 */
                    /* try { // try from 032b1c68 to 033b1ccf has its CatchHandler @ 032b1ce4 */
          if (400.0 <= UVar6.fields.m_Height + UVar7.fields.m_Height) {
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_032b1cf8;
                    /* try { // try from 032b1cd0 to 033b1cdb has its CatchHandler @ 032b122c */
                    /* try { // try from 032b1cdc to 033b1ce3 has its CatchHandler @ 032b1ce4 */
            fVar5 = 155.0;
          }
          else {
            pNVar2 = (__this->fields)._DamageLabel;
            if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
               pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_032b1cf8;
            UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_032b1cf8;
            fVar5 = UVar6.fields.m_Height * 0.5 + -20.0;
          }
          fVar4 = 0.0;
          goto LAB_032b1ce4;
        }
      }
    }
LAB_032b1cf8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar2 = (__this->fields)._DescriptionLabel;
  if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_032b1cf8;
  fVar4 = (__this->fields).KLDFHOEMIPJ.fields.x;
  fVar5 = (__this->fields).KLDFHOEMIPJ.fields.y;
LAB_032b1ce4:
                    /* catch() { ... } // from try @ 032b1b14 with catch @ 032b1ce4
                       catch() { ... } // from try @ 032b1bc4 with catch @ 032b1ce4
                       catch() { ... } // from try @ 032b1c68 with catch @ 032b1ce4
                       catch() { ... } // from try @ 032b1cdc with catch @ 032b1ce4 */
  value.fields.y = fVar5;
  value.fields.x = fVar4;
  value.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
  return;
}

