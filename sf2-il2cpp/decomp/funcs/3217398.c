// InControl.InputManager$$ChangeDeviceStyle @ RVA 0x3217398

void InControl_InputManager__ChangeDeviceStyle(InControl_InputDevice_o *device,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *pSVar1;
  
  if ((DAT_04566ed7 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 033173c4 to 034173eb has its CatchHandler @ 033175a8 */
    DAT_04566ed7 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pSVar1 = InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  if (pSVar1 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03317404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,device,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

