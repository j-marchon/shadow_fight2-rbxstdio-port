// LLDOMGIEPNE$$GIMAJOGGBHM @ RVA 0x33790D4

void LLDOMGIEPNE__GIMAJOGGBHM(LLDOMGIEPNE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  MethodInfo *method_00;
  MNBNELNLOCB_o *pMVar2;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *source;
  System_Action_T__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_Action_T___o *pSVar5;
  System_Action_Action_T___o *pSVar6;
  System_IObservable_T__o *pSVar7;
  VirtualInvokeData *pVVar8;
  MNBNELNLOCB_c *pMVar9;
  ulong uVar10;
  int32_t *piVar11;
  
                    /* try { // try from 034790d4 to 035790db has its CatchHandler @ 03479a98 */
                    /* try { // try from 034790ec to 035790f3 has its CatchHandler @ 034799a4 */
  if ((DAT_04567b75 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
                    /* try { // try from 034790fc to 03579103 has its CatchHandler @ 034799a0 */
    FUN_01bab630(&System_Action<Action>_TypeInfo);
                    /* try { // try from 03479108 to 03579123 has its CatchHandler @ 034799bc */
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<MNBNELNLOCB>__);
    FUN_01bab630(&Method_LLDOMGIEPNE_ABCEGHINJDD__);
    FUN_01bab630(&Method_LLDOMGIEPNE_AHEKNMBPDEL__);
                    /* try { // try from 0347916c to 0357918f has its CatchHandler @ 034799a8 */
    FUN_01bab630(&Method_LLDOMGIEPNE_AJMEOKKLDPF__);
    FUN_01bab630(&Method_LLDOMGIEPNE_BGEJPAJNJHI__);
    FUN_01bab630(&Method_LLDOMGIEPNE_KJHBAIINPKL__);
                    /* try { // try from 03479190 to 03579313 has its CatchHandler @ 03477bc4 */
    FUN_01bab630(&Method_LLDOMGIEPNE_LEGDCFPPPJG__);
    FUN_01bab630(&Method_LLDOMGIEPNE_OFDOOENPCBE__);
    FUN_01bab630(&Method_LLDOMGIEPNE_OGMDDKMLMKO__);
    FUN_01bab630(&Method_LLDOMGIEPNE_OKJEMPOOMOD__);
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<PCJHNLGCCOB>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<PCJHNLGCCOB>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7529);
    DAT_04567b75 = 1;
  }
  if ((__this->fields).IOPFMDCMMLD == (MNBNELNLOCB_o *)0x0) {
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
    pMVar2 = LLDOMGIEPNE__ADLLFHPKFIB(method_00);
    (__this->fields).IOPFMDCMMLD = pMVar2;
    thunk_FUN_01c20e04(&__this->fields,pMVar2);
    if ((__this->fields).IOPFMDCMMLD != (MNBNELNLOCB_o *)0x0) {
      addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 03479314 to 0357933b has its CatchHandler @ 03479acc */
      System_Action<Unit>___ctor();
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,pSVar3,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      pSVar5 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
                    /* try { // try from 03479370 to 0357939b has its CatchHandler @ 03479aa8 */
      System_Action<object>___ctor();
      pSVar6 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar7 = UniRx_Observable__FromEvent<object>
                         (pSVar5,pSVar6,Method_UniRx_Observable_FromEvent<string>__);
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
                    /* try { // try from 034793d8 to 035793df has its CatchHandler @ 034799ac */
                    /* try { // try from 034793e4 to 035793eb has its CatchHandler @ 034799b0 */
      System_Action<object>___ctor();
                    /* try { // try from 034793fc to 03579403 has its CatchHandler @ 03479980 */
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (pSVar7,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<string>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* try { // try from 0347940c to 03579413 has its CatchHandler @ 0347997c */
                    /* try { // try from 03479418 to 03579433 has its CatchHandler @ 03479998 */
      pSVar5 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar6 = (System_Action_Action_T___o *)
               thunk_FUN_01bda818(System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
      System_Action<object>___ctor();
      pSVar7 = UniRx_Observable__FromEvent<PCJHNLGCCOB>
                         (pSVar5,pSVar6,Method_UniRx_Observable_FromEvent<PCJHNLGCCOB>__);
                    /* try { // try from 0347947c to 0357949f has its CatchHandler @ 03479984 */
      pSVar3 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<PCJHNLGCCOB>_TypeInfo);
                    /* try { // try from 034794a0 to 0357962b has its CatchHandler @ 03477bc4 */
      System_Action<PCJHNLGCCOB>___ctor();
      pIVar4 = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<PCJHNLGCCOB>
                         (pSVar7,pSVar3,Method_UniRx_ObservableExtensions_Subscribe<PCJHNLGCCOB>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar4,(System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      pMVar2 = (__this->fields).IOPFMDCMMLD;
      if (pMVar2 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar9 = pMVar2->klass;
      uVar1._0_1_ = (pMVar9->_2).rank;
      uVar1._1_1_ = (pMVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pMVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
            pVVar8 = pMVar9->vtable + (*piVar11 + 6);
            goto LAB_0347952c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pMVar2,MNBNELNLOCB_TypeInfo,6);
LAB_0347952c:
      (*pVVar8->methodPtr)(pMVar2,pVVar8->method);
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)(__this->fields).IOPFMDCMMLD,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).BNAIPPCOGPE,Method_UniRx_DisposableExtensions_AddTo<MNBNELNLOCB>__
                );
      return;
    }
  }
  return;
}

