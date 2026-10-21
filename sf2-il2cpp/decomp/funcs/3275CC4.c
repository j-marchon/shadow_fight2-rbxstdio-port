// AJMOIOIBPGP$$CJJPGMCEFIN @ RVA 0x3275CC4

void AJMOIOIBPGP__CJJPGMCEFIN(AJMOIOIBPGP_o *__this,DGGBFKNKEAH_o *PDKOFIOIOFD,MethodInfo *method)

{
  System_IObservable_CFEFALDOEMD__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  DGGBFKNKEAH_o **ppDVar1;
  
  if ((DAT_04567243 & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_KOOHANBJIIG__);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    FUN_01bab630(&StringLiteral_7539);
    DAT_04567243 = 1;
  }
  ppDVar1 = &(__this->fields).FHCHDOILFGE;
  if (*ppDVar1 != (DGGBFKNKEAH_o *)0x0) {
    return;
  }
  *ppDVar1 = PDKOFIOIOFD;
  thunk_FUN_01c20e04(ppDVar1,PDKOFIOIOFD);
  if (*ppDVar1 != (DGGBFKNKEAH_o *)0x0) {
    source = LKHEKMAGHDH__MBNHFJCHHAH(PDKOFIOIOFD,(MethodInfo *)0x0);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
    System_Action<object>___ctor();
    disposable = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           ((System_IObservable_T__o *)source,onNext,
                            Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,
               (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE
               ,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_7539,(MethodInfo *)0x0);
  return;
}

