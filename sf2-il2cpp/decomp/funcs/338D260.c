// AJJPCMDCAOB$$OHKAAEMIIOD @ RVA 0x338D260

void AJJPCMDCAOB__OHKAAEMIIOD(AJJPCMDCAOB_o *__this,DMKKAPNMDKJ_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  AJJPCMDCAOB_o *__this_00;
  System_Collections_Generic_List_HEOCHMFJJLH__o *pSVar1;
  System_Collections_Generic_List_HEOCHMFJJLH__o **ppSVar2;
  MethodInfo *method_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04567bf2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0348d294 to 0358d2a3 has its CatchHandler @ 0348d2a4 */
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
                    /* catch() { ... } // from try @ 0348d190 with catch @ 0348d2a4
                       catch() { ... } // from try @ 0348d294 with catch @ 0348d2a4 */
                    /* try { // try from 0348d2a8 to 0358d2ab has its CatchHandler @ 0348d2b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
                    /* try { // try from 0348d2ac to 0358d2b7 has its CatchHandler @ 0348caec */
                    /* catch() { ... } // from try @ 0348d2a8 with catch @ 0348d2b4 */
    FUN_01bab630(&StringLiteral_11551);
    FUN_01bab630(&StringLiteral_9850);
    FUN_01bab630(&StringLiteral_9849);
    DAT_04567bf2 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    method_00 = (MethodInfo *)0x0;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11551,BBBLOLJAMJP,(MethodInfo *)0x0);
    if (IDCGLBOIAFJ != (DMKKAPNMDKJ_o *)0x0) {
      if ((IDCGLBOIAFJ->fields).PEKGJKIHHKJ != false) {
        pSVar1 = AJJPCMDCAOB__KAOMHFAJAJB(__this_00,(IDCGLBOIAFJ->fields).BEIPGOKBAEI,method_00);
        if (pSVar1 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((pSVar1->fields)._size < 1) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_9849,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).EAFGMIMPOCE;
          if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
        }
        else {
          ppSVar2 = &(__this->fields).AJNMDODJJFD;
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
          pSVar3 = (__this->fields).JNBAAFICFDI;
          if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
        }
        return;
      }
      NFNBHPOJFNJ__KCBJCLNBGAO(6,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9850,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EAFGMIMPOCE;
      if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348d3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar3->fields).super.super.invoke_impl)
                  ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

