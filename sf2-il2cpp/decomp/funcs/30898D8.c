// ProgressLabelButton$$SetProgBarValueBorders @ RVA 0x30898D8

void ProgressLabelButton__SetProgBarValueBorders
               (ProgressLabelButton_o *__this,float PEOMJHJICCM,float GKBCJOEFFCP,MethodInfo *method
               )

{
  ProgressBarMask_o *pPVar1;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031898f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
              (pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

