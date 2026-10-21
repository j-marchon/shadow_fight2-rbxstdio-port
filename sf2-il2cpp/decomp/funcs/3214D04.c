// InControl.InputManager$$add_OnDevicePartWasDetached @ RVA 0x3214D04

void InControl_InputManager__add_OnDevicePartWasDetached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
  if ((DAT_04566eb7 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb7 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached,
                          lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

