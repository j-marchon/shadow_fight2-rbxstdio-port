// InControl.InputDevice$$PreUpdate @ RVA 0x348B7EC

void InControl_InputDevice__PreUpdate
               (InControl_InputDevice_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  uint uVar1;
  InControl_InputControl_array *pIVar2;
  ulong uVar3;
  
  pIVar2 = (__this->fields)._Controls_k__BackingField;
  if (pIVar2 != (InControl_InputControl_array *)0x0) {
    uVar1 = System_Array__GetLength((System_Array_o *)pIVar2,0,(MethodInfo *)0x0);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        pIVar2 = (__this->fields)._Controls_k__BackingField;
        if (pIVar2 == (InControl_InputControl_array *)0x0) goto LAB_0358b86c;
        if ((uint)pIVar2->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (pIVar2->m_Items[uVar3] != (InControl_InputControl_o *)0x0) {
          InControl_InputControl__PreUpdate(pIVar2->m_Items[uVar3],updateTick,(MethodInfo *)0x0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    return;
  }
LAB_0358b86c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

