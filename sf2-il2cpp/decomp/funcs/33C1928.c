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

