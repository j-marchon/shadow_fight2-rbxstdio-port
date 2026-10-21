// CADIGFIBFEN$$MergeFrom @ RVA 0x35653FC

void CADIGFIBFEN__MergeFrom(CADIGFIBFEN_o *__this,CADIGFIBFEN_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  CADIGFIBFEN_Fields *pCVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_04568be9 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568be9 = 1;
  }
  if (IBKIPBJJCPG != (CADIGFIBFEN_o *)0x0) {
    if ((IBKIPBJJCPG->fields).PCKJAOOKJKK != false) {
      (__this->fields).PCKJAOOKJKK = true;
    }
    if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).MIINPPOCPCN;
      pPVar2 = *ppPVar5;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
        *ppPVar5 = pPVar2;
        thunk_FUN_01c20e04(ppPVar5,pPVar2);
        pPVar2 = *ppPVar5;
        if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    }
    if ((IBKIPBJJCPG->fields).PLIIOMEEPLO != false) {
      (__this->fields).PLIIOMEEPLO = true;
    }
    iVar1 = (IBKIPBJJCPG->fields).BLGKCOLNMCK;
    if (iVar1 != 0) {
      (__this->fields).BLGKCOLNMCK = iVar1;
    }
    pCVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pCVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pCVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pCVar4,pGVar3);
    return;
  }
  return;
}

