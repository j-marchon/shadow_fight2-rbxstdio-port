// TypeDefIndex 856
// Namespace: 
// public class ProgressLabelButton : LabelButton
// Fields:
//   private ProgressBarMask _progressBarMask; // 0x1F0
//   private bool _barMaskInvolvedTintTransaction; // 0x1F8

// ===== public void SetValue(float CJNHFNHJHPE, float PNEIGGOFIOA = 0, Action DLPCMOHKKMH)  [RVA 0x3089378]
// ProgressLabelButton$$SetValue @ RVA 0x3089378

void ProgressLabelButton__SetValue
               (ProgressLabelButton_o *__this,float CJNHFNHJHPE,float PNEIGGOFIOA,
               System_Action_o *DLPCMOHKKMH,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03189390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar1->klass->vtable)._8_SetValue.methodPtr)
              (pPVar1,DLPCMOHKKMH,(pPVar1->klass->vtable)._8_SetValue.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetValue()  [RVA 0x3089398]
// ProgressLabelButton$$GetValue @ RVA 0x3089398

float ProgressLabelButton__GetValue(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  float fVar2;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031893b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pPVar1->klass->vtable)._5_get_Value.methodPtr)
                             (pPVar1,(pPVar1->klass->vtable)._5_get_Value.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x30893B8]
// ProgressLabelButton$$Init @ RVA 0x30893B8

void ProgressLabelButton__Init(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
    (*(pPVar1->klass->vtable)._6_Init.methodPtr)(pPVar1,(pPVar1->klass->vtable)._6_Init.method);
    pPVar1 = (__this->fields)._progressBarMask;
    method = extraout_x1;
    if (pPVar1 != (ProgressBarMask_o *)0x0) {
      (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
                (0,0x3f800000,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
      pPVar1 = (__this->fields)._progressBarMask;
      method = extraout_x1_00;
      if (pPVar1 != (ProgressBarMask_o *)0x0) {
        (*(pPVar1->klass->vtable)._8_SetValue.methodPtr)
                  (0,0,pPVar1,0,(pPVar1->klass->vtable)._8_SetValue.method);
        ProgressLabelButton__NDGAACOPDKG(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x308960C]
// ProgressLabelButton$$.ctor @ RVA 0x308960C

void ProgressLabelButton___ctor(ProgressLabelButton_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456603e & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_0456603e = 1;
    method = extraout_x1;
  }
  (__this->fields)._barMaskInvolvedTintTransaction = true;
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LabelButton_TypeInfo,method);
  }
  (__this->fields).super._Control = -1;
  (__this->fields).super._TrackingDeviceID = -1;
  (__this->fields).super.EGMBJLELLPB.fields.b = 0.0;
  (__this->fields).super.EGMBJLELLPB.fields.a = 1.0;
  (__this->fields).super.EGMBJLELLPB.fields.r = 0.0;
  (__this->fields).super.EGMBJLELLPB.fields.g = 0.0;
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetProgressColor(LabelButton.MANJLBPDELA EFJKPCADGJH)  [RVA 0x30896AC]
// ProgressLabelButton$$SetProgressColor @ RVA 0x30896AC

void ProgressLabelButton__SetProgressColor
               (ProgressLabelButton_o *__this,int32_t EFJKPCADGJH,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB;
  
  if ((DAT_0456603f & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_0456603f = 1;
  }
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
    IEPECMCLKJB = (pPVar1->fields)._maskedImage;
    if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LabelButton__PGCFNOLMNDA(EFJKPCADGJH,IEPECMCLKJB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float MinValue()  [RVA 0x3089818]
// ProgressLabelButton$$MinValue @ RVA 0x3089818

float ProgressLabelButton__MinValue(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  float fVar2;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03189830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pPVar1->klass->vtable)._12_get_MinValue.methodPtr)
                             (pPVar1,(pPVar1->klass->vtable)._12_get_MinValue.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnSelect(BaseEventData OHNNFPGGEFK)  [RVA 0x3089838]
// ProgressLabelButton$$OnSelect @ RVA 0x3089838

void ProgressLabelButton__OnSelect
               (ProgressLabelButton_o *__this,UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,
               MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  UnityEngine_UI_Selectable__OnSelect
            ((UnityEngine_UI_Selectable_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  LabelButton__NDGAACOPDKG((LabelButton_o *)__this,method_00);
  ProgressLabelButton__NDGAACOPDKG(__this,method_01);
  return;
}


// ===== protected override void Update()  [RVA 0x3089878]
// ProgressLabelButton$$Update @ RVA 0x3089878

void ProgressLabelButton__Update(ProgressLabelButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  SFButton__Update((SFButton_o *)__this,(MethodInfo *)0x0);
  LabelButton__NDGAACOPDKG((LabelButton_o *)__this,method_00);
  ProgressLabelButton__NDGAACOPDKG(__this,method_01);
  return;
}


// ===== public float MaxValue()  [RVA 0x30898B8]
// ProgressLabelButton$$MaxValue @ RVA 0x30898B8

float ProgressLabelButton__MaxValue(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  float fVar2;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031898d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pPVar1->klass->vtable)._10_get_MaxValue.methodPtr)
                             (pPVar1,(pPVar1->klass->vtable)._10_get_MaxValue.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDGAACOPDKG()  [RVA 0x3089420]
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


// ===== public void SetProgBarValueBorders(float PEOMJHJICCM, float GKBCJOEFFCP)  [RVA 0x30898D8]
// ProgressLabelButton$$SetProgBarValueBorders @ RVA 0x30898D8

void ProgressLabelButton__SetProgBarValueBorders
               (ProgressLabelButton_o *__this,float PEOMJHJICCM,float GKBCJOEFFCP,MethodInfo *method
               )

{
  ProgressBarMask_o *pPVar1;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031898f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
              (pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetProgressSpriteName(string HCAAAAMDCNO)  [RVA 0x30898F8]
// ProgressLabelButton$$SetProgressSpriteName @ RVA 0x30898F8

void ProgressLabelButton__SetProgressSpriteName
               (ProgressLabelButton_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  ProgressBarMask_o *__this_00;
  
  __this_00 = (__this->fields)._progressBarMask;
  if (__this_00 != (ProgressBarMask_o *)0x0) {
    ProgressBarMask__SetSpriteName(__this_00,HCAAAAMDCNO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

