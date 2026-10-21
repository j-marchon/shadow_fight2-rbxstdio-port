// InControl.InputDevice$$UpdateWithValue @ RVA 0x348B7B8

void InControl_InputDevice__UpdateWithValue
               (InControl_InputDevice_o *__this,int32_t inputControlType,float value,
               uint64_t updateTick,MethodInfo *method)

{
  InControl_InputControl_o *__this_00;
  
  __this_00 = InControl_InputDevice__GetControl(__this,inputControlType,(MethodInfo *)updateTick);
  if (__this_00 != (InControl_InputControl_o *)0x0) {
    InControl_InputControl__UpdateWithValue(__this_00,value,updateTick,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

