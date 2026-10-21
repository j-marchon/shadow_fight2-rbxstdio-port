// InControl.InputDevice$$LastChangedAfter @ RVA 0x348C01C

bool InControl_InputDevice__LastChangedAfter
               (InControl_InputDevice_o *__this,InControl_InputDevice_o *otherDevice,
               MethodInfo *method)

{
  if (otherDevice != (InControl_InputDevice_o *)0x0) {
    return (otherDevice->fields)._LastChangeTick_k__BackingField <
           (__this->fields)._LastChangeTick_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

