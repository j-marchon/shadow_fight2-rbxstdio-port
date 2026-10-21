// TypeDefIndex 2666
// Namespace: 
// [CompilerGenerated]
// private sealed class Server.GEBPLEKAGHN
// Fields:
//   public Task<HttpListenerContext> task; // 0x10

// ===== internal bool KOPPHCADDCB()  [RVA 0x33C1928]
// CUDLR.Server.GEBPLEKAGHN$$KOPPHCADDCB @ RVA 0x33C1928

bool CUDLR_Server_GEBPLEKAGHN__KOPPHCADDCB(CUDLR_Server_GEBPLEKAGHN_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Threading_Tasks_Task_HttpListenerContext__o *__this_00;
  
  __this_00 = (__this->fields).task;
  if (__this_00 != (System_Threading_Tasks_Task_HttpListenerContext__o *)0x0) {
    bVar1 = System_Threading_Tasks_Task__get_IsCompleted
                      ((System_Threading_Tasks_Task_o *)__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33C1944]
// CUDLR.Server.GEBPLEKAGHN$$.ctor @ RVA 0x33C1944

void CUDLR_Server_GEBPLEKAGHN___ctor(CUDLR_Server_GEBPLEKAGHN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

