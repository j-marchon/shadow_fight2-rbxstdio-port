// InControl.InputControlState$$Set @ RVA 0x33AD228

void InControl_InputControlState__Set
               (InControl_InputControlState_o __this,bool state,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (!state) {
    uVar1 = 0;
  }
  *(bool *)__this.fields = state;
  *(undefined4 *)((long)__this.fields + 4) = uVar1;
  return;
}

