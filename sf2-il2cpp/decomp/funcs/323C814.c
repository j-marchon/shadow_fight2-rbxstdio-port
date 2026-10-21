// Nekki.SF2.GUI.SFScrollRect$$PGMHINIGNID @ RVA 0x323C814

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Bounds_o local_78;
  
  if ((DAT_04567077 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567077 = 1;
    method = extraout_x1;
  }
  pUVar3 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    pUVar3 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar13 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x =
           UVar12.fields.m_XMin + UVar12.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y =
           UVar12.fields.m_YMin + UVar12.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z = 0.0;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x = UVar13.fields.m_Width * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y = UVar13.fields.m_Height * 0.5;
      (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z = 0.0;
      Nekki_SF2_GUI_SFScrollRect__PDAJIKLPGAN(&local_78,__this,method_01);
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      (pUVar1->fields).m_Extents.fields.y = local_78.fields.m_Extents.fields.y;
      (pUVar1->fields).m_Extents.fields.z = local_78.fields.m_Extents.fields.z;
      pUVar1 = &(__this->fields).GOOOAGHGBPJ;
      *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = local_78.fields._8_8_;
      (pUVar1->fields).m_Center.fields.x = local_78.fields.m_Center.fields.x;
      (pUVar1->fields).m_Center.fields.y = local_78.fields.m_Center.fields.y;
      pUVar3 = (__this->fields).m_Content;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        fVar6 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z;
        fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
        fVar5 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
        fVar11 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
        fVar10 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
        fVar9 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z;
        fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x;
        fVar7 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y;
        fVar4 = fVar4 + fVar4;
        fVar5 = (fVar5 + fVar5) - fVar4;
        if (0.0 < fVar5) {
          pUVar3 = (__this->fields).m_Content;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c9cc;
          UVar14 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
          fVar4 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
          fVar8 = fVar8 - fVar5 * (UVar14.fields.x + -0.5);
          fVar4 = fVar4 + fVar4;
        }
        fVar10 = fVar10 + fVar10;
        fVar5 = (fVar11 + fVar11) - fVar10;
        if (0.0 < fVar5) {
          pUVar3 = (__this->fields).m_Content;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333c9cc;
          UVar14 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
          fVar10 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
          fVar7 = fVar7 - fVar5 * (UVar14.fields.y + -0.5);
          fVar10 = fVar10 + fVar10;
        }
        (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x = fVar8;
        (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y = fVar7;
        (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y = fVar10 * 0.5;
        (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z = (fVar9 + fVar9) * 0.5;
        (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z = fVar6;
        (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x = fVar4 * 0.5;
      }
      return;
    }
  }
LAB_0333c9cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

