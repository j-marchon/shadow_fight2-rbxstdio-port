// TypeDefIndex 415
// Namespace: 
// public class ResistanceProgressBar : ProgressBar
// Fields:
//   public ResolutionImage StripeAhead; // 0x48

// ===== public override void Init()  [RVA 0x34877CC]
// ResistanceProgressBar$$Init @ RVA 0x34877CC

void ResistanceProgressBar__Init(ResistanceProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  ProgressBar__Init((ProgressBar_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).StripeAhead;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    UnityEngine_UI_Image__set_type((UnityEngine_UI_Image_o *)pNVar1,3,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).StripeAhead;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_fillMethod((UnityEngine_UI_Image_o *)pNVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetValue(float NBHHBBOJJME, float PNEIGGOFIOA = 0, Action DLPCMOHKKMH)  [RVA 0x348780C]
// ResistanceProgressBar$$SetValue @ RVA 0x348780C

void ResistanceProgressBar__SetValue
               (ResistanceProgressBar_o *__this,float NBHHBBOJJME,float PNEIGGOFIOA,
               System_Action_o *DLPCMOHKKMH,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).StripeAhead;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    fVar1 = (__this->fields).super.super.FGFINIPCGAL;
    UnityEngine_UI_Image__set_fillAmount
              ((UnityEngine_UI_Image_o *)__this_00,
               (NBHHBBOJJME - fVar1) / ((__this->fields).super.super.LBDAPHMEAKC - fVar1),
               (MethodInfo *)0x0);
    ProgressBarBase__SetValue
              ((ProgressBarBase_o *)__this,NBHHBBOJJME,PNEIGGOFIOA,DLPCMOHKKMH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3487870]
// ResistanceProgressBar$$.ctor @ RVA 0x3487870

void ResistanceProgressBar___ctor(ResistanceProgressBar_o *__this,MethodInfo *method)

{
  ProgressBar___ctor((ProgressBar_o *)__this,(MethodInfo *)0x0);
  return;
}

