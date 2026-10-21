// InControl.InputDevice$$AddControl @ RVA 0x348B6C4

InControl_InputControl_o *
InControl_InputDevice__AddControl
          (InControl_InputDevice_o *__this,int32_t inputControlType,System_String_o *handle,
          MethodInfo *method)

{
  InControl_InputControl_o *__this_00;
  long lVar1;
  undefined8 uVar2;
  InControl_InputControl_array *pIVar3;
  
  if ((DAT_045683df & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    DAT_045683df = 1;
  }
  __this_00 = (InControl_InputControl_o *)thunk_FUN_01bda818(InControl_InputControl_TypeInfo);
  InControl_InputControl___ctor(__this_00,handle,inputControlType,(MethodInfo *)0x0);
  pIVar3 = (__this->fields)._Controls_k__BackingField;
  if (pIVar3 != (InControl_InputControl_array *)0x0) {
    if ((__this_00 != (InControl_InputControl_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(__this_00,(((pIVar3->obj).klass)->_1).element_class), lVar1 == 0)
       ) {
      uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar2,0);
    }
    if ((uint)inputControlType < (uint)pIVar3->max_length) {
      pIVar3->m_Items[inputControlType] = __this_00;
      thunk_FUN_01c20e04(pIVar3->m_Items + inputControlType,__this_00);
      return __this_00;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

