// InControl.InputControlMapping$$get_IsYAxis @ RVA 0x35032D8

bool InControl_InputControlMapping__get_IsYAxis
               (InControl_InputControlMapping_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).Target;
  return iVar1 == 2 || iVar1 == 5;
}

