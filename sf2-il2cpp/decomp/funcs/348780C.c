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

