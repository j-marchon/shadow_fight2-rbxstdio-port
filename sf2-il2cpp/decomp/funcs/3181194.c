// PNHGEFAOFFE$$MBIACGMCIKI @ RVA 0x3181194

System_IObservable_DGGBFKNKEAH__o *
PNHGEFAOFFE__MBIACGMCIKI(PNHGEFAOFFE_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  System_Func_DGGBFKNKEAH__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  UniRx_BehaviorSubject_DGGBFKNKEAH__o *source;
  System_Func_DGGBFKNKEAH__bool__o *predicate;
  
  if ((DAT_045669bb & 1) == 0) {
    FUN_01bab630(&System_Func<DGGBFKNKEAH,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<DGGBFKNKEAH>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<DGGBFKNKEAH>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_PNHGEFAOFFE_<>c_CPLJOJHIOHF__);
    FUN_01bab630(&PNHGEFAOFFE_<>c_TypeInfo);
    DAT_045669bb = 1;
    method = extraout_x1;
  }
  source = (__this->fields).ELFMJMIENON;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<DGGBFKNKEAH>__);
  if ((PNHGEFAOFFE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNHGEFAOFFE_<>c_TypeInfo);
  }
  predicate = PNHGEFAOFFE_<>c_TypeInfo->static_fields->__9__9_0;
  if (predicate == (System_Func_DGGBFKNKEAH__bool__o *)0x0) {
    if ((PNHGEFAOFFE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNHGEFAOFFE_<>c_TypeInfo);
    }
    predicate = (System_Func_DGGBFKNKEAH__bool__o *)
                thunk_FUN_01bda818(System_Func<DGGBFKNKEAH,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar2 = &PNHGEFAOFFE_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar2 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UniRx_Observable__Where<object>
                     (pSVar1,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<DGGBFKNKEAH>__);
  return (System_IObservable_DGGBFKNKEAH__o *)pSVar1;
}

