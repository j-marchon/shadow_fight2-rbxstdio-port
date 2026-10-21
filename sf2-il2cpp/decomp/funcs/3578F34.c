// Core.Network.ServerProvider$$StopLogin @ RVA 0x3578F34

void Core_Network_ServerProvider__StopLogin
               (Core_Network_ServerProvider_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  
  ppSVar1 = &(__this->fields).NFKICCFOJDC;
  if (*ppSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Cancel(*ppSVar1,(MethodInfo *)0x0);
    if (*ppSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Dispose(*ppSVar1,(MethodInfo *)0x0);
    }
  }
  *ppSVar1 = (System_Threading_CancellationTokenSource_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}

