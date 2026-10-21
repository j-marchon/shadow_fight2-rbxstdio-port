// ProgressLabelButton$$Init @ RVA 0x30893B8

void ProgressLabelButton__Init(ProgressLabelButton_o *__this,MethodInfo *method)

{
  ProgressBarMask_o *pPVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  pPVar1 = (__this->fields)._progressBarMask;
  if (pPVar1 != (ProgressBarMask_o *)0x0) {
    (*(pPVar1->klass->vtable)._6_Init.methodPtr)(pPVar1,(pPVar1->klass->vtable)._6_Init.method);
    pPVar1 = (__this->fields)._progressBarMask;
    method = extraout_x1;
    if (pPVar1 != (ProgressBarMask_o *)0x0) {
      (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
                (0,0x3f800000,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
      pPVar1 = (__this->fields)._progressBarMask;
      method = extraout_x1_00;
      if (pPVar1 != (ProgressBarMask_o *)0x0) {
        (*(pPVar1->klass->vtable)._8_SetValue.methodPtr)
                  (0,0,pPVar1,0,(pPVar1->klass->vtable)._8_SetValue.method);
        ProgressLabelButton__NDGAACOPDKG(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

