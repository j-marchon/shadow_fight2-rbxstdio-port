// InControl.InputDevice$$GetControl @ RVA 0x348B4D8

InControl_InputControl_o *
InControl_InputDevice__GetControl
          (InControl_InputDevice_o *__this,int32_t inputControlType,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  InControl_InputControl_array *pIVar2;
  
  if ((DAT_045683dc & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    DAT_045683dc = 1;
  }
  pIVar2 = (__this->fields)._Controls_k__BackingField;
  if (pIVar2 != (InControl_InputControl_array *)0x0) {
    if ((uint)inputControlType < (uint)pIVar2->max_length) {
      pIVar1 = pIVar2->m_Items[inputControlType];
      if (pIVar1 == (InControl_InputControl_o *)0x0) {
        if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar1 = InControl_InputControl_TypeInfo->static_fields->Null;
      }
      return pIVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

