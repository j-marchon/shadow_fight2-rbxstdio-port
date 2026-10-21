// IDDIABHBDEE$$GIMAJOGGBHM @ RVA 0x3387E70

void IDDIABHBDEE__GIMAJOGGBHM(IDDIABHBDEE_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  Il2CppObject *pIVar2;
  System_IObservable_bool__o *source;
  System_Func_bool__bool__o **ppSVar3;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Action_o *disposeAction;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_04567baf & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_IDDIABHBDEE_MNAHBIMHPKI__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_IDDIABHBDEE_<>c_CONHPLELKPF__);
    FUN_01bab630(&Method_IDDIABHBDEE_<>c_KNOJFFAPEKA__);
    FUN_01bab630(&IDDIABHBDEE_<>c_TypeInfo);
    DAT_04567baf = 1;
    method = extraout_x1;
  }
  if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  disposeAction = IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__32_0;
  if (disposeAction == (System_Action_o *)0x0) {
    if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo,method);
    }
    disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__32_0;
    *ppSVar1 = disposeAction;
    thunk_FUN_01c20e04(ppSVar1,disposeAction);
    method = extraout_x1_01;
  }
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo,method);
  }
  pIVar2 = (Il2CppObject *)UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__EveryApplicationPause((MethodInfo *)0x0);
  if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo);
  }
  predicate = IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__32_1;
  if (predicate == (System_Func_bool__bool__o *)0x0) {
    if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo);
    }
    predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
    System_Func<bool,_bool>___ctor();
    ppSVar3 = &IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__32_1;
    *ppSVar3 = predicate;
    thunk_FUN_01c20e04(ppSVar3,predicate);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source_00 = UniRx_Observable__Where<bool>
                        ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                         Method_UniRx_Observable_Where<bool>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  pIVar2 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<bool>
                     (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

