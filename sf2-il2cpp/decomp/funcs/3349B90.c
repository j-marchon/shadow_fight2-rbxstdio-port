// InControl.Logger.LogMessageHandler$$.ctor @ RVA 0x3349B90

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void InControl_Logger_LogMessageHandler___ctor(void)

{
  char cVar1;
  long in_x0;
  ulong uVar2;
  long in_x1;
  long in_x2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(in_x2 + 8);
  *(long *)(in_x0 + 0x28) = in_x2;
  *(undefined8 *)(in_x0 + 0x10) = uVar3;
  *(long *)(in_x0 + 0x20) = in_x1;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(in_x2 + 0x52);
  *(long *)(in_x0 + 0x40) = in_x0;
  uVar2 = FUN_01bab730();
  if ((uVar2 & 1) == 0) {
    if (in_x1 == 0) {
      uVar3 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(in_x0 + 0x18) = FUN_01b48dd4;
    goto LAB_03449bfc;
  }
  *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(in_x0 + 0x10);
  *(undefined8 *)(in_x0 + 0x40) = *(undefined8 *)(in_x0 + 0x20);
LAB_03449bfc:
  *(code **)(in_x0 + 0x38) = FUN_01b48d7c;
  return;
}

