// TypeDefIndex 323
// Namespace: InControl
// public class Logger
// Fields:
//   private static Logger.LogMessageHandler OnLogMessage; // 0x0

// ===== public static void add_OnLogMessage(Logger.LogMessageHandler value)  [RVA 0x3349848]
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


// ===== public static void remove_OnLogMessage(Logger.LogMessageHandler value)  [RVA 0x3349900]
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


// ===== public static void LogInfo(string text)  [RVA 0x33499B8]
// InControl.Logger$$LogInfo @ RVA 0x33499B8

void InControl_Logger__LogInfo(System_String_o *text,MethodInfo *method)

{
  InControl_Logger_LogMessageHandler_o *pIVar1;
  System_String_o *local_30;
  ulong local_28;
  
  if ((DAT_045679e5 & 1) == 0) {
    FUN_01bab630(&InControl_Logger_TypeInfo);
    DAT_045679e5 = 1;
  }
  if (InControl_Logger_TypeInfo->static_fields->OnLogMessage !=
      (InControl_Logger_LogMessageHandler_o *)0x0) {
    local_28 = 0;
    local_30 = text;
    thunk_FUN_01c20e04(&local_30,text);
    local_28 = local_28 & 0xffffffff00000000;
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


// ===== public static void LogWarning(string text)  [RVA 0x3349A50]
// InControl.Logger$$LogWarning @ RVA 0x3349A50

void InControl_Logger__LogWarning(System_String_o *text,MethodInfo *method)

{
  InControl_Logger_LogMessageHandler_o *pIVar1;
  System_String_o *local_30;
  undefined8 local_28;
  
  if ((DAT_045679e6 & 1) == 0) {
    FUN_01bab630(&InControl_Logger_TypeInfo);
    DAT_045679e6 = 1;
  }
  if (InControl_Logger_TypeInfo->static_fields->OnLogMessage !=
      (InControl_Logger_LogMessageHandler_o *)0x0) {
    local_28 = 0;
    local_30 = text;
    thunk_FUN_01c20e04(&local_30,text);
    local_28 = CONCAT44(local_28._4_4_,1);
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


// ===== public static void LogError(string text)  [RVA 0x3349AEC]
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


// ===== public void .ctor()  [RVA 0x3349B88]
// InControl.Logger$$.ctor @ RVA 0x3349B88

void InControl_Logger___ctor(InControl_Logger_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

