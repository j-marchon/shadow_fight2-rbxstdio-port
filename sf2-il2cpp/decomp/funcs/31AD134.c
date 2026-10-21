// FBAABPGMPCC$$EJLMIBHJDFF @ RVA 0x31AD134

System_IObservable_KHODJHFHCDE__o *
FBAABPGMPCC__EJLMIBHJDFF(FBAABPGMPCC_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_KHODJHFHCDE__o *source;
  
  if ((DAT_04566b57 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<KHODJHFHCDE>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04566b57 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).NIFBGEKEBGF;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<KHODJHFHCDE>__);
  return (System_IObservable_KHODJHFHCDE__o *)pSVar1;
}

