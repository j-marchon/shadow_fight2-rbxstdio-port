// InControl.InputManager$$DevicePartWasDetached @ RVA 0x3217324

void InControl_InputManager__DevicePartWasDetached
               (InControl_InputDevice_o *device,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *pSVar1;
  
  if ((DAT_04566ed6 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ed6 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pSVar1 = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  if (pSVar1 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03317390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,device,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

