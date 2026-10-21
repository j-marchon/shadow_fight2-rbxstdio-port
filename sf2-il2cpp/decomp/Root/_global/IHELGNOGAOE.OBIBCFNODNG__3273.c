// TypeDefIndex 3273
// Namespace: 
// [CompilerGenerated]
// private struct IHELGNOGAOE.OBIBCFNODNG : IAsyncStateMachine
// Fields:
//   public int <>1__state; // 0x0
//   public AsyncUniTaskMethodBuilder <>t__builder; // 0x8
//   public Func<CancellationToken, UniTask> taskFunc; // 0x18
//   public CancellationToken token; // 0x20
//   public IHELGNOGAOE <>4__this; // 0x28
//   private UniTask.Awaiter <>u__1; // 0x30

// ===== private void MoveNext()  [RVA 0x351A4B0]
// IHELGNOGAOE.OBIBCFNODNG$$MoveNext @ RVA 0x351A4B0

/* WARNING: Removing unreachable block (ram,0x0361a604) */

void IHELGNOGAOE_OBIBCFNODNG__MoveNext(IHELGNOGAOE_OBIBCFNODNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UniRx_Async_UniTask_Awaiter_o *pUVar2;
  MethodInfo *in_x2;
  MethodInfo_1E3972C *in_x4;
  System_Func_CancellationToken__UniTask__o *pSVar3;
  IHELGNOGAOE_o *pIVar4;
  int iVar5;
  undefined1 auVar6 [16];
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_01;
  undefined8 local_38;
  UniRx_Async_UniTask_Fields local_28;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = __this;
                    /* try { // try from 0361a4bc to 0371a4c7 has its CatchHandler @ 0361a508 */
                    /* try { // try from 0361a4c8 to 0371a4ff has its CatchHandler @ 0361a408 */
  if ((DAT_04568973 & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_IHELGNOGAOE_OBIBCFNODNG>__
                );
    auVar6 = FUN_01bab630(&UniRx_Async_UniTask_TypeInfo);
    DAT_04568973 = 1;
  }
  local_28.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
  local_38 = 0;
  iVar5 = (__this->fields).__1__state;
  pIVar4 = (__this->fields).__4__this;
                    /* try { // try from 0361a500 to 0371a503 has its CatchHandler @ 0361a50c */
  if (iVar5 == 0) {
    local_28.awaiter = (__this->fields).__u__1.fields.task.fields.awaiter;
    iVar5 = -1;
    (__this->fields).__u__1.fields.task.fields.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
                    /* try { // try from 0361a504 to 0371a527 has its CatchHandler @ 0361a408 */
    pSVar3 = (__this->fields).taskFunc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a4bc with catch @ 0361a508
                        */
    if (pSVar3 == (System_Func_CancellationToken__UniTask__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a500 with catch @ 0361a50c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a4a0 with catch @ 0361a510
                        */
    in_x2 = (MethodInfo *)(pSVar3->fields).super.super.method;
    local_38 = (*(code *)(pSVar3->fields).super.super.invoke_impl)
                         ((pSVar3->fields).super.super.method_code,
                          (__this->fields).token.fields._source);
                    /* try { // try from 0361a528 to 0371a52b has its CatchHandler @ 0361a554 */
                    /* try { // try from 0361a52c to 0371a55b has its CatchHandler @ 0361a408 */
    if ((UniRx_Async_UniTask_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_28.awaiter =
         (UniRx_Async_IAwaiter_o *)
         UniRx_Async_UniTask__GetAwaiter((UniRx_Async_UniTask_o)&local_38,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0361a528 with catch @ 0361a554 */
    bVar1 = UniRx_Async_UniTask_Awaiter__get_IsCompleted
                      ((UniRx_Async_UniTask_Awaiter_o)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
                    /* try { // try from 0361a55c to 0371a563 has its CatchHandler @ 0361a578 */
    if (!bVar1) {
      (__this->fields).__1__state = 0;
      pUVar2 = &(__this->fields).__u__1;
                    /* try { // try from 0361a564 to 0371a56f has its CatchHandler @ 0361a408 */
      (pUVar2->fields).task.fields.awaiter = local_28.awaiter;
                    /* try { // try from 0361a570 to 0371a577 has its CatchHandler @ 0361a578 */
      thunk_FUN_01c20e04(pUVar2,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361a55c with catch @ 0361a578
                       catch(type#2 @ 00000000) { ... } // from try @ 0361a570 with catch @ 0361a578
                        */
      __this_00.fields.moveNext = (System_Action_o *)&stack0xffffffffffffffd8;
      __this_00.fields.promise =
           (UniRx_Async_UniTaskCompletionSource_o *)&(__this->fields).__t__builder;
      UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__AwaitUnsafeOnCompleted<UniTask_Awaiter,_IHELGNOGAOE_OBIBCFNODNG>
                (__this_00,(UniRx_Async_UniTask_Awaiter_o *)__this,
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_IHELGNOGAOE_OBIBCFNODNG>__
                 ,in_x4);
      return;
    }
  }
  UniRx_Async_UniTask_Awaiter__GetResult
            ((UniRx_Async_UniTask_Awaiter_o)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
  if (iVar5 < 0) {
    if (pIVar4 == (IHELGNOGAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pIVar4->fields).HGOFNNBNBGK = false;
  }
  (__this->fields).__1__state = -2;
  __this_01.fields.moveNext = (System_Action_o *)0x0;
  __this_01.fields.promise = (UniRx_Async_UniTaskCompletionSource_o *)&(__this->fields).__t__builder
  ;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__SetResult(__this_01,in_x2);
  return;
}


// ===== private void SetStateMachine(IAsyncStateMachine stateMachine)  [RVA 0x351A81C]
// IHELGNOGAOE.OBIBCFNODNG$$SetStateMachine @ RVA 0x351A81C

void IHELGNOGAOE_OBIBCFNODNG__SetStateMachine
               (IHELGNOGAOE_OBIBCFNODNG_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  MethodInfo *in_x3;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  
  __this_00.fields.moveNext = (System_Action_o *)stateMachine;
  __this_00.fields.promise = (UniRx_Async_UniTaskCompletionSource_o *)&(__this->fields).__t__builder
  ;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (__this_00,(System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0,in_x3);
  return;
}

