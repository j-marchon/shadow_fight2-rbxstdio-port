// InControl.Logger$$remove_OnLogMessage @ RVA 0x3349900

void InControl_Logger__remove_OnLogMessage
               (InControl_Logger_LogMessageHandler_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  InControl_Logger_LogMessageHandler_o *pIVar3;
  InControl_Logger_LogMessageHandler_o *source;
  
  if ((DAT_045679e4 & 1) == 0) {
    FUN_01bab630(&InControl_Logger_LogMessageHandler_TypeInfo);
    FUN_01bab630(&InControl_Logger_TypeInfo);
    DAT_045679e4 = 1;
  }
  source = InControl_Logger_TypeInfo->static_fields->OnLogMessage;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)value,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((InControl_Logger_LogMessageHandler_c *)pSVar2->klass ==
          InControl_Logger_LogMessageHandler_TypeInfo))) {
    pIVar3 = (InControl_Logger_LogMessageHandler_o *)
             FUN_01c07368(InControl_Logger_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source == pIVar3;
    source = pIVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

