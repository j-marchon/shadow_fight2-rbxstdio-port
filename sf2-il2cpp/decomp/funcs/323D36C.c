// Nekki.SF2.GUI.SFScrollRect$$SetLayoutHorizontal @ RVA 0x323D36C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__SetLayoutHorizontal
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  bool_conflict *pbVar2;
  bool_conflict bVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *extraout_x1;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_20;
  MethodInfo *method_21;
  MethodInfo *method_22;
  MethodInfo *method_23;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Bounds_o local_78;
  
  if ((DAT_04567067 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567067 = 1;
  }
  pbVar2 = &(__this->fields).DBKFPHHNDNP;
  UnityEngine_DrivenRectTransformTracker__Clear(pbVar2,0);
  if (((__this->fields).GOOCCKKJBFB != false) ||
     (method_14 = method_00, (__this->fields).PMDEJANIMEK != false)) {
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
    UnityEngine_DrivenRectTransformTracker__Add(pbVar2,__this,pUVar5,0x3f06,0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_01);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_02);
    if (DAT_0455fa7e == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa7e = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UnityEngine_RectTransform__set_anchorMax
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_03);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
                    /* try { // try from 0333d4c4 to 0343d8ab has its CatchHandler @ 0333d4c4
                       catch() { ... } // from try @ 0333d4c4 with catch @ 0333d4c4
                       catch() { ... } // from try @ 0333d8b8 with catch @ 0333d4c4
                       catch() { ... } // from try @ 0333e710 with catch @ 0333d4c4
                       catch() { ... } // from try @ 0333e7f4 with catch @ 0333d4c4 */
    UnityEngine_RectTransform__set_sizeDelta
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_04);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar5 = (__this->fields).m_Content;
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_05);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_06);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
         UVar9.fields.m_XMin + UVar9.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
         UVar9.fields.m_YMin + UVar9.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar10.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar10.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
    Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_07);
    bVar3 = (__this->fields).PMDEJANIMEK;
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
    (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
    (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
    (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
    method_14 = method_08;
    if ((bVar3 != false) &&
       (bVar4 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_08), method_14 = method_09,
       bVar4)) {
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_09);
      fVar7 = (__this->fields).BIBHNNGNADC;
      fVar8 = (__this->fields).m_VerticalScrollbarSpacing;
      pUVar6 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_10);
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar11.fields.x = -(fVar7 + fVar8);
      UnityEngine_RectTransform__set_sizeDelta(pUVar5,UVar11,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).m_Content;
      if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_11);
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_12);
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
           UVar9.fields.m_XMin + UVar9.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
           UVar9.fields.m_YMin + UVar9.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar10.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar10.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
      Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_13);
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
      (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
      (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
      (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
      method_14 = extraout_x1;
    }
  }
  if (((__this->fields).GOOCCKKJBFB != false) &&
     (bVar4 = Nekki_SF2_GUI_SFScrollRect__IBJHGENBANK(__this,method_14), method_14 = method_15,
     bVar4)) {
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_15);
    pUVar6 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_16);
    if ((pUVar6 == (UnityEngine_RectTransform_o *)0x0) ||
       (UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0333d844;
    value.fields.y = -((__this->fields).MHGOJLNIEMG + (__this->fields).m_HorizontalScrollbarSpacing)
    ;
    value.fields.x = UVar11.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_17);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_18);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333d844;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
         UVar9.fields.m_XMin + UVar9.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
         UVar9.fields.m_YMin + UVar9.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar10.fields.m_Width * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar10.fields.m_Height * 0.5;
    (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
    Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_19);
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
    (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
    pUVar1 = &(__this->fields).GOOOAGHGBPJ;
    *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
    (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
    (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
    method_14 = extraout_x1_00;
  }
  if (((__this->fields).PMDEJANIMEK == false) ||
     (bVar4 = Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN(__this,method_14), !bVar4)) {
    return;
  }
  pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_20);
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    if (UVar11.fields.x != 0.0) {
      return;
    }
    pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_21);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
      if (0.0 <= UVar11.fields.y) {
        return;
      }
      pUVar5 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_22);
      fVar7 = (__this->fields).BIBHNNGNADC;
      fVar8 = (__this->fields).m_VerticalScrollbarSpacing;
      pUVar6 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_23);
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
        value_00.fields.y = UVar11.fields.y;
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.x = -(fVar7 + fVar8);
          UnityEngine_RectTransform__set_sizeDelta(pUVar5,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0333d844:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

