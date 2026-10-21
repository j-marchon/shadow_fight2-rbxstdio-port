// HBHFOKIPAHA$$MergeFrom @ RVA 0x338FEF0

void HBHFOKIPAHA__MergeFrom(HBHFOKIPAHA_o *__this,HBHFOKIPAHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  HBHFOKIPAHA_Fields *pHVar4;
  
  if (IBKIPBJJCPG != (HBHFOKIPAHA_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    if (lVar3 != 0) {
      (__this->fields).MAHGAIJBBHF = lVar3;
    }
    lVar3 = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    if (lVar3 != 0) {
      (__this->fields).MKGNDFBBANC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    if (iVar1 != 0) {
      (__this->fields).IGBAAAHPLAA = iVar1;
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

