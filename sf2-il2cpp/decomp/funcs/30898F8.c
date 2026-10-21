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

