// TypeDefIndex 745
// Namespace: 
// public class ProgressBar : ProgressBarBase
// Fields:
//   public ResolutionImage Stripe; // 0x40

// ===== public void .ctor()  [RVA 0x304CA80]
// ProgressBar$$.ctor @ RVA 0x304CA80

void ProgressBar___ctor(ProgressBar_o *__this,MethodInfo *method)

{
  ProgressBarBase___ctor((ProgressBarBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Init()  [RVA 0x304CA88]
// ProgressBar$$Init @ RVA 0x304CA88

void ProgressBar__Init(ProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  pNVar1 = (__this->fields).Stripe;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    UnityEngine_UI_Image__set_type((UnityEngine_UI_Image_o *)pNVar1,3,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).Stripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_fillMethod((UnityEngine_UI_Image_o *)pNVar1,0,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).Stripe;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount((UnityEngine_UI_Image_o *)pNVar1,0.0,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OLOBIPCHMCC()  [RVA 0x304CAD4]
// ProgressBar$$OLOBIPCHMCC @ RVA 0x304CAD4

void ProgressBar__OLOBIPCHMCC(ProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  float value;
  
  __this_00 = (__this->fields).Stripe;
  value = ProgressBarBase__KHNHBNKJPAE((ProgressBarBase_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    UnityEngine_UI_Image__set_fillAmount
              ((UnityEngine_UI_Image_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

