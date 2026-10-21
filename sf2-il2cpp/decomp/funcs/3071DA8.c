// GGDHPLABCGI$$MergeFrom @ RVA 0x3071DA8

void GGDHPLABCGI__MergeFrom(GGDHPLABCGI_o *__this,GGDHPLABCGI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  GGDHPLABCGI_Fields *pGVar3;
  
  if (IBKIPBJJCPG != (GGDHPLABCGI_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    if (iVar1 != 0) {
      (__this->fields).PDOMCPONBNB = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      (__this->fields).EMDNDLOODLG = iVar1;
    }
    pGVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pGVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pGVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pGVar3,pGVar2);
    return;
  }
  return;
}

