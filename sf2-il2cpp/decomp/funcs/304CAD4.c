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

