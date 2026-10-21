// InControl.InputManager$$remove_OnUpdate @ RVA 0x3214658

void InControl_InputManager__remove_OnUpdate
               (System_Action_ulong__float__o *value,MethodInfo *method)

{
  System_Action_ulong__float__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ulong__float__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_ulong__float__o *source;
  
  if ((DAT_04566eb0 & 1) == 0) {
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb0 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<ulong,_float>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ulong,_float>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_ulong__float__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnUpdate,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

