// FJNIPMODEPO$$GIMAJOGGBHM @ RVA 0x30356A0

void FJNIPMODEPO__GIMAJOGGBHM(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  
  if ((DAT_04565d39 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_FJNIPMODEPO_EJCCNALLMGH__);
    FUN_01bab630(&Method_FJNIPMODEPO_IBCEAIKMPAB__);
    FUN_01bab630(&Method_FJNIPMODEPO_OAIAFKMMCFB__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7529);
    DAT_04565d39 = 1;
  }
  if ((__this->fields).ANHKEJLOCNB != false) {
    return;
  }
  (__this->fields).ANHKEJLOCNB = true;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
  System_Action<object>___ctor();
  removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
  System_Action<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

