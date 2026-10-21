// InControl.InputDevice$$get_AnyButton @ RVA 0x348C120

InControl_InputControl_o *
InControl_InputDevice__get_AnyButton(InControl_InputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  InControl_InputControl_array *pIVar3;
  InControl_InputControl_o *__this_00;
  ulong uVar4;
  
  if ((DAT_045683e3 & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    DAT_045683e3 = 1;
  }
  pIVar3 = (__this->fields)._Controls_k__BackingField;
  if (pIVar3 == (InControl_InputControl_array *)0x0) {
LAB_0358c1f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = System_Array__GetLength((System_Array_o *)pIVar3,0,(MethodInfo *)0x0);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      pIVar3 = (__this->fields)._Controls_k__BackingField;
      if (pIVar3 == (InControl_InputControl_array *)0x0) goto LAB_0358c1f0;
      if ((uint)pIVar3->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      __this_00 = pIVar3->m_Items[uVar4];
      if (((__this_00 != (InControl_InputControl_o *)0x0) &&
          ((__this_00->fields)._IsButton_k__BackingField != false)) &&
         (bVar1 = InControl_InputControl__get_IsPressed(__this_00,(MethodInfo *)0x0), bVar1)) {
        return __this_00;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return InControl_InputControl_TypeInfo->static_fields->Null;
}

