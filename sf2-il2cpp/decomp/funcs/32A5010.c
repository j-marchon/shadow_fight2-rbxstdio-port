// GDGNDNPEHIG$$GIMAJOGGBHM @ RVA 0x32A5010

void GDGNDNPEHIG__GIMAJOGGBHM(GDGNDNPEHIG_o *__this,MethodInfo *method)

{
  System_IObservable_OHAHOONNEIC__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  
  if ((DAT_045673e6 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<OHAHOONNEIC,_bool>_TypeInfo);
    FUN_01bab630(&Method_GDGNDNPEHIG_BEDDKHEOMPA__);
    FUN_01bab630(&Method_GDGNDNPEHIG_PHLOMKFNCBJ__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<OHAHOONNEIC>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045673e6 = 1;
  }
  source = CLDGCKOKINJ__HHLMIGDFBMO((__this->fields).CGBEFGDEDKH,(MethodInfo *)0x0);
  predicate = (System_Func_T__bool__o *)thunk_FUN_01bda818(System_Func<OHAHOONNEIC,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source_00 = UniRx_Observable__Where<object>
                        ((System_IObservable_T__o *)source,predicate,
                         Method_UniRx_Observable_Where<OHAHOONNEIC>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<OHAHOONNEIC>_TypeInfo);
  System_Action<object>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (source_00,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<OHAHOONNEIC>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

