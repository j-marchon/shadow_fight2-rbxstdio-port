// InControl.InputControl$$get_WasPressed @ RVA 0x3440C00

bool InControl_InputControl__get_WasPressed(InControl_InputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
                    /* try { // try from 03540c08 to 03640c1b has its CatchHandler @ 03540c5c */
    return false;
  }
                    /* try { // try from 03540c1c to 03640c4b has its CatchHandler @ 03540aac */
  return ((__this->fields).lastState.fields.State & 1U) == 0;
}

