// FLFPJEKOAMK$$KBFGMPBOELJ @ RVA 0x32CE478

System_IObservable_bool__o * FLFPJEKOAMK__KBFGMPBOELJ(FLFPJEKOAMK_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_bool__o *source;
  
  if ((DAT_04567539 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567539 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).DOPGFNMCDEA;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<bool>
                     ((System_IObservable_T__o *)source,Method_UniRx_Observable_AsObservable<bool>__
                     );
  return (System_IObservable_bool__o *)pSVar1;
}

