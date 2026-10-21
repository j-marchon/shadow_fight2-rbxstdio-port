// CNNAMJDOPFI$$PEGKGIADJAE @ RVA 0x34C5698

System_IObservable_string____o * CNNAMJDOPFI__PEGKGIADJAE(CNNAMJDOPFI_o *__this,MethodInfo *method)

{
  System_Func_IObserver_T___IDisposable__o *subscribe;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568633 & 1) == 0) {
    FUN_01bab630(&Method_CNNAMJDOPFI_NHEMBDBNNCM__);
    FUN_01bab630(&System_Func<IObserver<string[]>,_IDisposable>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_Create<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568633 = 1;
    method = extraout_x1;
  }
  subscribe = (System_Func_IObserver_T___IDisposable__o *)
              thunk_FUN_01bda818(System_Func<IObserver<string[]>,_IDisposable>_TypeInfo,method);
  System_Func<object,_object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UniRx_Observable__Create<object>(subscribe,Method_UniRx_Observable_Create<string[]>__);
  return (System_IObservable_string____o *)pSVar1;
}

