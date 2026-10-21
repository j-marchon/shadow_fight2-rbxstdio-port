// ICPMLKOEANF$$MergeFrom @ RVA 0x32508B0

void ICPMLKOEANF__MergeFrom(ICPMLKOEANF_o *__this,ICPMLKOEANF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  ICPMLKOEANF_Fields *pIVar4;
  
  if (IBKIPBJJCPG != (ICPMLKOEANF_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    if (lVar3 != 0) {
      (__this->fields).OHMDCKEDOGH = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      (__this->fields).NLLKMEMKBAF = iVar1;
    }
    pIVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pIVar4,pGVar2);
    return;
  }
  return;
}

