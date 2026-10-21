// TypeDefIndex 3211
// Namespace: 
// [CompilerGenerated]
// private sealed class LHKALFIIJKB.BNPEMKLOPBC : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public float p_interval; // 0x20
//   private WaitForSeconds <delay>5__2; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x3500C50]
// LHKALFIIJKB.BNPEMKLOPBC$$.ctor @ RVA 0x3500C50

void LHKALFIIJKB_BNPEMKLOPBC___ctor
               (LHKALFIIJKB_BNPEMKLOPBC_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x35021C0]
// LHKALFIIJKB.BNPEMKLOPBC$$System.IDisposable.Dispose @ RVA 0x35021C0

void LHKALFIIJKB_BNPEMKLOPBC__System_IDisposable_Dispose
               (LHKALFIIJKB_BNPEMKLOPBC_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x35021C4]
// LHKALFIIJKB.BNPEMKLOPBC$$MoveNext @ RVA 0x35021C4

bool LHKALFIIJKB_BNPEMKLOPBC__MoveNext(LHKALFIIJKB_BNPEMKLOPBC_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_WaitForSeconds_o **ppUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppObject **ppIVar3;
  float seconds;
  
  if ((DAT_04568860 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568860 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
                    /* try { // try from 03602254 to 0370225b has its CatchHandler @ 036022c8 */
    (__this->fields).__1__state = -1;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360226c to 03702277 has its CatchHandler @ 036022c0 */
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    LHKALFIIJKB__DAFNBBJHFJL((System_Action_o *)0x0,method);
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).p_interval;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields)._delay_5__2;
    *ppUVar2 = __this_00;
    thunk_FUN_01c20e04(ppUVar2,__this_00);
  }
                    /* try { // try from 03602278 to 037022b7 has its CatchHandler @ 03602184 */
  ppIVar3 = &(__this->fields).__2__current;
  *ppIVar3 = (Il2CppObject *)(__this->fields)._delay_5__2;
  thunk_FUN_01c20e04(ppIVar3);
  (__this->fields).__1__state = 1;
  return true;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x35022A8]
// LHKALFIIJKB.BNPEMKLOPBC$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x35022A8

Il2CppObject *
LHKALFIIJKB_BNPEMKLOPBC__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (LHKALFIIJKB_BNPEMKLOPBC_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x35022B0]
// LHKALFIIJKB.BNPEMKLOPBC$$System.Collections.IEnumerator.Reset @ RVA 0x35022B0

void LHKALFIIJKB_BNPEMKLOPBC__System_Collections_IEnumerator_Reset
               (LHKALFIIJKB_BNPEMKLOPBC_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* try { // try from 036022b8 to 037022bb has its CatchHandler @ 036022c4 */
                    /* try { // try from 036022bc to 037022df has its CatchHandler @ 03602184 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360226c with catch @ 036022c0
                        */
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036022b8 with catch @ 036022c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03602254 with catch @ 036022c8
                        */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_LHKALFIIJKB_BNPEMKLOPBC_System_Collections_IEnumerator_Reset__)
  ;
                    /* try { // try from 036022e0 to 037022e3 has its CatchHandler @ 0360230c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036022e4 to 0370231b has its CatchHandler @ 03602184 */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x35022E8]
// LHKALFIIJKB.BNPEMKLOPBC$$System.Collections.IEnumerator.get_Current @ RVA 0x35022E8

Il2CppObject *
LHKALFIIJKB_BNPEMKLOPBC__System_Collections_IEnumerator_get_Current
          (LHKALFIIJKB_BNPEMKLOPBC_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

