// FLFPJEKOAMK$$IEBGBDIPDBI @ RVA 0x32CE4E8

UniRx_Async_UniTask_o
FLFPJEKOAMK__IEBGBDIPDBI
          (FLFPJEKOAMK_o *__this,System_Threading_CancellationToken_o OFPGGGAKOAE,MethodInfo *method
          )

{
  UniRx_Async_UniTask_o UVar1;
  MethodInfo *method_00;
  MethodInfo_1E3A86C *in_x3;
  UniRx_Async_UniTaskCompletionSource_o *pUVar2;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_01;
  System_Action_c *local_90;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields UStack_88;
  FLFPJEKOAMK_o *pFStack_78;
  System_Threading_CancellationToken_Fields local_70;
  intptr_t iStack_68;
  intptr_t local_60;
  intptr_t iStack_58;
  intptr_t iStack_50;
  intptr_t iStack_48;
  
  if ((DAT_0456753a & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<FLFPJEKOAMK_FDECPNIEMAA>__
                );
    DAT_0456753a = 1;
  }
  iStack_58 = 0;
  local_60 = 0;
  iStack_48 = 0;
  iStack_50 = 0;
  pFStack_78 = (FLFPJEKOAMK_o *)0x0;
  iStack_68 = 0;
  local_70._source = (System_Threading_CancellationTokenSource_o *)0x0;
  UStack_88 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)ZEXT816(0);
  local_90 = (System_Action_c *)0x0;
  UStack_88 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)
              UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Create((MethodInfo *)0x0);
  pUVar2 = (UniRx_Async_UniTaskCompletionSource_o *)((ulong)&local_90 | 8);
  thunk_FUN_01c20e04(pUVar2,0);
  pFStack_78 = __this;
  thunk_FUN_01c20e04(&pFStack_78,__this);
  local_70 = OFPGGGAKOAE.fields._source;
  thunk_FUN_01c20e04(&local_70,0);
  local_90 = (System_Action_c *)CONCAT44(local_90._4_4_,0xffffffff);
  __this_00.fields.moveNext = (System_Action_o *)&local_90;
  __this_00.fields.promise = pUVar2;
  method_00 = 
  Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<FLFPJEKOAMK_FDECPNIEMAA>__;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Start<FLFPJEKOAMK_FDECPNIEMAA>
            (__this_00,
             (FLFPJEKOAMK_FDECPNIEMAA_o *)
             Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<FLFPJEKOAMK_FDECPNIEMAA>__
             ,in_x3);
  __this_01.fields.moveNext = (System_Action_o *)0x0;
  __this_01.fields.promise = pUVar2;
  UVar1 = UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__get_Task(__this_01,method_00);
                    /* try { // try from 033ce5a8 to 034ce693 has its CatchHandler @ 033ce5a8
                       catch() { ... } // from try @ 033ce5a8 with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce6bc with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce6ec with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce718 with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce758 with catch @ 033ce5a8 */
  return (UniRx_Async_UniTask_o)UVar1.fields.awaiter;
}

