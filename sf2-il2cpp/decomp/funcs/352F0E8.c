// KIKKFANOJDC$$PEGKGIADJAE @ RVA 0x352F0E8

System_IObservable_string____o * KIKKFANOJDC__PEGKGIADJAE(KIKKFANOJDC_o *__this,MethodInfo *method)

{
  System_Func_IObserver_T___IDisposable__o *subscribe;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0362f0e8 to 0372f17b has its CatchHandler @ 0362f0e8
                       catch() { ... } // from try @ 0362f0e8 with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f198 with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f1bc with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f1e4 with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f224 with catch @ 0362f0e8 */
  if ((DAT_04568a4a & 1) == 0) {
    FUN_01bab630(&System_Func<IObserver<string[]>,_IDisposable>_TypeInfo);
    FUN_01bab630(&Method_KIKKFANOJDC_FBBKEBJIHAN__);
    FUN_01bab630(&Method_UniRx_Observable_Create<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568a4a = 1;
    method = extraout_x1;
  }
  subscribe = (System_Func_IObserver_T___IDisposable__o *)
              thunk_FUN_01bda818(System_Func<IObserver<string[]>,_IDisposable>_TypeInfo,method);
  System_Func<object,_object>___ctor();
                    /* try { // try from 0362f17c to 0372f183 has its CatchHandler @ 0362f1c8 */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0362f190 to 0372f197 has its CatchHandler @ 0362f1c4 */
                    /* try { // try from 0362f198 to 0372f1b7 has its CatchHandler @ 0362f0e8 */
  pSVar1 = UniRx_Observable__Create<object>(subscribe,Method_UniRx_Observable_Create<string[]>__);
  return (System_IObservable_string____o *)pSVar1;
}

