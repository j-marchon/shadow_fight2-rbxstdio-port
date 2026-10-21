// DODIFOIEPLP$$KMNMAAMFCEI @ RVA 0x33A13C8

System_IObservable_Unit__o * DODIFOIEPLP__KMNMAAMFCEI(DODIFOIEPLP_o *__this,MethodInfo *method)

{
  System_Func_IObserver_Unit___IDisposable__o **ppSVar1;
  System_IObservable_T__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Func_IObserver_Unit___IDisposable__o *subscribe;
  
  if ((DAT_04567cb9 & 1) == 0) {
    FUN_01bab630(&System_Func<IObserver<Unit>,_IDisposable>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_Create<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_DODIFOIEPLP_<>c_MPJHDKFCNEA__);
    FUN_01bab630(&DODIFOIEPLP_<>c_TypeInfo);
    DAT_04567cb9 = 1;
    method = extraout_x1;
  }
  if ((DODIFOIEPLP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DODIFOIEPLP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  subscribe = DODIFOIEPLP_<>c_TypeInfo->static_fields->__9__3_0;
  if (subscribe == (System_Func_IObserver_Unit___IDisposable__o *)0x0) {
    if ((DODIFOIEPLP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DODIFOIEPLP_<>c_TypeInfo,method);
    }
    subscribe = (System_Func_IObserver_Unit___IDisposable__o *)
                thunk_FUN_01bda818(System_Func<IObserver<Unit>,_IDisposable>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar1 = &DODIFOIEPLP_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = subscribe;
    thunk_FUN_01c20e04(ppSVar1,subscribe);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar2 = UniRx_Observable__Create<Unit>
                     ((System_Func_IObserver_T___IDisposable__o *)subscribe,
                      Method_UniRx_Observable_Create<Unit>__);
  return (System_IObservable_Unit__o *)pSVar2;
}

