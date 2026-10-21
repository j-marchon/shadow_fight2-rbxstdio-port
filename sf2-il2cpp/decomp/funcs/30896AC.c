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

