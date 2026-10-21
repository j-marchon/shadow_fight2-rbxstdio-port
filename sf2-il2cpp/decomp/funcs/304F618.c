// EIBAKHBHMAO$$MergeFrom @ RVA 0x304F618

void EIBAKHBHMAO__MergeFrom(EIBAKHBHMAO_o *__this,EIBAKHBHMAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  EIBAKHBHMAO_Fields *pEVar4;
  
  if (IBKIPBJJCPG != (EIBAKHBHMAO_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      (__this->fields).EMDNDLOODLG = iVar1;
    }
    lVar3 = (IBKIPBJJCPG->fields).FMNDJOFNPBP;
    if (lVar3 != 0) {
      (__this->fields).FMNDJOFNPBP = lVar3;
    }
    pEVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pEVar4,pGVar2);
    return;
  }
  return;
}

