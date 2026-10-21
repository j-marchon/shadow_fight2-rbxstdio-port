// StepBar$$Init @ RVA 0x352E96C

void StepBar__Init(StepBar_o *__this,MethodInfo *method)

{
  ProgressBar__Init((ProgressBar_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0362e998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._11_SetValueBorders.methodPtr)
            (0,0x42c80000,__this,(__this->klass->vtable)._11_SetValueBorders.method);
  return;
}

