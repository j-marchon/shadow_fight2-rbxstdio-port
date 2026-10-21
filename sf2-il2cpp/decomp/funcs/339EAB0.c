// Nekki.SF2.GUI.HintBox$$MFAGMLEEDEJ @ RVA 0x339EAB0

void Nekki_SF2_GUI_HintBox__MFAGMLEEDEJ(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_RectOffset_o *pUVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Rect_o UVar12;
  
  if ((DAT_04567c98 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c98 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._Title;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar8 = 0.0;
  if (!bVar1) {
    pNVar5 = (__this->fields)._Title;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ec44;
    fVar8 = (float)(*(pNVar5->klass->vtable)._82_get_preferredHeight.methodPtr)
                             (pNVar5,(pNVar5->klass->vtable)._82_get_preferredHeight.method);
  }
  pNVar5 = (__this->fields)._Description;
  if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0349ec44;
  fVar9 = (float)(*(pNVar5->klass->vtable)._82_get_preferredHeight.methodPtr)
                           (pNVar5,(pNVar5->klass->vtable)._82_get_preferredHeight.method);
  pUVar6 = (__this->fields)._BGTransform;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar10 = 0.0;
  if (!bVar1) {
    pUVar6 = (__this->fields)._BGTransform;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0349ec44;
    UVar11 = UnityEngine_RectTransform__get_offsetMax(pUVar6,(MethodInfo *)0x0);
    fVar10 = ABS(UVar11.fields.y);
  }
  pUVar7 = (__this->fields)._BGLayout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar10 = fVar8 + fVar9 + fVar10;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar7 = (__this->fields)._BGLayout;
    if ((pUVar7 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
       (pUVar4 = (pUVar7->fields).super.super.m_Padding, pUVar4 == (UnityEngine_RectOffset_o *)0x0))
    goto LAB_0349ec44;
    fVar8 = *(float *)&(pUVar7->fields).super.m_ChildScaleWidth;
    iVar2 = UnityEngine_RectOffset__get_top(pUVar4,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._BGLayout;
    if ((pUVar7 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
       (pUVar4 = (pUVar7->fields).super.super.m_Padding, pUVar4 == (UnityEngine_RectOffset_o *)0x0))
    goto LAB_0349ec44;
    iVar3 = UnityEngine_RectOffset__get_bottom(pUVar4,(MethodInfo *)0x0);
    fVar10 = fVar10 + fVar8 + (float)iVar2 + (float)iVar3;
  }
  pUVar6 = (__this->fields)._RectTransform;
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
    UVar11.fields.y = fVar10;
    UVar11.fields.x = UVar12.fields.m_Width;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,UVar11,(MethodInfo *)0x0);
    return;
  }
LAB_0349ec44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

