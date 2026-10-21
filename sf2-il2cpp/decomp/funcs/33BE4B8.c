// CUDLR.Server$$LOPJACDNMJF @ RVA 0x33BE4B8

void CUDLR_Server__LOPJACDNMJF(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Func_IEnumerator__o *coroutine;
  System_IObservable_Unit__o *source;
  System_Action_Unit__o **ppSVar1;
  System_Action_Exception__o *onError;
  System_IDisposable_o *value;
  MethodInfo *extraout_x1;
  UniRx_SerialDisposable_o *__this_00;
  System_Action_Unit__o *onNext;
  
  if ((DAT_04567dd4 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&System_Func<IEnumerator>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_CUDLR_Server_MAHADHJPLBL__);
    FUN_01bab630(&Method_CUDLR_Server_OLNLDLIKIKO__);
    FUN_01bab630(&Method_CUDLR_Server_<>c_MJMOMEBJKCM__);
    FUN_01bab630(&CUDLR_Server_<>c_TypeInfo);
    DAT_04567dd4 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NBCJIGKEOGO;
  coroutine = (System_Func_IEnumerator__o *)
              thunk_FUN_01bda818(System_Func<IEnumerator>_TypeInfo,method);
  System_Func<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromCoroutine(coroutine,false,(MethodInfo *)0x0);
  if ((CUDLR_Server_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CUDLR_Server_<>c_TypeInfo);
  }
  onNext = CUDLR_Server_<>c_TypeInfo->static_fields->__9__45_0;
  if (onNext == (System_Action_Unit__o *)0x0) {
    if ((CUDLR_Server_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CUDLR_Server_<>c_TypeInfo);
    }
    onNext = (System_Action_Unit__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    ppSVar1 = &CUDLR_Server_<>c_TypeInfo->static_fields->__9__45_0;
    *ppSVar1 = onNext;
    thunk_FUN_01c20e04(ppSVar1,onNext);
  }
  onError = (System_Action_Exception__o *)thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
  System_Action<object>___ctor();
  value = UniRx_ObservableExtensions__Subscribe<Unit>
                    ((System_IObservable_T__o *)source,(System_Action_T__o *)onNext,onError,
                     Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

