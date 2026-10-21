// Nekki.SF2.GUI.SFScrollRect$$FEIGMHLBIOI @ RVA 0x323CB58

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__FEIGMHLBIOI
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar11;
  undefined8 uVar12;
  UnityEngine_Vector2_Fields UVar13;
  
  if ((DAT_04567069 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567069 = 1;
    method = extraout_x1;
  }
  pUVar11 = (__this->fields).m_Content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if (bVar10) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    UVar13 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  }
  else {
    pUVar11 = (__this->fields).m_Content;
    if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar13 = (UnityEngine_Vector2_Fields)
             UnityEngine_RectTransform__get_anchoredPosition(pUVar11,(MethodInfo *)0x0);
  }
  (__this->fields).EADEAEOKIOJ.fields = UVar13;
  pUVar1 = &(__this->fields).JOKCKGCCNNP;
  fVar2 = (pUVar1->fields).m_Center.fields.x;
  fVar3 = (pUVar1->fields).m_Center.fields.y;
  pUVar1 = &(__this->fields).JOKCKGCCNNP;
  fVar4 = (pUVar1->fields).m_Extents.fields.y;
  fVar5 = (pUVar1->fields).m_Extents.fields.z;
  pUVar1 = &(__this->fields).GOOOAGHGBPJ;
  uVar12 = *(undefined8 *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z;
  fVar6 = (pUVar1->fields).m_Center.fields.x;
  fVar7 = (pUVar1->fields).m_Center.fields.y;
  pUVar1 = &(__this->fields).GOOOAGHGBPJ;
  fVar8 = (pUVar1->fields).m_Extents.fields.y;
  fVar9 = (pUVar1->fields).m_Extents.fields.z;
  pUVar1 = &(__this->fields).NMKFBEKICHJ;
  *(undefined8 *)&(__this->fields).NMKFBEKICHJ.fields.m_Center.fields.z =
       *(undefined8 *)&(__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z;
  (pUVar1->fields).m_Center.fields.x = fVar2;
  (pUVar1->fields).m_Center.fields.y = fVar3;
  pUVar1 = &(__this->fields).NMKFBEKICHJ;
  (pUVar1->fields).m_Extents.fields.y = fVar4;
  (pUVar1->fields).m_Extents.fields.z = fVar5;
  pUVar1 = &(__this->fields).EKELFALKAAL;
  *(undefined8 *)&(__this->fields).EKELFALKAAL.fields.m_Center.fields.z = uVar12;
  (pUVar1->fields).m_Center.fields.x = fVar6;
  (pUVar1->fields).m_Center.fields.y = fVar7;
  pUVar1 = &(__this->fields).EKELFALKAAL;
  (pUVar1->fields).m_Extents.fields.y = fVar8;
  (pUVar1->fields).m_Extents.fields.z = fVar9;
  return;
}

