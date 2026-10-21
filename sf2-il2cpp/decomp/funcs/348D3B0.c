// KICJDJCJLKJ$$GIMAJOGGBHM @ RVA 0x348D3B0

void KICJDJCJLKJ__GIMAJOGGBHM(KICJDJCJLKJ_o *__this,MethodInfo *method)

{
  System_IObservable_KKEKKPIDGBK__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  KICJDJCJLKJ_AIKDHBPGCGN_o *pKVar1;
  
                    /* try { // try from 0358d3d4 to 0368d3eb has its CatchHandler @ 0358d428 */
  if ((DAT_045683ef & 1) == 0) {
    FUN_01bab630(&System_Action<KKEKKPIDGBK>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0358d400 to 0368d403 has its CatchHandler @ 0358d430 */
                    /* try { // try from 0358d404 to 0368d41b has its CatchHandler @ 0358d260 */
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
    FUN_01bab630(&Method_KICJDJCJLKJ_OAAMAAEBGBJ__);
                    /* try { // try from 0358d41c to 0368d41f has its CatchHandler @ 0358d434 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
                    /* try { // try from 0358d420 to 0368d423 has its CatchHandler @ 0358d43c */
                    /* try { // try from 0358d424 to 0368d427 has its CatchHandler @ 0358d430 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d3d4 with catch @ 0358d428
                       try { // try from 0358d428 to 0368d453 has its CatchHandler @ 0358d260 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KKEKKPIDGBK>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d340 with catch @ 0358d42c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d400 with catch @ 0358d430
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0358d424 with catch @ 0358d430
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d41c with catch @ 0358d434
                        */
    FUN_01bab630(&Method_UniRx_Observable_Take<KKEKKPIDGBK>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d320 with catch @ 0358d438
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358d35c with catch @ 0358d43c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0358d420 with catch @ 0358d43c
                        */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045683ef = 1;
  }
                    /* try { // try from 0358d454 to 0368d46b has its CatchHandler @ 0358d4c8 */
  UniRx_DisposableExtensions__AddTo<object>
            ((Il2CppObject *)(__this->fields).GEBDPADMKJP,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI,
             Method_UniRx_DisposableExtensions_AddTo<CompositeDisposable>__);
  pKVar1 = (__this->fields).CFMBLNBAEJN;
  if (pKVar1 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
                    /* try { // try from 0358d46c to 0368d4b7 has its CatchHandler @ 0358d260 */
    UniRx_DisposableExtensions__AddTo<object>
              ((Il2CppObject *)(pKVar1->fields).KKDOGECGHBO,
               (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).IHADHPMEOFI
               ,Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
    pKVar1 = (__this->fields).ONCJMLPDAKO;
    if (pKVar1 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(pKVar1->fields).KKDOGECGHBO,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).IHADHPMEOFI,
                 Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0358d4b8 to 0368d4c7 has its CatchHandler @ 0358d4c8 */
                    /* catch() { ... } // from try @ 0358d454 with catch @ 0358d4c8
                       catch() { ... } // from try @ 0358d4b8 with catch @ 0358d4c8 */
                    /* try { // try from 0358d4cc to 0368d4cf has its CatchHandler @ 0358d4d8 */
                    /* try { // try from 0358d4d0 to 0368d4db has its CatchHandler @ 0358d260 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358d4cc with catch @ 0358d4d8
                        */
      source = MKFAKELPPAC__NDIOMPEMKCM((MethodInfo *)0x0);
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
      }
      source_00 = UniRx_Observable__Take<object>
                            ((System_IObservable_T__o *)source,1,
                             Method_UniRx_Observable_Take<KKEKKPIDGBK>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KKEKKPIDGBK>_TypeInfo);
      System_Action<object>___ctor();
      disposable = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             (source_00,onNext,
                              Method_UniRx_ObservableExtensions_Subscribe<KKEKKPIDGBK>__);
      UniRx_DisposableExtensions__AddTo<object>
                (disposable,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).IHADHPMEOFI,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

