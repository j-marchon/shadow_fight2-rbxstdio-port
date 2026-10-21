// DBOOKMFPFNI$$MergeFrom @ RVA 0x34DB084

void DBOOKMFPFNI__MergeFrom(DBOOKMFPFNI_o *__this,DBOOKMFPFNI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  DBOOKMFPFNI_Fields *pDVar3;
  
  if (IBKIPBJJCPG != (DBOOKMFPFNI_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).LPFKPMGBOGB;
    if (iVar1 != 0) {
      (__this->fields).LPFKPMGBOGB = iVar1;
    }
    pDVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pDVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pDVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pDVar3,pGVar2);
    return;
  }
  return;
}

