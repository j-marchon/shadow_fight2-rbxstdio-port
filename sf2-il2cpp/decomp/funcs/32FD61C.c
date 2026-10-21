// PGICCMFLDPI$$MergeFrom @ RVA 0x32FD61C

void PGICCMFLDPI__MergeFrom(PGICCMFLDPI_o *__this,PGICCMFLDPI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  PGICCMFLDPI_Fields *pPVar3;
  
  if (IBKIPBJJCPG != (PGICCMFLDPI_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (lVar2 != 0) {
      (__this->fields).GDKPGIBMFPA = lVar2;
    }
    pPVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pPVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pPVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pPVar3,pGVar1);
    return;
  }
  return;
}

