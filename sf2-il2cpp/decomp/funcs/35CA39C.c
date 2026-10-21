// CEKMGBEGCBI$$GIMAJOGGBHM @ RVA 0x35CA39C

void CEKMGBEGCBI__GIMAJOGGBHM(CEKMGBEGCBI_o *__this,MethodInfo *method)

{
  DBIINAFCKME_o *pDVar1;
  System_String_o *JLNPKGGFFDD;
  System_TimeSpan_o dueTime;
  System_IObservable_TSource__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_Nullable_int___o *pUVar2;
  System_Nullable_int__Fields local_48;
  
  if ((DAT_04568f95 & 1) == 0) {
    FUN_01bab630(&System_Action<Nullable<int>>_TypeInfo);
                    /* try { // try from 036ca3d4 to 037ca3ff has its CatchHandler @ 036ca49c */
    FUN_01bab630(&Method_CEKMGBEGCBI_LHMIDKOPILI__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 036ca400 to 037ca407 has its CatchHandler @ 036ca498 */
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
                    /* try { // try from 036ca408 to 037ca487 has its CatchHandler @ 036ca274 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Nullable<int>>__);
    FUN_01bab630(&Method_UniRx_Observable_Throttle<Nullable<int>>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<Nullable<int>>_set_Value__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_7540);
    DAT_04568f95 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pDVar1 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
  if (pDVar1 != (DBIINAFCKME_o *)0x0) {
    if ((pDVar1->fields).GLNNPKDAIPI < 0) {
LAB_036ca4f8:
      pUVar2 = (__this->fields).LHCCMHBFOBB;
                    /* try { // try from 036ca508 to 037ca52f has its CatchHandler @ 036ca544 */
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 036ca530 to 037ca53b has its CatchHandler @ 036ca274 */
                    /* try { // try from 036ca53c to 037ca543 has its CatchHandler @ 036ca544 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036ca508 with catch @ 036ca544
                       catch(type#2 @ 00000000) { ... } // from try @ 036ca53c with catch @ 036ca544
                        */
      dueTime = System_TimeSpan__FromSeconds(1.0,(MethodInfo *)0x0);
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
      }
      source = UniRx_Observable__Throttle<Nullable<int>>
                         ((System_IObservable_TSource__o *)pUVar2,dueTime,
                          Method_UniRx_Observable_Throttle<Nullable<int>>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Nullable<int>>_TypeInfo);
      System_Action<Nullable<int>>___ctor();
      disposable = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<Nullable<int>>
                             ((System_IObservable_T__o *)source,onNext,
                              Method_UniRx_ObservableExtensions_Subscribe<Nullable<int>>__);
      UniRx_DisposableExtensions__AddTo<object>
                (disposable,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).IHADHPMEOFI,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__
                );
      return;
    }
    pUVar2 = (__this->fields).LHCCMHBFOBB;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036ca488 to 037ca48b has its CatchHandler @ 036ca494 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036ca48c to 037ca4b7 has its CatchHandler @ 036ca274 */
    pDVar1 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ca488 with catch @ 036ca494
                        */
    if (pDVar1 != (DBIINAFCKME_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ca400 with catch @ 036ca498
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ca3d4 with catch @ 036ca49c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ca378 with catch @ 036ca4a0
                        */
      local_48.hasValue = false;
      local_48._1_3_ = 0;
      local_48.value = 0;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_48,(pDVar1->fields).GLNNPKDAIPI,
                 Method_System_Nullable<int>__ctor__);
      if (pUVar2 != (UniRx_ReactiveProperty_Nullable_int___o *)0x0) {
                    /* try { // try from 036ca4b8 to 037ca4bb has its CatchHandler @ 036ca4c8 */
                    /* catch() { ... } // from try @ 036ca4b8 with catch @ 036ca4c8 */
        UniRx_ReactiveProperty<Nullable<int>>__set_Value
                  (pUVar2,(System_Nullable_int__o)local_48,
                   Method_UniRx_ReactiveProperty<Nullable<int>>_set_Value__);
        JLNPKGGFFDD = System_String__Format
                                (StringLiteral_7540,(Il2CppObject *)(__this->fields).LHCCMHBFOBB,
                                 (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        goto LAB_036ca4f8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

