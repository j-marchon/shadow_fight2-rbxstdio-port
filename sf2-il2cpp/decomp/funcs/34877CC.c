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

