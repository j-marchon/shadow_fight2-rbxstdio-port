// LGPCBNIFHNN$$Dispose @ RVA 0x3295C44

void LGPCBNIFHNN__Dispose(LGPCBNIFHNN_o *__this,MethodInfo *method)

{
  System_EventHandler_MessageReceivedEventArgs__o *value;
  
  if ((DAT_04567365 & 1) == 0) {
    FUN_01bab630(&System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_CLOAADIFLBI__);
    FUN_01bab630(&LGPCBNIFHNN_TypeInfo);
    FUN_01bab630(&StringLiteral_5422);
    DAT_04567365 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422,(MethodInfo *)0x0);
  LGPCBNIFHNN_TypeInfo->static_fields->IDKDPGDCJGO = (Firebase_FirebaseApp_o *)0x0;
  thunk_FUN_01c20e04(LGPCBNIFHNN_TypeInfo->static_fields,0);
  value = (System_EventHandler_MessageReceivedEventArgs__o *)
          thunk_FUN_01bda818(System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
  System_EventHandler<object>___ctor();
  Firebase_Messaging_FirebaseMessaging__remove_MessageReceived(value,(MethodInfo *)0x0);
  return;
}

