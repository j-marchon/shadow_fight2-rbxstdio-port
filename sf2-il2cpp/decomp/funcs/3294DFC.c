// LGPCBNIFHNN$$DPGBEJBEBPD @ RVA 0x3294DFC

void LGPCBNIFHNN__DPGBEJBEBPD
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_o *CEDLNMHKAAI,MethodInfo *method)

{
  System_EventHandler_MessageReceivedEventArgs__o *value;
  System_Threading_Tasks_Task_string__o *task;
  System_Action_Task_T___o *continuation;
  MethodInfo *in_x3;
  System_Action_o *pSVar1;
  
  if ((DAT_0456735c & 1) == 0) {
    FUN_01bab630(&System_Action<Task<string>>_TypeInfo);
    FUN_01bab630(&System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_CLOAADIFLBI__);
    FUN_01bab630(&Method_LGPCBNIFHNN_GHKLIKABHCD__);
    FUN_01bab630(&Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<string>__);
    FUN_01bab630(&StringLiteral_11277);
    DAT_0456735c = 1;
  }
  LGPCBNIFHNN__JFNOJHNGDFB(__this,CEDLNMHKAAI,StringLiteral_11277,in_x3);
  pSVar1 = (__this->fields).BIFPFOCAPFD;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
  }
  value = (System_EventHandler_MessageReceivedEventArgs__o *)
          thunk_FUN_01bda818(System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
  System_EventHandler<object>___ctor();
  Firebase_Messaging_FirebaseMessaging__add_MessageReceived(value,(MethodInfo *)0x0);
  task = Firebase_Messaging_FirebaseMessaging__GetTokenAsync((MethodInfo *)0x0);
  continuation = (System_Action_Task_T___o *)
                 thunk_FUN_01bda818(System_Action<Task<string>>_TypeInfo);
  System_Action<object>___ctor();
  Firebase_Extensions_TaskExtension__ContinueWithOnMainThread<object>
            ((System_Threading_Tasks_Task_T__o *)task,continuation,
             Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<string>__);
  return;
}

