// InControl.InputControl$$get_IsOnZeroTick @ RVA 0x3440BB4

bool InControl_InputControl__get_IsOnZeroTick(InControl_InputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 03540bb8 to 03640bbf has its CatchHandler @ 03540c6c */
  return (__this->fields)._UpdateTick_k__BackingField == (__this->fields).zeroTick;
}

