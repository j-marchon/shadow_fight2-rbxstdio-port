// InControl.Logger.LogMessageHandler$$BeginInvoke @ RVA 0x3349C44

System_IAsyncResult_o *
InControl_Logger_LogMessageHandler__BeginInvoke
          (InControl_Logger_LogMessageHandler_o *__this,InControl_LogMessage_o message,
          System_AsyncCallback_o *callback,Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  System_String_o *local_40;
  undefined8 uStack_38;
  
  uStack_38 = message.fields._8_8_;
  local_40 = message.fields.text;
  if ((DAT_045679e8 & 1) == 0) {
    FUN_01bab630(&InControl_LogMessage_TypeInfo);
    DAT_045679e8 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_50 = thunk_FUN_01bda448(InControl_LogMessage_TypeInfo,&local_40);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_50,callback,object);
  return pSVar1;
}

