// InControl.InputDevice$$get_MenuWasPressed @ RVA 0x348C064

bool InControl_InputDevice__get_MenuWasPressed(InControl_InputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  InControl_InputControl_o *pIVar2;
  MethodInfo *in_x2;
  
  pIVar2 = InControl_InputDevice__GetControl(__this,0x13,in_x2);
  if (pIVar2 != (InControl_InputControl_o *)0x0) {
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(__this,0x14,in_x2);
    if (pIVar2 != (InControl_InputControl_o *)0x0) {
      bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      pIVar2 = InControl_InputDevice__GetControl(__this,0x15,in_x2);
      if (pIVar2 != (InControl_InputControl_o *)0x0) {
        bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
        if (bVar1) {
          return true;
        }
        pIVar2 = InControl_InputDevice__GetControl(__this,0x16,in_x2);
        if (pIVar2 != (InControl_InputControl_o *)0x0) {
          bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
          if (bVar1) {
            return true;
          }
          pIVar2 = InControl_InputDevice__GetControl(__this,0x17,in_x2);
          if (pIVar2 != (InControl_InputControl_o *)0x0) {
            bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
            if (bVar1) {
              return true;
            }
            pIVar2 = InControl_InputDevice__GetControl(__this,0x18,in_x2);
            if (pIVar2 != (InControl_InputControl_o *)0x0) {
              bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
              return bVar1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

