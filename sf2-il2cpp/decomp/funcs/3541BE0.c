// LKJJCAEOJBG$$MergeFrom @ RVA 0x3541BE0

void LKJJCAEOJBG__MergeFrom(LKJJCAEOJBG_o *__this,LKJJCAEOJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  LKJJCAEOJBG_Fields *pLVar4;
  
  if (IBKIPBJJCPG != (LKJJCAEOJBG_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    if (lVar3 != 0) {
      (__this->fields).MKGNDFBBANC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    if (iVar1 != 0) {
      (__this->fields).IGBAAAHPLAA = iVar1;
    }
    pLVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pLVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pLVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pLVar4,pGVar2);
    return;
  }
  return;
}

