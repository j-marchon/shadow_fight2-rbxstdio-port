// DODIFOIEPLP$$KHNBAJIGOMA @ RVA 0x33A196C

void DODIFOIEPLP__KHNBAJIGOMA(DODIFOIEPLP_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  DODIFOIEPLP_o *__this_00;
  
  method_00 = (MethodInfo *)(ulong)HOKBHLPPCAH;
  __this_00 = __this;
  if ((DAT_04567cbc & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_DODIFOIEPLP_GFEADAEMHII__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    auVar1 = FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    method_00 = auVar1._8_8_;
    __this_00 = auVar1._0_8_;
    DAT_04567cbc = 1;
  }
  source = DODIFOIEPLP__KMNMAAMFCEI(__this_00,method_00);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).KGCEDNDGKAD,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

