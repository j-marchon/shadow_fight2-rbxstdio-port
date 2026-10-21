// BDMABHJEEGD$$MergeFrom @ RVA 0x310C6F0

void BDMABHJEEGD__MergeFrom(BDMABHJEEGD_o *__this,BDMABHJEEGD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  BECIPDJBAOG_o *pBVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  BDMABHJEEGD_Fields *pBVar5;
  PGICCMFLDPI_o **ppPVar6;
  BECIPDJBAOG_o **ppBVar7;
  
  if ((DAT_0456654f & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_0456654f = 1;
  }
  if (IBKIPBJJCPG == (BDMABHJEEGD_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
  if (iVar1 != 0) {
    (__this->fields).OHMDCKEDOGH = iVar1;
  }
  if ((IBKIPBJJCPG->fields).LBKLNIPHGMM != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).LBKLNIPHGMM;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_0320c8e4;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).IMNALGKNMNP;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_0320c8e4;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0);
  }
  iVar1 = (IBKIPBJJCPG->fields).OOCPIHHNOBO;
  if (iVar1 != 0) {
    (__this->fields).OOCPIHHNOBO = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).CLLIINPOPHO;
  if (iVar1 != 0) {
    (__this->fields).CLLIINPOPHO = iVar1;
  }
  if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    ppBVar7 = &(__this->fields).MJIIHOLHNCK;
    pBVar3 = *ppBVar7;
    if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
      pBVar3 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
      BECIPDJBAOG___ctor(pBVar3,(MethodInfo *)0x0);
      *ppBVar7 = pBVar3;
      thunk_FUN_01c20e04(ppBVar7,pBVar3);
      pBVar3 = *ppBVar7;
      if (pBVar3 == (BECIPDJBAOG_o *)0x0) goto LAB_0320c8e4;
    }
    BECIPDJBAOG__MergeFrom(pBVar3,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).GMHNOGKNFNB != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).GMHNOGKNFNB;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
LAB_0320c8e4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).GMHNOGKNFNB,(MethodInfo *)0x0);
  }
  pBVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pBVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pBVar5->CKFPENBPNML = pGVar4;
  thunk_FUN_01c20e04(pBVar5,pGVar4);
  return;
}

