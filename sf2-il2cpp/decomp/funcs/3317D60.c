// MKFAKELPPAC$$NDIOMPEMKCM @ RVA 0x3317D60

System_IObservable_KKEKKPIDGBK__o * MKFAKELPPAC__NDIOMPEMKCM(MethodInfo *method)

{
  System_Func_KKEKKPIDGBK__bool__o **ppSVar1;
  System_IObservable_T__o *pSVar2;
  UniRx_ReactiveProperty_KKEKKPIDGBK__o *source;
  System_Func_KKEKKPIDGBK__bool__o *predicate;
  
  if ((DAT_045677eb & 1) == 0) {
    FUN_01bab630(&System_Func<KKEKKPIDGBK,_bool>_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<KKEKKPIDGBK>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<KKEKKPIDGBK>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_MKFAKELPPAC_<>c_CHHGKIBJGIF__);
    FUN_01bab630(&MKFAKELPPAC_<>c_TypeInfo);
    DAT_045677eb = 1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo);
  }
  source = MKFAKELPPAC_TypeInfo->static_fields->HIINAEEPCDO;
  if ((MKFAKELPPAC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  predicate = MKFAKELPPAC_<>c_TypeInfo->static_fields->__9__38_0;
  if (predicate == (System_Func_KKEKKPIDGBK__bool__o *)0x0) {
    if ((MKFAKELPPAC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = (System_Func_KKEKKPIDGBK__bool__o *)
                thunk_FUN_01bda818(System_Func<KKEKKPIDGBK,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &MKFAKELPPAC_<>c_TypeInfo->static_fields->__9__38_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = UniRx_Observable__Where<object>
                     ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<KKEKKPIDGBK>__);
  pSVar2 = UniRx_Observable__AsObservable<object>
                     (pSVar2,Method_UniRx_Observable_AsObservable<KKEKKPIDGBK>__);
  return (System_IObservable_KKEKKPIDGBK__o *)pSVar2;
}

