// KGBIBHEFBHA$$MergeFrom @ RVA 0x3303F68

void KGBIBHEFBHA__MergeFrom(KGBIBHEFBHA_o *__this,KGBIBHEFBHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  KGBIBHEFBHA_Fields *pKVar4;
  
  if (IBKIPBJJCPG != (KGBIBHEFBHA_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar3 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    if (iVar1 != 0) {
      (__this->fields).HCBJCMDLODI = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      (__this->fields).NLLKMEMKBAF = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).NCDPJGNAKPN;
    if (iVar1 != 0) {
      (__this->fields).NCDPJGNAKPN = iVar1;
    }
    pKVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar4->CKFPENBPNML = pGVar2;
                    /* try { // try from 03403fc0 to 03503fc7 has its CatchHandler @ 034041c8 */
    thunk_FUN_01c20e04(pKVar4,pGVar2);
    return;
  }
  return;
}

