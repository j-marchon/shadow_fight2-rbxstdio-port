// InControl.InputManager$$remove_OnSetup @ RVA 0x3214488

void InControl_InputManager__remove_OnSetup(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
  if ((DAT_04566eae & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eae = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnSetup;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnSetup,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}

