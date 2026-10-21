// IHELGNOGAOE$$JMJHECILDBJ @ RVA 0x351A240

UniRx_Async_UniTask_o
IHELGNOGAOE__JMJHECILDBJ
          (IHELGNOGAOE_o *__this,System_Func_CancellationToken__UniTask__o *MMPKKCGBFAK,
          System_Threading_CancellationToken_o NPAAFDINGAB,MethodInfo *method)

{
  UniRx_Async_UniTask_o UVar1;
  MethodInfo *method_00;
  UniRx_Async_UniTaskCompletionSource_o *pUVar2;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_01;
  System_Action_c *local_80;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields UStack_78;
  System_Func_CancellationToken__UniTask__o *pSStack_68;
  System_Threading_CancellationToken_Fields local_60;
  IHELGNOGAOE_o *local_58;
  intptr_t local_50;
  
                    /* try { // try from 0361a260 to 0371a27b has its CatchHandler @ 0361a328 */
  if ((DAT_04568970 & 1) == 0) {
                    /* try { // try from 0361a27c to 0371a307 has its CatchHandler @ 03619fb8 */
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<IHELGNOGAOE_OBIBCFNODNG>__
                );
    DAT_04568970 = 1;
  }
  local_50 = 0;
  pSStack_68 = (System_Func_CancellationToken__UniTask__o *)0x0;
  local_58 = (IHELGNOGAOE_o *)0x0;
  local_60._source = (System_Threading_CancellationTokenSource_o *)0x0;
  UStack_78 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)ZEXT816(0);
  local_80 = (System_Action_c *)0x0;
  UStack_78 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)
              UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Create((MethodInfo *)0x0);
  pUVar2 = (UniRx_Async_UniTaskCompletionSource_o *)((ulong)&local_80 | 8);
  thunk_FUN_01c20e04(pUVar2,0);
  local_58 = __this;
  thunk_FUN_01c20e04(&local_58,__this);
  pSStack_68 = MMPKKCGBFAK;
  thunk_FUN_01c20e04(&pSStack_68,MMPKKCGBFAK);
  local_60 = NPAAFDINGAB.fields._source;
  thunk_FUN_01c20e04(&local_60,0);
  local_80 = (System_Action_c *)CONCAT44(local_80._4_4_,0xffffffff);
  __this_00.fields.moveNext = (System_Action_o *)&local_80;
  __this_00.fields.promise = pUVar2;
  method_00 = 
  Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<IHELGNOGAOE_OBIBCFNODNG>__;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Start<IHELGNOGAOE_OBIBCFNODNG>
            (__this_00,
             (IHELGNOGAOE_OBIBCFNODNG_o *)
             Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<IHELGNOGAOE_OBIBCFNODNG>__
             ,(MethodInfo_1E3A8A4 *)method);
  __this_01.fields.moveNext = (System_Action_o *)0x0;
  __this_01.fields.promise = pUVar2;
                    /* try { // try from 0361a308 to 0371a30b has its CatchHandler @ 0361a334 */
                    /* try { // try from 0361a30c to 0371a313 has its CatchHandler @ 0361a330 */
  UVar1 = UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__get_Task(__this_01,method_00);
                    /* try { // try from 0361a314 to 0371a317 has its CatchHandler @ 03619fb8 */
                    /* try { // try from 0361a318 to 0371a31b has its CatchHandler @ 0361a324 */
                    /* try { // try from 0361a31c to 0371a34b has its CatchHandler @ 03619fb8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a318 with catch @ 0361a324
                        */
  return (UniRx_Async_UniTask_o)UVar1.fields.awaiter;
}

