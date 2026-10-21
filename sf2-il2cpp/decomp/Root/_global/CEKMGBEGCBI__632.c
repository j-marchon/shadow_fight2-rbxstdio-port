// TypeDefIndex 632
// Namespace: 
// public class CEKMGBEGCBI : CJLNLIOJFLM, HONDOIKDLOD, IDisposable
// Fields:
//   private readonly CompositeDisposable IHADHPMEOFI; // 0x10
//   private readonly ReactiveProperty<Nullable<int>> LHCCMHBFOBB; // 0x18

// ===== public IReactiveProperty<Nullable<int>> OBMABKPFDMA()  [RVA 0x35CA104]
// CEKMGBEGCBI$$OBMABKPFDMA @ RVA 0x35CA104

UniRx_IReactiveProperty_Nullable_int___o *
CEKMGBEGCBI__OBMABKPFDMA(CEKMGBEGCBI_o *__this,MethodInfo *method)

{
  return (UniRx_IReactiveProperty_Nullable_int___o *)(__this->fields).LHCCMHBFOBB;
}


// ===== public void .ctor()  [RVA 0x35CA10C]
// CEKMGBEGCBI$$.ctor @ RVA 0x35CA10C

void CEKMGBEGCBI___ctor(CEKMGBEGCBI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_ReactiveProperty_Nullable_int___o *__this_01;
  UniRx_ReactiveProperty_Nullable_int___o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f92 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<Nullable<int>>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<Nullable<int>>_TypeInfo);
    DAT_04568f92 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_Nullable_int___o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<Nullable<int>>_TypeInfo);
  UniRx_ReactiveProperty<Nullable<int>>___ctor
            (__this_01,Method_UniRx_ReactiveProperty<Nullable<int>>__ctor__);
  ppUVar1 = &(__this->fields).LHCCMHBFOBB;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Dispose()  [RVA 0x35CA1CC]
// CEKMGBEGCBI$$Dispose @ RVA 0x35CA1CC

void CEKMGBEGCBI__Dispose(CEKMGBEGCBI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_ReactiveProperty_Nullable_int___o *__this_01;
  
  if ((DAT_04568f93 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<Nullable<int>>_Dispose__);
    DAT_04568f93 = 1;
  }
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).LHCCMHBFOBB;
  if (__this_01 != (UniRx_ReactiveProperty_Nullable_int___o *)0x0) {
    UniRx_ReactiveProperty<Nullable<int>>__Dispose
              (__this_01,Method_UniRx_ReactiveProperty<Nullable<int>>_Dispose__);
    return;
  }
  return;
}


// ===== private void LHMIDKOPILI(Nullable<int> OGPGLGPMEPD)  [RVA 0x35CA234]
// CEKMGBEGCBI$$LHMIDKOPILI @ RVA 0x35CA234

void CEKMGBEGCBI__LHMIDKOPILI
               (CEKMGBEGCBI_o *__this,System_Nullable_int__o OGPGLGPMEPD,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  DBIINAFCKME_o *pDVar3;
  System_String_o *JLNPKGGFFDD;
  System_Nullable_int__Fields local_28;
  
  local_28 = OGPGLGPMEPD.fields;
  if ((DAT_04568f94 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
                    /* try { // try from 036ca274 to 037ca377 has its CatchHandler @ 036ca274
                       catch() { ... } // from try @ 036ca274 with catch @ 036ca274
                       catch() { ... } // from try @ 036ca408 with catch @ 036ca274
                       catch() { ... } // from try @ 036ca48c with catch @ 036ca274
                       catch() { ... } // from try @ 036ca530 with catch @ 036ca274 */
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&StringLiteral_4938/*"Current ServiceZone updated to '{0}'."*/);
    DAT_04568f94 = 1;
  }
  if (((ulong)OGPGLGPMEPD.fields & 0xff) == 0) {
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_28,-1,Method_System_Nullable<int>__ctor__);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
  if (pDVar3 != (DBIINAFCKME_o *)0x0) {
    iVar1 = (pDVar3->fields).GLNNPKDAIPI;
    iVar2 = System_Nullable<int>__get_Value
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
    if (iVar1 == iVar2) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    iVar2 = System_Nullable<int>__get_Value
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
    if (pDVar3 != (DBIINAFCKME_o *)0x0) {
      DBIINAFCKME__LCLOIIOOOMB(pDVar3,iVar2,(MethodInfo *)0x0);
      pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
      if (pDVar3 != (DBIINAFCKME_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pDVar3,true,(MethodInfo *)0x0);
        JLNPKGGFFDD = System_String__Format
                                (StringLiteral_4938/*"Current ServiceZone updated to '{0}'."*/,(Il2CppObject *)(__this->fields).LHCCMHBFOBB,
                                 (MethodInfo *)0x0);
                    /* try { // try from 036ca378 to 037ca39f has its CatchHandler @ 036ca4a0 */
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIMAJOGGBHM()  [RVA 0x35CA39C]
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
    FUN_01bab630(&StringLiteral_7540/*"Initialized. Current ServiceZone setted to '{0}'."*/);
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
                                (StringLiteral_7540/*"Initialized. Current ServiceZone setted to '{0}'."*/,(Il2CppObject *)(__this->fields).LHCCMHBFOBB,
                                 (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        goto LAB_036ca4f8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

