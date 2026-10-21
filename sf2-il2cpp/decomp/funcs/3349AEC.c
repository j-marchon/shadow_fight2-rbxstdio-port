// InControl.Logger$$LogError @ RVA 0x3349AEC

void InControl_Logger__LogError(System_String_o *text,MethodInfo *method)

{
  InControl_Logger_LogMessageHandler_o *pIVar1;
  System_String_o *local_30;
  undefined8 local_28;
  
  if ((DAT_045679e7 & 1) == 0) {
    FUN_01bab630(&InControl_Logger_TypeInfo);
    DAT_045679e7 = 1;
  }
  if (InControl_Logger_TypeInfo->static_fields->OnLogMessage !=
      (InControl_Logger_LogMessageHandler_o *)0x0) {
    local_28 = 0;
    local_30 = text;
    thunk_FUN_01c20e04(&local_30,text);
    local_28 = CONCAT44(local_28._4_4_,2);
    pIVar1 = InControl_Logger_TypeInfo->static_fields->OnLogMessage;
    if (pIVar1 == (InControl_Logger_LogMessageHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(code *)(pIVar1->fields).super.super.invoke_impl)
              ((pIVar1->fields).super.super.method_code,local_30,local_28,
               (pIVar1->fields).super.super.method);
  }
  return;
}

