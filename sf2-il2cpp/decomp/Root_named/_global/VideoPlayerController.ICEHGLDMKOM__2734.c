// TypeDefIndex 2734
// Namespace: 
// [CompilerGenerated]
// private sealed class VideoPlayerController.ICEHGLDMKOM : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public VideoPlayerController <>4__this; // 0x20
//   private long <prevFrame>5__2; // 0x28
//   private int <progressFail>5__3; // 0x30
//   private WaitForSeconds <delay>5__4; // 0x38
//   private int <i>5__5; // 0x40

// ===== public void .ctor(int <>1__state)  [RVA 0x33E2794]
// VideoPlayerController.ICEHGLDMKOM$$.ctor @ RVA 0x33E2794

void VideoPlayerController_ICEHGLDMKOM___ctor
               (VideoPlayerController_ICEHGLDMKOM_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
                    /* try { // try from 034e27b8 to 035e2853 has its CatchHandler @ 034e27b8
                       catch() { ... } // from try @ 034e27b8 with catch @ 034e27b8
                       catch() { ... } // from try @ 034e2898 with catch @ 034e27b8
                       catch() { ... } // from try @ 034e28d8 with catch @ 034e27b8
                       catch() { ... } // from try @ 034e2900 with catch @ 034e27b8
                       catch() { ... } // from try @ 034e2934 with catch @ 034e27b8 */
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33E28C0]
// VideoPlayerController.ICEHGLDMKOM$$System.IDisposable.Dispose @ RVA 0x33E28C0

void VideoPlayerController_ICEHGLDMKOM__System_IDisposable_Dispose
               (VideoPlayerController_ICEHGLDMKOM_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x33E28C4]
// VideoPlayerController.ICEHGLDMKOM$$MoveNext @ RVA 0x33E28C4

bool VideoPlayerController_ICEHGLDMKOM__MoveNext
               (VideoPlayerController_ICEHGLDMKOM_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_Video_VideoPlayer_o *pUVar3;
  int64_t iVar4;
  MethodInfo *extraout_x1;
  UnityEngine_Video_VideoPlayer_o *NMGJDFJDKBF;
  MethodInfo *in_x3;
  Il2CppObject **ppIVar5;
  VideoPlayerController_o *__this_01;
  UnityEngine_WaitForSeconds_o **ppUVar6;
  
                    /* try { // try from 034e28d4 to 035e28d7 has its CatchHandler @ 034e28e8 */
                    /* try { // try from 034e28d8 to 035e28fb has its CatchHandler @ 034e27b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e288c with catch @ 034e28dc
                        */
  if ((DAT_04567eb5 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e2880 with catch @ 034e28e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e2870 with catch @ 034e28e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e28d4 with catch @ 034e28e8
                        */
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e2854 with catch @ 034e28ec
                        */
    FUN_01bab630(&StringLiteral_21972/*"video stuck after resume"*/);
                    /* try { // try from 034e28fc to 035e28ff has its CatchHandler @ 034e2924 */
    DAT_04567eb5 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034e2900 to 035e292b has its CatchHandler @ 034e27b8 */
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((__this_01 == (VideoPlayerController_o *)0x0) ||
       (pUVar3 = (__this_01->fields)._VideoPlayer, pUVar3 == (UnityEngine_Video_VideoPlayer_o *)0x0)
       ) goto LAB_034e2a28;
    iVar4 = UnityEngine_Video_VideoPlayer__get_frame(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this_01->fields)._VideoPlayer;
    if (pUVar3 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto LAB_034e2a28;
    bVar2 = UnityEngine_Video_VideoPlayer__get_isPlaying(pUVar3,(MethodInfo *)0x0);
    if (((!bVar2) || (iVar4 == (__this->fields)._prevFrame_5__2)) &&
       (iVar1 = (__this->fields)._progressFail_5__3, (__this->fields)._progressFail_5__3 = iVar1 + 1
       , 4 < iVar1)) {
      VideoPlayerController__KNKHDOFPBOG(__this_01,NMGJDFJDKBF,StringLiteral_21972/*"video stuck after resume"*/,in_x3);
      return false;
    }
    iVar1 = (__this->fields)._i_5__5 + 1;
    (__this->fields)._i_5__5 = iVar1;
    if (0xe < iVar1) {
      return false;
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields)._progressFail_5__3 = 0;
    (__this->fields).__1__state = -1;
                    /* catch() { ... } // from try @ 034e28fc with catch @ 034e2924 */
                    /* try { // try from 034e292c to 035e2933 has its CatchHandler @ 034e2948 */
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
                    /* try { // try from 034e2934 to 035e293f has its CatchHandler @ 034e27b8 */
                    /* try { // try from 034e2940 to 035e2947 has its CatchHandler @ 034e2948 */
    UnityEngine_WaitForSeconds___ctor(__this_00,0.1,(MethodInfo *)0x0);
    ppUVar6 = &(__this->fields)._delay_5__4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e292c with catch @ 034e2948
                       catch(type#2 @ 00000000) { ... } // from try @ 034e2940 with catch @ 034e2948
                        */
    *ppUVar6 = __this_00;
                    /* try { // try from 034e294c to 035e2a5b has its CatchHandler @ 034e294c
                       catch() { ... } // from try @ 034e294c with catch @ 034e294c
                       catch() { ... } // from try @ 034e2af0 with catch @ 034e294c
                       catch() { ... } // from try @ 034e2b70 with catch @ 034e294c
                       catch() { ... } // from try @ 034e2b78 with catch @ 034e294c
                       catch() { ... } // from try @ 034e2c14 with catch @ 034e294c */
    thunk_FUN_01c20e04(ppUVar6,__this_00);
    (__this->fields)._i_5__5 = 0;
    if (__this_01 == (VideoPlayerController_o *)0x0) goto LAB_034e2a28;
  }
  pUVar3 = (__this_01->fields)._VideoPlayer;
  if (pUVar3 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    iVar4 = UnityEngine_Video_VideoPlayer__get_frame(pUVar3,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)(__this->fields)._delay_5__4;
    (__this->fields)._prevFrame_5__2 = iVar4;
    thunk_FUN_01c20e04(ppIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
LAB_034e2a28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x33E2A2C]
// VideoPlayerController.ICEHGLDMKOM$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x33E2A2C

Il2CppObject *
VideoPlayerController_ICEHGLDMKOM__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (VideoPlayerController_ICEHGLDMKOM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33E2A34]
// VideoPlayerController.ICEHGLDMKOM$$System.Collections.IEnumerator.Reset @ RVA 0x33E2A34

void VideoPlayerController_ICEHGLDMKOM__System_Collections_IEnumerator_Reset
               (VideoPlayerController_ICEHGLDMKOM_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034e2a5c to 035e2a83 has its CatchHandler @ 034e2b90 */
  uVar1 = thunk_FUN_01bb9178(&
                             Method_VideoPlayerController_ICEHGLDMKOM_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33E2A6C]
// VideoPlayerController.ICEHGLDMKOM$$System.Collections.IEnumerator.get_Current @ RVA 0x33E2A6C

Il2CppObject *
VideoPlayerController_ICEHGLDMKOM__System_Collections_IEnumerator_get_Current
          (VideoPlayerController_ICEHGLDMKOM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

