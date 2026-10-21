// TypeDefIndex 3016
// Namespace: 
// [CompilerGenerated]
// private sealed class KDPDBGNOFEN.KDFLJCAMJPJ : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public KDPDBGNOFEN <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x34AE364]
// KDPDBGNOFEN.KDFLJCAMJPJ$$.ctor @ RVA 0x34AE364

void KDPDBGNOFEN_KDFLJCAMJPJ___ctor
               (KDPDBGNOFEN_KDFLJCAMJPJ_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34B11AC]
// KDPDBGNOFEN.KDFLJCAMJPJ$$System.IDisposable.Dispose @ RVA 0x34B11AC

void KDPDBGNOFEN_KDFLJCAMJPJ__System_IDisposable_Dispose
               (KDPDBGNOFEN_KDFLJCAMJPJ_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34B11B0]
// KDPDBGNOFEN.KDFLJCAMJPJ$$MoveNext @ RVA 0x34B11B0

bool KDPDBGNOFEN_KDFLJCAMJPJ__MoveNext(KDPDBGNOFEN_KDFLJCAMJPJ_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *extraout_x1;
  KDPDBGNOFEN_o *pKVar3;
  
  if ((DAT_0456855e & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    FUN_01bab630(&StringLiteral_11557/*"SFSConnection::OnConnectionTimeout"*/);
    DAT_0456855e = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
    UnityEngine_WaitForSeconds___ctor(__this_00,5.0,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  (__this->fields).__1__state = -1;
  pKVar3 = (__this->fields).__4__this;
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(StringLiteral_11557/*"SFSConnection::OnConnectionTimeout"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    NFNBHPOJFNJ__KCBJCLNBGAO(0,(MethodInfo *)0x0);
    if (pKVar3 != (KDPDBGNOFEN_o *)0x0) {
      (*(pKVar3->klass->vtable)._4_AIJHJNAPOFC.methodPtr)
                (pKVar3,(pKVar3->klass->vtable)._4_AIJHJNAPOFC.method);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34B12CC]
// KDPDBGNOFEN.KDFLJCAMJPJ$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34B12CC

Il2CppObject *
KDPDBGNOFEN_KDFLJCAMJPJ__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (KDPDBGNOFEN_KDFLJCAMJPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34B12D4]
// KDPDBGNOFEN.KDFLJCAMJPJ$$System.Collections.IEnumerator.Reset @ RVA 0x34B12D4

void KDPDBGNOFEN_KDFLJCAMJPJ__System_Collections_IEnumerator_Reset
               (KDPDBGNOFEN_KDFLJCAMJPJ_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_KDPDBGNOFEN_KDFLJCAMJPJ_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34B130C]
// KDPDBGNOFEN.KDFLJCAMJPJ$$System.Collections.IEnumerator.get_Current @ RVA 0x34B130C

Il2CppObject *
KDPDBGNOFEN_KDFLJCAMJPJ__System_Collections_IEnumerator_get_Current
          (KDPDBGNOFEN_KDFLJCAMJPJ_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

