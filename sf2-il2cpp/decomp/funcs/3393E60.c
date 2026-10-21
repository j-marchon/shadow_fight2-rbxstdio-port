// KDADMJGPAOM$$MergeFrom @ RVA 0x3393E60

void KDADMJGPAOM__MergeFrom(KDADMJGPAOM_o *__this,KDADMJGPAOM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  KDADMJGPAOM_Fields *pKVar3;
  
  if (IBKIPBJJCPG != (KDADMJGPAOM_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).IILCHFKCEEH;
    if (iVar1 != 0) {
      (__this->fields).IILCHFKCEEH = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).PDGEHKCPGDK;
    if (iVar1 != 0) {
      (__this->fields).PDGEHKCPGDK = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).IOJIABMGMGB;
    if (iVar1 != 0) {
      (__this->fields).IOJIABMGMGB = iVar1;
    }
    pKVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pKVar3,pGVar2);
    return;
  }
  return;
}

