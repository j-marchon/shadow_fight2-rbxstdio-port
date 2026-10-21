// HBLHCCMEEEC$$MergeFrom @ RVA 0x3153D24

void HBLHCCMEEEC__MergeFrom(HBLHCCMEEEC_o *__this,HBLHCCMEEEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  HBLHCCMEEEC_Fields *pHVar4;
  
  if (IBKIPBJJCPG != (HBLHCCMEEEC_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).IAAJODFMEIC;
    if (lVar3 != 0) {
      (__this->fields).IAAJODFMEIC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).HEOOKBCLBGN;
    if (iVar1 != 0) {
      (__this->fields).HEOOKBCLBGN = iVar1;
    }
    pHVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar4,pGVar2);
    return;
  }
  return;
}

