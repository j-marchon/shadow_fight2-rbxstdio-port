// InControl.OneAxisInputControl$$get_WasPressed @ RVA 0x35B9B48

bool InControl_OneAxisInputControl__get_WasPressed
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
    return false;
  }
  return ((__this->fields).lastState.fields.State & 1U) == 0;
}

