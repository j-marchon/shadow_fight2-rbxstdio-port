// InControl.InputManager.<>c$$<DetachDevice>b__70_0 @ RVA 0x3217F34

int32_t InControl_InputManager_<>c__<DetachDevice>b__70_0
                  (InControl_InputManager___c_o *__this,InControl_InputDevice_o *d1,
                  InControl_InputDevice_o *d2,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((d1 != (InControl_InputDevice_o *)0x0) && (d2 != (InControl_InputDevice_o *)0x0)) {
    iVar1 = System_Int32__CompareTo((int)d1 + 0x10,(d2->fields).SortOrder,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

