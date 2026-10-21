// IMBPILFKGEO$$MergeFrom @ RVA 0x30ABC64

void IMBPILFKGEO__MergeFrom(IMBPILFKGEO_o *__this,IMBPILFKGEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  IMBPILFKGEO_Fields *pIVar3;
  
  if (IBKIPBJJCPG != (IMBPILFKGEO_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GJMFPDLPLNH;
    if (lVar2 != 0) {
      (__this->fields).GJMFPDLPLNH = lVar2;
    }
    lVar2 = (IBKIPBJJCPG->fields).DMIOJDBLCGB;
    if (lVar2 != 0) {
      (__this->fields).DMIOJDBLCGB = lVar2;
    }
    pIVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pIVar3,pGVar1);
    return;
  }
  return;
}

