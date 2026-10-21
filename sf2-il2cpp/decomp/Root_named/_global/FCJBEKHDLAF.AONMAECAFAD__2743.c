// TypeDefIndex 2743
// Namespace: 
// [CompilerGenerated]
// private sealed class Fight.AONMAECAFAD : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public Fight <>4__this; // 0x20
//   public Color color; // 0x28
//   public int frames; // 0x38
//   public bool show; // 0x3C
//   private float <step>5__2; // 0x40
//   private float <opacity>5__3; // 0x44
//   private int <i>5__4; // 0x48

// ===== public void .ctor(int <>1__state)  [RVA 0x33F4910]
// Fight.AONMAECAFAD$$.ctor @ RVA 0x33F4910

void Fight_AONMAECAFAD___ctor
               (Fight_AONMAECAFAD_o *__this,int32_t __1__state,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 034f4498 with catch @ 034f4910
                       catch() { ... } // from try @ 034f48bc with catch @ 034f4910 */
                    /* catch() { ... } // from try @ 034f45ac with catch @ 034f491c */
                    /* catch() { ... } // from try @ 034f48ac with catch @ 034f4920 */
                    /* catch() { ... } // from try @ 034f48a8 with catch @ 034f4924 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034f48a4 with catch @ 034f4928 */
  (__this->fields).__1__state = __1__state;
                    /* catch() { ... } // from try @ 034f467c with catch @ 034f492c */
                    /* catch() { ... } // from try @ 034f4658 with catch @ 034f4930 */
                    /* catch() { ... } // from try @ 034f48a0 with catch @ 034f4934 */
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33F4938]
// Fight.AONMAECAFAD$$System.IDisposable.Dispose @ RVA 0x33F4938

void Fight_AONMAECAFAD__System_IDisposable_Dispose
               (Fight_AONMAECAFAD_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 034f489c with catch @ 034f4938 */
  return;
}


// ===== private bool MoveNext()  [RVA 0x33F493C]
// Fight.AONMAECAFAD$$MoveNext @ RVA 0x33F493C

bool Fight_AONMAECAFAD__MoveNext(Fight_AONMAECAFAD_o *__this,MethodInfo *method)

