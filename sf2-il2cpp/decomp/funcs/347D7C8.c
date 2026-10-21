// KPLJFEEMAOH$$AACOKOOGPMC @ RVA 0x347D7C8

System_IObservable_HCBNEFEHCBM__o *
KPLJFEEMAOH__AACOKOOGPMC(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_HCBNEFEHCBM__o *source;
  
                    /* try { // try from 0357d7cc to 0367d7d7 has its CatchHandler @ 0357da8c */
  if ((DAT_04568365 & 1) == 0) {
                    /* try { // try from 0357d7e8 to 0367d7ef has its CatchHandler @ 0357da90 */
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
                    /* try { // try from 0357d7f8 to 0367d7ff has its CatchHandler @ 0357dabc */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568365 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0357d810 to 0367d817 has its CatchHandler @ 0357da84 */
  source = (__this->fields).OAGOJKAFAEA;
                    /* try { // try from 0357d81c to 0367d823 has its CatchHandler @ 0357da88 */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
                    /* try { // try from 0357d834 to 0367d83b has its CatchHandler @ 0357daf4 */
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<HCBNEFEHCBM>__);
  return (System_IObservable_HCBNEFEHCBM__o *)pSVar1;
}

