// InControl.InputControl$$get_WasReleased @ RVA 0x3440C20

bool InControl_InputControl__get_WasReleased(InControl_InputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
    return (bool)((__this->fields).lastState.fields.State & 1);
  }
  return false;
}

