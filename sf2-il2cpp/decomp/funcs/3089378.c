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

