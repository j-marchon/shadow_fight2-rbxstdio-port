// KMAOIKKMFJF$$MergeFrom @ RVA 0x3033020

void KMAOIKKMFJF__MergeFrom(KMAOIKKMFJF_o *__this,KMAOIKKMFJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  KMAOIKKMFJF_Fields *pKVar4;
  
  if (IBKIPBJJCPG != (KMAOIKKMFJF_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    if (iVar1 != 0) {
      (__this->fields).CMKMIFIIGBK = iVar1;
    }
    lVar3 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar3 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar3;
    }
    pKVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pKVar4,pGVar2);
    return;
  }
  return;
}

