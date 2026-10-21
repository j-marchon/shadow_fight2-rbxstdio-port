// ProgressLabelButton$$MaxValue @ RVA 0x30898B8

float ProgressLabelButton__MaxValue(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  float fVar2;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031898d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pPVar1->klass->vtable)._10_get_MaxValue.methodPtr)
                             (pPVar1,(pPVar1->klass->vtable)._10_get_MaxValue.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

