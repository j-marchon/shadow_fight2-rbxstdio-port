// AJNFLEPFBJG$$AACOKOOGPMC @ RVA 0x35685DC

System_IObservable_HCBNEFEHCBM__o *
AJNFLEPFBJG__AACOKOOGPMC(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_HCBNEFEHCBM__o *source;
  
  if ((DAT_04568c0c & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568c0c = 1;
    method = extraout_x1;
  }
  source = (__this->fields).POPPKIFIINN;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
  return (System_IObservable_HCBNEFEHCBM__o *)pSVar1;
}

