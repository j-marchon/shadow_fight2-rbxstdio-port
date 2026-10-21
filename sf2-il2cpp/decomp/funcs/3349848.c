// InControl.Logger$$add_OnLogMessage @ RVA 0x3349848

void InControl_Logger__add_OnLogMessage
               (InControl_Logger_LogMessageHandler_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  InControl_Logger_LogMessageHandler_o *pIVar3;
  InControl_Logger_LogMessageHandler_o *a;
  
  if ((DAT_045679e3 & 1) == 0) {
    FUN_01bab630(&InControl_Logger_LogMessageHandler_TypeInfo);
    FUN_01bab630(&InControl_Logger_TypeInfo);
    DAT_045679e3 = 1;
  }
  a = InControl_Logger_TypeInfo->static_fields->OnLogMessage;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((InControl_Logger_LogMessageHandler_c *)pSVar2->klass ==
          InControl_Logger_LogMessageHandler_TypeInfo))) {
    pIVar3 = (InControl_Logger_LogMessageHandler_o *)
             FUN_01c07368(InControl_Logger_TypeInfo->static_fields,pSVar2,a);
    bVar1 = a == pIVar3;
    a = pIVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

