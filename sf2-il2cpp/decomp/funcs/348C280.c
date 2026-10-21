// InControl.InputDevice$$get_Direction @ RVA 0x348C280

InControl_TwoAxisInputControl_o *
InControl_InputDevice__get_Direction(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_TwoAxisInputControl_o *pIVar1;
  InControl_TwoAxisInputControl_o *pIVar2;
  
  pIVar1 = (__this->fields)._DPad_k__BackingField;
  if ((pIVar1 != (InControl_TwoAxisInputControl_o *)0x0) &&
     (pIVar2 = (__this->fields)._LeftStick_k__BackingField,
     pIVar2 != (InControl_TwoAxisInputControl_o *)0x0)) {
    if ((pIVar1->fields)._UpdateTick_k__BackingField <= (pIVar2->fields)._UpdateTick_k__BackingField
       ) {
      pIVar1 = pIVar2;
    }
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

