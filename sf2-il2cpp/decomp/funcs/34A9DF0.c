// OCGKEHHBDOA$$NKLGCNHLBAF @ RVA 0x34A9DF0

void OCGKEHHBDOA__NKLGCNHLBAF(OCGKEHHBDOA_o *__this,MethodInfo *method)

{
  System_Threading_CancellationToken_o NPAAFDINGAB;
  System_Func_CancellationToken__UniTask__o *MMPKKCGBFAK;
  UniRx_Async_UniTask_o task;
  
  if ((DAT_04568517 & 1) == 0) {
    FUN_01bab630(&Method_System_Func<CancellationToken,_UniTask>_Invoke__);
    FUN_01bab630(&System_Func<CancellationToken,_UniTask>_TypeInfo);
    DAT_04568517 = 1;
  }
  NPAAFDINGAB = IHELGNOGAOE__KNPNGGFPCHG((IHELGNOGAOE_o *)__this,(MethodInfo *)0x0);
  MMPKKCGBFAK = (System_Func_CancellationToken__UniTask__o *)
                thunk_FUN_01bda818(System_Func<CancellationToken,_UniTask>_TypeInfo);
  System_Func<CancellationToken,_UniTask>___ctor();
  task = IHELGNOGAOE__JMJHECILDBJ((IHELGNOGAOE_o *)__this,MMPKKCGBFAK,NPAAFDINGAB,(MethodInfo *)0x0)
  ;
  UniRx_Async_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}