{
  int iVar1;
  Render_o *pMVar2;
  Camera_o *pBVar3;
  int iVar4;
  Il2CppObject **ppIVar5;
  Fight_o *pFVar6;
  float BCEJOJECHDA;
  
                    /* catch() { ... } // from try @ 034f4898 with catch @ 034f493c */
                    /* catch() { ... } // from try @ 034f46c4 with catch @ 034f4940 */
                    /* catch() { ... } // from try @ 034f4890 with catch @ 034f4944 */
  iVar4 = (__this->fields).__1__state;
                    /* catch() { ... } // from try @ 034f4778 with catch @ 034f4948 */
  pFVar6 = (__this->fields).__4__this;
                    /* catch() { ... } // from try @ 034f47a4 with catch @ 034f494c */
                    /* catch() { ... } // from try @ 034f469c with catch @ 034f4950 */
                    /* catch() { ... } // from try @ 034f4888 with catch @ 034f4954 */
  if (iVar4 == 1) {
                    /* catch() { ... } // from try @ 034f4868 with catch @ 034f49c8 */
                    /* catch() { ... } // from try @ 034f4864 with catch @ 034f49cc */
    iVar1 = (__this->fields).frames;
                    /* catch() { ... } // from try @ 034f441c with catch @ 034f49d0 */
                    /* catch() { ... } // from try @ 034f4860 with catch @ 034f49d4 */
    (__this->fields).__1__state = -1;
                    /* catch() { ... } // from try @ 034f427c with catch @ 034f49d8 */
    iVar4 = (__this->fields)._i_5__4 + 1;
                    /* catch() { ... } // from try @ 034f485c with catch @ 034f49dc */
    (__this->fields)._i_5__4 = iVar4;
  }
  else {
                    /* catch() { ... } // from try @ 034f4884 with catch @ 034f4958 */
    if (iVar4 != 0) {
      return false;
    }
                    /* catch() { ... } // from try @ 034f477c with catch @ 034f495c */
                    /* catch() { ... } // from try @ 034f46c0 with catch @ 034f4960 */
    (__this->fields).__1__state = -1;
                    /* catch() { ... } // from try @ 034f4880 with catch @ 034f4964 */
                    /* catch() { ... } // from try @ 034f4720 with catch @ 034f4968 */
                    /* catch() { ... } // from try @ 034f471c with catch @ 034f496c */
                    /* catch() { ... } // from try @ 034f4634 with catch @ 034f4970 */
                    /* catch() { ... } // from try @ 034f42a8 with catch @ 034f4974 */
    if (((pFVar6 == (Fight_o *)0x0) ||
        (pBVar3 = (pFVar6->fields).FAJCMHDLBEJ, pBVar3 == (Camera_o *)0x0)) ||
       (pMVar2 = (pBVar3->fields).LIICCFBEOLC, pMVar2 == (Render_o *)0x0)) goto LAB_034f4a5c;
                    /* catch() { ... } // from try @ 034f4788 with catch @ 034f4978 */
                    /* catch() { ... } // from try @ 034f4448 with catch @ 034f497c */
                    /* catch() { ... } // from try @ 034f45e0 with catch @ 034f4980 */
                    /* catch() { ... } // from try @ 034f487c with catch @ 034f4984 */
    Render__KCHJHDCDKGB
              (pMVar2,(UnityEngine_Color_o)(__this->fields).color.fields,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034f45b4 with catch @ 034f4988 */
    iVar1 = (__this->fields).frames;
                    /* catch() { ... } // from try @ 034f46d4 with catch @ 034f498c */
    if (iVar1 == 0) {
      pBVar3 = (pFVar6->fields).FAJCMHDLBEJ;
                    /* catch() { ... } // from try @ 034f4568 with catch @ 034f4a30 */
                    /* catch() { ... } // from try @ 034f4854 with catch @ 034f4a34 */
                    /* catch() { ... } // from try @ 034f4560 with catch @ 034f4a38 */
      if ((pBVar3 != (Camera_o *)0x0) &&
         (pMVar2 = (pBVar3->fields).LIICCFBEOLC, pMVar2 != (Render_o *)0x0)) {
                    /* catch() { ... } // from try @ 034f4538 with catch @ 034f4a3c */
        Render__GHCGOFHFBGO(pMVar2,255.0,(MethodInfo *)0x0);
        return false;
      }
      goto LAB_034f4a5c;
    }
                    /* catch() { ... } // from try @ 034f47b4 with catch @ 034f4990 */
                    /* catch() { ... } // from try @ 034f4730 with catch @ 034f4994 */
                    /* catch() { ... } // from try @ 034f488c with catch @ 034f4998
                       catch() { ... } // from try @ 034f4894 with catch @ 034f4998 */
                    /* catch() { ... } // from try @ 034f42b4 with catch @ 034f499c */
                    /* catch() { ... } // from try @ 034f47dc with catch @ 034f49a0 */
                    /* catch() { ... } // from try @ 034f4878 with catch @ 034f49a4 */
    (__this->fields)._step_5__2 = 255.0 / (float)iVar1;
                    /* catch() { ... } // from try @ 034f4580 with catch @ 034f49a8 */
    (__this->fields)._opacity_5__3 = 0.0;
                    /* catch() { ... } // from try @ 034f4874 with catch @ 034f49ac */
    if ((__this->fields).show == false) {
                    /* catch() { ... } // from try @ 034f4870 with catch @ 034f49b0 */
                    /* catch() { ... } // from try @ 034f486c with catch @ 034f49b4 */
      (__this->fields)._step_5__2 = -(255.0 / (float)iVar1);
                    /* catch() { ... } // from try @ 034f4318 with catch @ 034f49b8 */
      (__this->fields)._opacity_5__3 = 255.0;
    }
                    /* catch() { ... } // from try @ 034f42ec with catch @ 034f49bc */
    iVar4 = 0;
                    /* catch() { ... } // from try @ 034f4450 with catch @ 034f49c0 */
    (__this->fields)._i_5__4 = 0;
                    /* catch() { ... } // from try @ 034f4478 with catch @ 034f49c4 */
  }
                    /* catch() { ... } // from try @ 034f4858 with catch @ 034f49e0 */
                    /* catch() { ... } // from try @ 034f4254 with catch @ 034f49e4 */
  if (iVar1 <= iVar4) {
                    /* try { // try from 034f4a54 to 035f4a57 has its CatchHandler @ 034f4a84 */
    return false;
  }
  BCEJOJECHDA = (__this->fields)._opacity_5__3 + (__this->fields)._step_5__2;
  (__this->fields)._opacity_5__3 = BCEJOJECHDA;
                    /* try { // try from 034f49fc to 035f49ff has its CatchHandler @ 034f4a24 */
  if (((pFVar6 != (Fight_o *)0x0) &&
      (pBVar3 = (pFVar6->fields).FAJCMHDLBEJ, pBVar3 != (Camera_o *)0x0)) &&
     (pMVar2 = (pBVar3->fields).LIICCFBEOLC, pMVar2 != (Render_o *)0x0)) {
    Render__GHCGOFHFBGO(pMVar2,BCEJOJECHDA,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).__2__current;
                    /* try { // try from 034f4a10 to 035f4a23 has its CatchHandler @ 034f4bf8 */
    *ppIVar5 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar5,0);
                    /* catch() { ... } // from try @ 034f49fc with catch @ 034f4a24
                       try { // try from 034f4a24 to 035f4a53 has its CatchHandler @ 034f4064 */
    (__this->fields).__1__state = 1;
    return true;
  }
LAB_034f4a5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x33F4A60]
// Fight.AONMAECAFAD$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x33F4A60

Il2CppObject *
Fight_AONMAECAFAD__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Fight_AONMAECAFAD_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33F4A68]
// Fight.AONMAECAFAD$$System.Collections.IEnumerator.Reset @ RVA 0x33F4A68

void Fight_AONMAECAFAD__System_Collections_IEnumerator_Reset
               (Fight_AONMAECAFAD_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* try { // try from 034f4a70 to 035f4a83 has its CatchHandler @ 034f4bf8 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* catch() { ... } // from try @ 034f4a54 with catch @ 034f4a84
                       try { // try from 034f4a84 to 035f4ab3 has its CatchHandler @ 034f4064 */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034f43fc with catch @ 034f4a90 */
  uVar1 = thunk_FUN_01bb9178(&Method_FCJBEKHDLAF_AONMAECAFAD_System_Collections_IEnumerator_Reset__)
  ;
                    /* catch() { ... } // from try @ 034f4404 with catch @ 034f4a94 */
                    /* catch() { ... } // from try @ 034f4850 with catch @ 034f4a98 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034f43d4 with catch @ 034f4a9c */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33F4AA0]
// Fight.AONMAECAFAD$$System.Collections.IEnumerator.get_Current @ RVA 0x33F4AA0

Il2CppObject *
Fight_AONMAECAFAD__System_Collections_IEnumerator_get_Current
          (Fight_AONMAECAFAD_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

