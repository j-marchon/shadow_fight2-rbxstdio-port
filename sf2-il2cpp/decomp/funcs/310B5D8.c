// BJEFHIBMHEJ$$MergeFrom @ RVA 0x310B5D8

void BJEFHIBMHEJ__MergeFrom(BJEFHIBMHEJ_o *__this,BJEFHIBMHEJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  BJEFHIBMHEJ_Fields *pBVar3;
  
  if (IBKIPBJJCPG != (BJEFHIBMHEJ_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).BNFCJPJJIEJ;
    if (iVar1 != 0) {
      (__this->fields).BNFCJPJJIEJ = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).PDABDFMKGDH;
    if (iVar1 != 0) {
      (__this->fields).PDABDFMKGDH = iVar1;
    }
    pBVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pBVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pBVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pBVar3,pGVar2);
    return;
  }
  return;
}

