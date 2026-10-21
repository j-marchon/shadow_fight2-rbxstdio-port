// KBLFOOJFIIG$$MergeFrom @ RVA 0x314EA2C

void KBLFOOJFIIG__MergeFrom(KBLFOOJFIIG_o *__this,KBLFOOJFIIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  KBLFOOJFIIG_Fields *pKVar3;
  
  if (IBKIPBJJCPG != (KBLFOOJFIIG_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (lVar2 != 0) {
      (__this->fields).GDKPGIBMFPA = lVar2;
    }
    pKVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pKVar3,pGVar1);
    return;
  }
  return;
}

