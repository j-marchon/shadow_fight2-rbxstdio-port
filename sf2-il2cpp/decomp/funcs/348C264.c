// InControl.InputDevice$$get_DPadY @ RVA 0x348C264

float InControl_InputDevice__get_DPadY(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_TwoAxisInputControl_o *pIVar1;
  
  pIVar1 = (__this->fields)._DPad_k__BackingField;
  if (pIVar1 != (InControl_TwoAxisInputControl_o *)0x0) {
    return (pIVar1->fields)._Y_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

