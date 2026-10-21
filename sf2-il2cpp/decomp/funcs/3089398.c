// ProgressLabelButton$$GetValue @ RVA 0x3089398

float ProgressLabelButton__GetValue(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  float fVar2;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031893b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pPVar1->klass->vtable)._5_get_Value.methodPtr)
                             (pPVar1,(pPVar1->klass->vtable)._5_get_Value.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

