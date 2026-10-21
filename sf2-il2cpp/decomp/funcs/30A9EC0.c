// HCKHJECBIJC$$MergeFrom @ RVA 0x30A9EC0

void HCKHJECBIJC__MergeFrom(HCKHJECBIJC_o *__this,HCKHJECBIJC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  HCKHJECBIJC_Fields *pHVar3;
  
  if (IBKIPBJJCPG != (HCKHJECBIJC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).GCDBBHAFJPN;
    if (iVar1 != 0) {
      (__this->fields).GCDBBHAFJPN = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
    if (iVar1 != 0) {
      (__this->fields).CCCDGBNPNOD = iVar1;
    }
    pHVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar3,pGVar2);
    return;
  }
  return;
}

