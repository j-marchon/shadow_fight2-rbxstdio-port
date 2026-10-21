// StepBar$$get_Value @ RVA 0x352E940

float StepBar__get_Value(StepBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = StepBar__GetPercentIndex(__this,(__this->fields).super.super.JGFKHMMNJBA,method);
  return (float)iVar1;
}

