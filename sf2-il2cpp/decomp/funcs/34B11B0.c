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
    FUN_01bab630(&StringLiteral_11557);
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
    Nekki_Utils_DetailedLog__Error(StringLiteral_11557,BBBLOLJAMJP,(MethodInfo *)0x0);
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

