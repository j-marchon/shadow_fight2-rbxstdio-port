// InControl.OneAxisInputControl$$get_HasChanged @ RVA 0x35B9B30

bool InControl_OneAxisInputControl__get_HasChanged
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = InControl_InputControlState__op_Inequality
                    ((InControl_InputControlState_o)(__this->fields).thisState.fields,
                     (InControl_InputControlState_o)(__this->fields).lastState.fields,
                     (MethodInfo *)0x0);
  return bVar1;
}

