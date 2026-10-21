// InControl.InputControl$$get_HasChanged @ RVA 0x3440BE8

bool InControl_InputControl__get_HasChanged(InControl_InputControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = InControl_InputControlState__op_Inequality
                    ((InControl_InputControlState_o)(__this->fields).thisState.fields,
                     (InControl_InputControlState_o)(__this->fields).lastState.fields,
                     (MethodInfo *)0x0);
  return bVar1;
}

