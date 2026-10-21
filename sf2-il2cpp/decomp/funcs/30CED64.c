// JHMFOIIPEHB$$MergeFrom @ RVA 0x30CED64

void JHMFOIIPEHB__MergeFrom(JHMFOIIPEHB_o *__this,JHMFOIIPEHB_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  JHMFOIIPEHB_Fields *pJVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_045662ed & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045662ed = 1;
  }
  if (IBKIPBJJCPG != (JHMFOIIPEHB_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).LMHBPLAAEIE;
    if (lVar3 != 0) {
      (__this->fields).LMHBPLAAEIE = lVar3;
    }
    if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).MIINPPOCPCN;
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
        pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
        *ppPVar5 = pPVar1;
        thunk_FUN_01c20e04(ppPVar5,pPVar1);
        pPVar1 = *ppPVar5;
        if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    }
    pJVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pJVar4,pGVar2);
    return;
  }
  return;
}

