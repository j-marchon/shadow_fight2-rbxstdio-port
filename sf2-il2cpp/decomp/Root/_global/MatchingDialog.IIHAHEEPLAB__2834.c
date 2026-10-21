// TypeDefIndex 2834
// Namespace: 
// [CompilerGenerated]
// private sealed class MatchingDialog.IIHAHEEPLAB : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public MatchingDialog <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x342D800]
// MatchingDialog.IIHAHEEPLAB$$.ctor @ RVA 0x342D800

void MatchingDialog_IIHAHEEPLAB___ctor
               (MatchingDialog_IIHAHEEPLAB_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x342D828]
// MatchingDialog.IIHAHEEPLAB$$System.IDisposable.Dispose @ RVA 0x342D828

void MatchingDialog_IIHAHEEPLAB__System_IDisposable_Dispose
               (MatchingDialog_IIHAHEEPLAB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x342D82C]
// MatchingDialog.IIHAHEEPLAB$$MoveNext @ RVA 0x342D82C

bool MatchingDialog_IIHAHEEPLAB__MoveNext(MatchingDialog_IIHAHEEPLAB_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_o *__this_00;
  HJEODECHNDG_o *pHVar1;
  UnityEngine_WaitForSeconds_o *__this_01;
  CPNHNIKFGFB_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  MatchingDialog_o *__this_03;
  int iVar3;
  
  if ((DAT_04568151 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    FUN_01bab630(&StringLiteral_5962/*"Error: matching timeout"*/);
    DAT_04568151 = 1;
    method = extraout_x1;
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    __this_03 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK(__this_02,0x29c2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_5962/*"Error: matching timeout"*/,(MethodInfo *)0x0);
      if (__this_03 != (MatchingDialog_o *)0x0) {
        MatchingDialog__DAPAJLBAJPJ(__this_03,method_00);
        return false;
      }
    }
  }
  else {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((__this_00 != (JMDPBFOCHHP_o *)0x0) &&
       (pHVar1 = JMDPBFOCHHP__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0),
       pHVar1 != (HJEODECHNDG_o *)0x0)) {
      iVar3 = (pHVar1->fields)._HJOGHCLHGDF_k__BackingField;
      __this_01 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_01,(float)iVar3 / 1000.0,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_01;
      thunk_FUN_01c20e04(ppIVar2,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x342D98C]
// MatchingDialog.IIHAHEEPLAB$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x342D98C

Il2CppObject *
MatchingDialog_IIHAHEEPLAB__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (MatchingDialog_IIHAHEEPLAB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x342D994]
// MatchingDialog.IIHAHEEPLAB$$System.Collections.IEnumerator.Reset @ RVA 0x342D994

void MatchingDialog_IIHAHEEPLAB__System_Collections_IEnumerator_Reset
               (MatchingDialog_IIHAHEEPLAB_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_MatchingDialog_IIHAHEEPLAB_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x342D9CC]
// MatchingDialog.IIHAHEEPLAB$$System.Collections.IEnumerator.get_Current @ RVA 0x342D9CC

Il2CppObject *
MatchingDialog_IIHAHEEPLAB__System_Collections_IEnumerator_get_Current
          (MatchingDialog_IIHAHEEPLAB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

