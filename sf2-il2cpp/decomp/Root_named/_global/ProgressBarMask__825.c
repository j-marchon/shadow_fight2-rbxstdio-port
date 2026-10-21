// TypeDefIndex 825
// Namespace: 
// public class ProgressBarMask : ProgressBarBase
// Fields:
//   private RectTransform _mask; // 0x40
//   private ResolutionImage _maskedImage; // 0x48
//   private Rect HPFDLDBKGPB; // 0x50

// ===== public void .ctor()  [RVA 0x307A474]
// ProgressBarMask$$.ctor @ RVA 0x307A474

void ProgressBarMask___ctor(ProgressBarMask_o *__this,MethodInfo *method)

{
  ProgressBarBase___ctor((ProgressBarBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Init()  [RVA 0x307A47C]
// ProgressBarMask$$Init @ RVA 0x307A47C

void ProgressBarMask__Init(ProgressBarMask_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Rect_o UVar2;
  
  __this_00 = (__this->fields)._maskedImage;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar2 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._mask;
    (__this->fields).HPFDLDBKGPB.fields.m_XMin = UVar2.fields.m_XMin;
    (__this->fields).HPFDLDBKGPB.fields.m_YMin = UVar2.fields.m_YMin;
    (__this->fields).HPFDLDBKGPB.fields.m_Width = UVar2.fields.m_Width;
    (__this->fields).HPFDLDBKGPB.fields.m_Height = UVar2.fields.m_Height;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar1,(UnityEngine_Vector2_o)((ulong)(uint)UVar2.fields.m_Height << 0x20),
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_SetValue.methodPtr)
                (0,0,__this,0,(__this->klass->vtable)._8_SetValue.method);
                    /* WARNING: Could not recover jumptable at 0x0317a4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._11_SetValueBorders.methodPtr)
                (0,(ulong)(uint)(__this->fields).HPFDLDBKGPB.fields.m_Width,__this,
                 (__this->klass->vtable)._11_SetValueBorders.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ResolutionImage get_Image()  [RVA 0x307A4FC]
// ProgressBarMask$$get_Image @ RVA 0x307A4FC

Nekki_SF2_GUI_ResolutionImage_o *
ProgressBarMask__get_Image(ProgressBarMask_o *__this,MethodInfo *method)

{
  return (__this->fields)._maskedImage;
}


// ===== protected override void OLOBIPCHMCC()  [RVA 0x307A504]
// ProgressBarMask$$OLOBIPCHMCC @ RVA 0x307A504

void ProgressBarMask__OLOBIPCHMCC(ProgressBarMask_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  
  __this_00 = (__this->fields)._mask;
  fVar2 = (__this->fields).HPFDLDBKGPB.fields.m_Width;
  fVar1 = ProgressBarBase__KHNHBNKJPAE((ProgressBarBase_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.y = (__this->fields).HPFDLDBKGPB.fields.m_Height;
    value.fields.x = fVar2 * fVar1;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSpriteName(string HCAAAAMDCNO)  [RVA 0x307A54C]
// ProgressBarMask$$SetSpriteName @ RVA 0x307A54C

void ProgressBarMask__SetSpriteName
               (ProgressBarMask_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  __this_00 = (__this->fields)._maskedImage;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,HCAAAAMDCNO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

