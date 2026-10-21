// EPCCNLNOALL$$.ctor @ RVA 0x32FB5EC

void EPCCNLNOALL___ctor(EPCCNLNOALL_o *__this,EPCCNLNOALL_o *IBKIPBJJCPG,MethodInfo *method)

{
  OJEHKJHEBID_o *pOVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (EPCCNLNOALL_o *)0x0) {
    pOVar1 = (IBKIPBJJCPG->fields).KOGEBALMCBB;
    if (pOVar1 == (OJEHKJHEBID_o *)0x0) {
      pOVar1 = (OJEHKJHEBID_o *)0x0;
    }
    else {
      pOVar1 = OJEHKJHEBID__Clone(pOVar1,(MethodInfo *)0x0);
    }
    if (__this != (EPCCNLNOALL_o *)0x0) {
      (__this->fields).KOGEBALMCBB = pOVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
        pKVar2 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
                    /* try { // try from 033fb670 to 034fb677 has its CatchHandler @ 033fb6f8 */
                    /* try { // try from 033fb678 to 034fb67b has its CatchHandler @ 033fb6e0 */
                    /* try { // try from 033fb67c to 034fb67f has its CatchHandler @ 033fb6dc */
                    /* try { // try from 033fb680 to 034fb683 has its CatchHandler @ 033fb6b4 */
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

