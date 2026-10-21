// ProgressLabelButton$$NDGAACOPDKG @ RVA 0x3089420

void ProgressLabelButton__NDGAACOPDKG(ProgressLabelButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  ProgressBarMask_o *pPVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  
  if ((DAT_04566040 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566040 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.super.super.super.super.m_Transition != 1) {
    return;
  }
  pPVar3 = (__this->fields)._progressBarMask;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  iVar2 = UnityEngine_UI_Selectable__get_currentSelectionState
                    ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  switch(iVar2) {
  case 0:
    pPVar3 = (__this->fields)._progressBarMask;
    if (pPVar3 == (ProgressBarMask_o *)0x0) goto LAB_03189608;
    pNVar4 = (pPVar3->fields)._maskedImage;
    uVar12 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_NormalColor.fields.r;
    uVar8 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_NormalColor.fields.g;
    uVar10 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_NormalColor.fields.b;
    uVar6 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_NormalColor.fields.a;
    break;
  case 1:
    pPVar3 = (__this->fields)._progressBarMask;
    if (pPVar3 == (ProgressBarMask_o *)0x0) goto LAB_03189608;
    pNVar4 = (pPVar3->fields)._maskedImage;
    uVar12 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_HighlightedColor.fields.r;
    uVar8 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_HighlightedColor.fields.g;
    uVar10 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_HighlightedColor.fields.b;
    uVar6 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_HighlightedColor.fields.a;
    break;
  case 2:
    pPVar3 = (__this->fields)._progressBarMask;
    if (pPVar3 == (ProgressBarMask_o *)0x0) goto LAB_03189608;
    pNVar4 = (pPVar3->fields)._maskedImage;
    uVar12 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_PressedColor.fields.r;
    uVar8 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_PressedColor.fields.g;
    uVar10 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_PressedColor.fields.b;
    uVar6 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_PressedColor.fields.a;
    break;
  default:
    goto switchD_031894c8_caseD_3;
  case 4:
    pPVar3 = (__this->fields)._progressBarMask;
    if (pPVar3 == (ProgressBarMask_o *)0x0) goto LAB_03189608;
    pNVar4 = (pPVar3->fields)._maskedImage;
    uVar12 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_DisabledColor.fields.r;
    uVar8 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_DisabledColor.fields.g;
    uVar10 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                          m_DisabledColor.fields.b;
    uVar6 = (ulong)(uint)(__this->fields).super.super.super.super.super.m_Colors.fields.
                         m_DisabledColor.fields.a;
  }
  if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              (uVar12,uVar8,uVar10,uVar6,pNVar4,(pNVar4->klass->vtable)._23_set_color.method);
switchD_031894c8_caseD_3:
    if (((__this->fields)._barMaskInvolvedTintTransaction == false) ||
       ((__this->fields).super.super.super.super.super.m_Interactable != false)) {
      return;
    }
    pPVar3 = (__this->fields)._progressBarMask;
    if (pPVar3 != (ProgressBarMask_o *)0x0) {
      pNVar4 = (pPVar3->fields)._maskedImage;
      fVar11 = (__this->fields).super.super.super.super.super.m_Colors.fields.m_DisabledColor.fields
               .r;
      fVar7 = (__this->fields).super.super.super.super.super.m_Colors.fields.m_DisabledColor.fields.
              g;
      fVar9 = (__this->fields).super.super.super.super.super.m_Colors.fields.m_DisabledColor.fields.
              b;
      fVar5 = (__this->fields).super.super.super.super.super.m_Colors.fields.m_DisabledColor.fields.
              a;
      if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03189604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                  ((ulong)(uint)fVar11,(ulong)(uint)fVar7,(ulong)(uint)fVar9,(ulong)(uint)fVar5,
                   pNVar4,(pNVar4->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
LAB_03189608:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

