// LKAFKHBBNOH$$MergeFrom @ RVA 0x318DE38

void LKAFKHBBNOH__MergeFrom(LKAFKHBBNOH_o *__this,LKAFKHBBNOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  LKAFKHBBNOH_Fields *pLVar3;
  
  if (IBKIPBJJCPG != (LKAFKHBBNOH_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    if (lVar2 != 0) {
      (__this->fields).MAHGAIJBBHF = lVar2;
    }
    lVar2 = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    if (lVar2 != 0) {
      (__this->fields).MKGNDFBBANC = lVar2;
    }
    pLVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pLVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pLVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pLVar3,pGVar1);
    return;
  }
  return;
}

