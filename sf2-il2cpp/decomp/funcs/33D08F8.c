// NCIIAGLGGIP$$GIMAJOGGBHM @ RVA 0x33D08F8

void NCIIAGLGGIP__GIMAJOGGBHM(NCIIAGLGGIP_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *DHMOPKGOBHL;
  System_IObservable_DBMPKPJGIPI__o *source;
  System_Func_DBMPKPJGIPI__bool__o **ppSVar1;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  System_Func_DBMPKPJGIPI__bool__o *predicate;
  
  if ((DAT_04567e5f & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<DBMPKPJGIPI,_bool>_TypeInfo);
    FUN_01bab630(&Method_NCIIAGLGGIP_IJALIPCBFPD__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<DBMPKPJGIPI>__);
                    /* try { // try from 034d0968 to 035d0a5f has its CatchHandler @ 034d0968
                       catch() { ... } // from try @ 034d0968 with catch @ 034d0968
                       catch() { ... } // from try @ 034d0a68 with catch @ 034d0968
                       catch() { ... } // from try @ 034d0abc with catch @ 034d0968
                       catch() { ... } // from try @ 034d0b28 with catch @ 034d0968 */
    FUN_01bab630(&Method_UniRx_Observable_Where<DBMPKPJGIPI>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_NCIIAGLGGIP_<>c_AKKPDDKFHPA__);
    FUN_01bab630(&NCIIAGLGGIP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_7529);
    DAT_04567e5f = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  DHMOPKGOBHL = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  source = KMFOEBNKLEO__IHOCHPGNEFN(DHMOPKGOBHL,(MethodInfo *)0x0);
  if ((NCIIAGLGGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NCIIAGLGGIP_<>c_TypeInfo);
  }
  predicate = NCIIAGLGGIP_<>c_TypeInfo->static_fields->__9__3_0;
  if (predicate == (System_Func_DBMPKPJGIPI__bool__o *)0x0) {
    if ((NCIIAGLGGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NCIIAGLGGIP_<>c_TypeInfo);
    }
    predicate = (System_Func_DBMPKPJGIPI__bool__o *)
                thunk_FUN_01bda818(System_Func<DBMPKPJGIPI,_bool>_TypeInfo);
    System_Func<Int32Enum,_bool>___ctor();
    ppSVar1 = &NCIIAGLGGIP_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
                    /* try { // try from 034d0a60 to 035d0a67 has its CatchHandler @ 034d0aa0 */
                    /* try { // try from 034d0a68 to 035d0ab7 has its CatchHandler @ 034d0968 */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source_00 = UniRx_Observable__Where<Int32Enum>
                        ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                         Method_UniRx_Observable_Where<DBMPKPJGIPI>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034d0a60 with catch @ 034d0aa0
                        */
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 034d0ab8 to 035d0abb has its CatchHandler @ 034d0b18 */
                    /* try { // try from 034d0abc to 035d0b1f has its CatchHandler @ 034d0968 */
  System_Action<Int32Enum>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Int32Enum>
                         (source_00,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<DBMPKPJGIPI>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

