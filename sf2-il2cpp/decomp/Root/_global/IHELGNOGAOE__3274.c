// TypeDefIndex 3274
// Namespace: 
// public abstract class IHELGNOGAOE : COPHAOINDMJ, IDisposable
// Fields:
//   private CancellationTokenSource NKHLCJCLMKP; // 0x10
//   private bool HGOFNNBNBGK; // 0x18
//   private readonly Action<Exception> KLHJBHAECOP; // 0x20

// ===== protected UniTask JMJHECILDBJ(Func<CancellationToken, UniTask> MMPKKCGBFAK, CancellationToken NPAAFDINGAB)  [RVA 0x351A240]
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


// ===== public void Dispose()  [RVA 0x351A328]
// IHELGNOGAOE$$Dispose @ RVA 0x351A328

void IHELGNOGAOE__Dispose(IHELGNOGAOE_o *__this,MethodInfo *method)

{
  IHELGNOGAOE_Fields *pIVar1;
  System_Threading_CancellationTokenSource_o *__this_00;
  
  pIVar1 = &__this->fields;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a260 with catch @ 0361a328
                        */
  __this_00 = pIVar1->NKHLCJCLMKP;
  pIVar1->NKHLCJCLMKP = (System_Threading_CancellationTokenSource_o *)0x0;
  thunk_FUN_01c20e04(pIVar1,0);
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Cancel(__this_00,(MethodInfo *)0x0);
    System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public bool PAOOKKOJHIN()  [RVA 0x351A368]
// IHELGNOGAOE$$PAOOKKOJHIN @ RVA 0x351A368

bool IHELGNOGAOE__PAOOKKOJHIN(IHELGNOGAOE_o *__this,MethodInfo *method)

{
                    /* try { // try from 0361a368 to 0371a3cf has its CatchHandler @ 0361a3e4 */
  return (__this->fields).HGOFNNBNBGK;
}


// ===== protected void .ctor(Action<Exception> BNBGDHOALCB)  [RVA 0x351A370]
// IHELGNOGAOE$$.ctor @ RVA 0x351A370

void IHELGNOGAOE___ctor(IHELGNOGAOE_o *__this,System_Action_Exception__o *BNBGDHOALCB,
                       MethodInfo *method)

{
  System_Action_Exception__o **ppSVar1;
  
  if ((DAT_04568971 & 1) == 0) {
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Debug_LogException__);
    DAT_04568971 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (BNBGDHOALCB == (System_Action_Exception__o *)0x0) {
    BNBGDHOALCB = (System_Action_Exception__o *)
                  thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
                    /* try { // try from 0361a3d0 to 0371a3db has its CatchHandler @ 03619fb8 */
                    /* try { // try from 0361a3dc to 0371a3e3 has its CatchHandler @ 0361a3e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361a368 with catch @ 0361a3e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0361a3dc with catch @ 0361a3e4
                        */
    System_Action<object>___ctor();
  }
  if (__this != (IHELGNOGAOE_o *)0x0) {
    ppSVar1 = &(__this->fields).KLHJBHAECOP;
    *ppSVar1 = BNBGDHOALCB;
    thunk_FUN_01c20e04(ppSVar1,BNBGDHOALCB);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLMJPCHOBPL()  [RVA 0x351A32C]
// IHELGNOGAOE$$LLMJPCHOBPL @ RVA 0x351A32C

void IHELGNOGAOE__LLMJPCHOBPL(IHELGNOGAOE_o *__this,MethodInfo *method)

{
  IHELGNOGAOE_Fields *pIVar1;
  System_Threading_CancellationTokenSource_o *__this_00;
  
  pIVar1 = &__this->fields;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a210 with catch @ 0361a32c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a30c with catch @ 0361a330
                        */
  __this_00 = pIVar1->NKHLCJCLMKP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a308 with catch @ 0361a334
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a1b4 with catch @ 0361a338
                        */
  pIVar1->NKHLCJCLMKP = (System_Threading_CancellationTokenSource_o *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a158 with catch @ 0361a33c
                        */
  thunk_FUN_01c20e04(pIVar1,0);
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    /* try { // try from 0361a34c to 0371a34f has its CatchHandler @ 0361a360 */
    System_Threading_CancellationTokenSource__Cancel(__this_00,(MethodInfo *)0x0);
    System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 0361a34c with catch @ 0361a360 */
  return;
}


// ===== protected CancellationToken KNPNGGFPCHG()  [RVA 0x351A408]
// IHELGNOGAOE$$KNPNGGFPCHG @ RVA 0x351A408

System_Threading_CancellationToken_o
IHELGNOGAOE__KNPNGGFPCHG(IHELGNOGAOE_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  System_Threading_CancellationToken_o SVar2;
  MethodInfo *extraout_x1;
  System_Threading_CancellationTokenSource_o *__this_00;
  IHELGNOGAOE_Fields *pIVar3;
  
                    /* try { // try from 0361a408 to 0371a49f has its CatchHandler @ 0361a408
                       catch() { ... } // from try @ 0361a408 with catch @ 0361a408
                       catch() { ... } // from try @ 0361a4c8 with catch @ 0361a408
                       catch() { ... } // from try @ 0361a504 with catch @ 0361a408
                       catch() { ... } // from try @ 0361a52c with catch @ 0361a408
                       catch() { ... } // from try @ 0361a564 with catch @ 0361a408 */
  if ((DAT_04568972 & 1) == 0) {
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    DAT_04568972 = 1;
    method = extraout_x1;
  }
  pIVar3 = &__this->fields;
  __this_00 = pIVar3->NKHLCJCLMKP;
  pSVar1 = (System_Threading_CancellationTokenSource_o *)
           thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo,method);
  System_Threading_CancellationTokenSource___ctor(pSVar1,(MethodInfo *)0x0);
  pIVar3->NKHLCJCLMKP = pSVar1;
  thunk_FUN_01c20e04(pIVar3,pSVar1);
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Cancel(__this_00,(MethodInfo *)0x0);
    System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).NKHLCJCLMKP;
  (__this->fields).HGOFNNBNBGK = true;
  if (pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    /* try { // try from 0361a4a0 to 0371a4a7 has its CatchHandler @ 0361a510 */
    SVar2 = System_Threading_CancellationTokenSource__get_Token(pSVar1,(MethodInfo *)0x0);
    return (System_Threading_CancellationToken_o)SVar2.fields._source;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

