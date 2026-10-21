// NHOILKKCIMI$$GIMAJOGGBHM @ RVA 0x33D0030

void NHOILKKCIMI__GIMAJOGGBHM(NHOILKKCIMI_o *__this,MethodInfo *method)

{
  System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o **ppSVar1;
  System_Action_Application_LogCallback__o **ppSVar2;
  System_IObservable_TEventArgs__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o *conversion;
  System_Action_Application_LogCallback__o *addHandler;
  System_Action_Application_LogCallback__o *removeHandler;
  
  if ((DAT_04567e55 & 1) == 0) {
    FUN_01bab630(&System_Action<Application_LogCallback>_TypeInfo);
    FUN_01bab630(&System_Action<NHOILKKCIMI_BGFGPENCLEA>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<Action<NHOILKKCIMI_BGFGPENCLEA>,_Application_LogCallback>_TypeInfo);
    FUN_01bab630(&System_Func<NHOILKKCIMI_BGFGPENCLEA,_bool>_TypeInfo);
    FUN_01bab630(&Method_NHOILKKCIMI_FAENACIILOH__);
    FUN_01bab630(&Method_NHOILKKCIMI_KHJFFKKHPLA__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<NHOILKKCIMI_BGFGPENCLEA>__);
    FUN_01bab630(&
                 Method_UniRx_Observable_FromEvent<Application_LogCallback,_NHOILKKCIMI_BGFGPENCLEA>__
                );
    FUN_01bab630(&Method_UniRx_Observable_Where<NHOILKKCIMI_BGFGPENCLEA>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_NHOILKKCIMI_<>c_EJCCNALLMGH__);
    FUN_01bab630(&Method_NHOILKKCIMI_<>c_IBCEAIKMPAB__);
    FUN_01bab630(&Method_NHOILKKCIMI_<>c_OAIAFKMMCFB__);
    FUN_01bab630(&NHOILKKCIMI_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_7529);
    DAT_04567e55 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  conversion = NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_0;
  if (conversion == (System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o *)0x0)
  {
    if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    conversion = (System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o *)
                 thunk_FUN_01bda818(
                                   System_Func<Action<NHOILKKCIMI_BGFGPENCLEA>,_Application_LogCallback>_TypeInfo
                                   );
    System_Func<object,_object>___ctor();
    ppSVar1 = &NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = conversion;
    thunk_FUN_01c20e04(ppSVar1,conversion);
  }
  if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  addHandler = NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_1;
  if (addHandler == (System_Action_Application_LogCallback__o *)0x0) {
    if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = (System_Action_Application_LogCallback__o *)
                 thunk_FUN_01bda818(System_Action<Application_LogCallback>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_1;
    *ppSVar2 = addHandler;
    thunk_FUN_01c20e04(ppSVar2,addHandler);
  }
  if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  removeHandler = NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_2;
  if (removeHandler == (System_Action_Application_LogCallback__o *)0x0) {
    if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034d0260 to 035d0357 has its CatchHandler @ 034d0260
                       catch() { ... } // from try @ 034d0260 with catch @ 034d0260
                       catch() { ... } // from try @ 034d0380 with catch @ 034d0260
                       catch() { ... } // from try @ 034d03b0 with catch @ 034d0260
                       catch() { ... } // from try @ 034d03dc with catch @ 034d0260
                       catch() { ... } // from try @ 034d0448 with catch @ 034d0260 */
      thunk_FUN_01ba7564();
    }
    removeHandler =
         (System_Action_Application_LogCallback__o *)
         thunk_FUN_01bda818(System_Action<Application_LogCallback>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_2;
    *ppSVar2 = removeHandler;
    thunk_FUN_01c20e04(ppSVar2,removeHandler);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromEvent<object,_object>
                     ((System_Func_Action_TEventArgs___TDelegate__o *)conversion,
                      (System_Action_TDelegate__o *)addHandler,
                      (System_Action_TDelegate__o *)removeHandler,
                      Method_UniRx_Observable_FromEvent<Application_LogCallback,_NHOILKKCIMI_BGFGPENCLEA>__
                     );
  predicate = (System_Func_T__bool__o *)
              thunk_FUN_01bda818(System_Func<NHOILKKCIMI_BGFGPENCLEA,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  source_00 = UniRx_Observable__Where<object>
                        ((System_IObservable_T__o *)source,predicate,
                         Method_UniRx_Observable_Where<NHOILKKCIMI_BGFGPENCLEA>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<NHOILKKCIMI_BGFGPENCLEA>_TypeInfo)
  ;
                    /* try { // try from 034d0358 to 035d035f has its CatchHandler @ 034d03c0 */
  System_Action<object>___ctor();
                    /* try { // try from 034d036c to 035d0373 has its CatchHandler @ 034d03b4 */
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (source_00,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<NHOILKKCIMI_BGFGPENCLEA>__);
                    /* try { // try from 034d0374 to 035d037f has its CatchHandler @ 034d03b8 */
                    /* try { // try from 034d0380 to 035d03ab has its CatchHandler @ 034d0260 */
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

