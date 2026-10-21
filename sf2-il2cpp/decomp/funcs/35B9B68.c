// InControl.OneAxisInputControl$$get_WasReleased @ RVA 0x35B9B68

bool InControl_OneAxisInputControl__get_WasReleased
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
    return (bool)((__this->fields).lastState.fields.State & 1);
  }
  return false;
}

