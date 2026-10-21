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

