// InControl.InputManager$$InputManager_OnDevicePartDettached @ RVA 0x3215900

void InControl_InputManager__InputManager_OnDevicePartDettached
               (InControl_InputDevice_o *p_device,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *pSVar1;
  
                    /* try { // try from 0331591c to 034159b3 has its CatchHandler @ 0331591c
                       catch() { ... } // from try @ 0331591c with catch @ 0331591c
                       catch() { ... } // from try @ 033159bc with catch @ 0331591c
                       catch() { ... } // from try @ 03315a08 with catch @ 0331591c
                       catch() { ... } // from try @ 03315a2c with catch @ 0331591c
                       catch() { ... } // from try @ 03315a5c with catch @ 0331591c */
  if ((DAT_04566ec2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec2 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pSVar1 = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  if (pSVar1 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0331596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,p_device,(pSVar1->fields).super.super.method
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

