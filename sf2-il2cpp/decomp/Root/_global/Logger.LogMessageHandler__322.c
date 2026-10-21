// TypeDefIndex 322
// Namespace: 
// public sealed class Logger.LogMessageHandler : MulticastDelegate
// Fields:

// ===== public void .ctor(object object, IntPtr method)  [RVA 0x3349B90]
// InControl.Logger.LogMessageHandler$$.ctor @ RVA 0x3349B90

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void InControl_Logger_LogMessageHandler___ctor(void)

{
  char cVar1;
  long in_x0;
  ulong uVar2;
  long in_x1;
  long in_x2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(in_x2 + 8);
  *(long *)(in_x0 + 0x28) = in_x2;
  *(undefined8 *)(in_x0 + 0x10) = uVar3;
  *(long *)(in_x0 + 0x20) = in_x1;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(in_x2 + 0x52);
  *(long *)(in_x0 + 0x40) = in_x0;
  uVar2 = FUN_01bab730();
  if ((uVar2 & 1) == 0) {
    if (in_x1 == 0) {
      uVar3 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(in_x0 + 0x18) = FUN_01b48dd4;
    goto LAB_03449bfc;
  }
  *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(in_x0 + 0x10);
  *(undefined8 *)(in_x0 + 0x40) = *(undefined8 *)(in_x0 + 0x20);
LAB_03449bfc:
  *(code **)(in_x0 + 0x38) = FUN_01b48d7c;
  return;
}


// ===== public virtual void Invoke(LogMessage message)  [RVA 0x3349C30]
// InControl.Logger.LogMessageHandler$$Invoke @ RVA 0x3349C30

void InControl_Logger_LogMessageHandler__Invoke
               (InControl_Logger_LogMessageHandler_o *__this,InControl_LogMessage_o message,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x03449c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,message.fields.text,message.fields._8_8_,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(LogMessage message, AsyncCallback callback, object object)  [RVA 0x3349C44]
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


// ===== public virtual void EndInvoke(IAsyncResult result)  [RVA 0x3349CC8]
// InControl.Logger.LogMessageHandler$$EndInvoke @ RVA 0x3349CC8

void InControl_Logger_LogMessageHandler__EndInvoke
               (InControl_Logger_LogMessageHandler_o *__this,System_IAsyncResult_o *result,
               MethodInfo *method)

{
  thunk_FUN_01baa628(result,0);
  return;
}

