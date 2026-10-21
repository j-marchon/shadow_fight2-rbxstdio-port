// KEGDLHPEJBG$$MergeFrom @ RVA 0x35A9240

void KEGDLHPEJBG__MergeFrom(KEGDLHPEJBG_o *__this,KEGDLHPEJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *CJNHFNHJHPE;
  long lVar2;
  KEGDLHPEJBG_Fields *pKVar3;
  
  if (IBKIPBJJCPG == (KEGDLHPEJBG_o *)0x0) {
                    /* try { // try from 036a92a0 to 037a9623 has its CatchHandler @ 036a92a0
                       catch() { ... } // from try @ 036a92a0 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a988c with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b48 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b54 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b68 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b78 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9c90 with catch @ 036a92a0 */
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      KEGDLHPEJBG__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    lVar2 = (IBKIPBJJCPG->fields).HFHGCALGKHH;
    if (lVar2 != 0) {
      (__this->fields).HFHGCALGKHH = lVar2;
    }
    pKVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pKVar3,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

