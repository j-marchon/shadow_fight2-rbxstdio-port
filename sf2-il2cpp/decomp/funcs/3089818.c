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

