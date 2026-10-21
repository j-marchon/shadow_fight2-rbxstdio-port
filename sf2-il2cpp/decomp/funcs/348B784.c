// InControl.InputDevice$$UpdateWithState @ RVA 0x348B784

void InControl_InputDevice__UpdateWithState
               (InControl_InputDevice_o *__this,int32_t inputControlType,bool state,
               uint64_t updateTick,MethodInfo *method)

{
  InControl_InputControl_o *__this_00;
  
  __this_00 = InControl_InputDevice__GetControl(__this,inputControlType,(MethodInfo *)(ulong)state);
  if (__this_00 != (InControl_InputControl_o *)0x0) {
    InControl_InputControl__UpdateWithState(__this_00,state,updateTick,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

