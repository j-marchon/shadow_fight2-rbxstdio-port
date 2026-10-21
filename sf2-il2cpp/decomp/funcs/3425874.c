// FIMAAAOEIGM$$MergeFrom @ RVA 0x3425874

void FIMAAAOEIGM__MergeFrom(FIMAAAOEIGM_o *__this,FIMAAAOEIGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  FIMAAAOEIGM_Fields *pFVar5;
  AADKBCFCLKK_o **ppAVar6;
  PGICCMFLDPI_o **ppPVar7;
  KAMBBJFPLGM_o **ppKVar8;
  
  if ((DAT_04568107 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568107 = 1;
  }
  if (IBKIPBJJCPG == (FIMAAAOEIGM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PMFAFJFPHGO != (AADKBCFCLKK_o *)0x0) {
    ppAVar6 = &(__this->fields).PMFAFJFPHGO;
    pAVar1 = *ppAVar6;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
      AADKBCFCLKK___ctor(pAVar1,(MethodInfo *)0x0);
      *ppAVar6 = pAVar1;
      thunk_FUN_01c20e04(ppAVar6,pAVar1);
      pAVar1 = *ppAVar6;
      if (pAVar1 == (AADKBCFCLKK_o *)0x0) goto LAB_03525a0c;
    }
    AADKBCFCLKK__MergeFrom(pAVar1,(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).AFIPKDNMBKJ != false) {
    (__this->fields).AFIPKDNMBKJ = true;
  }
  if ((IBKIPBJJCPG->fields).OBKCJGGIEMF != (PGICCMFLDPI_o *)0x0) {
    ppPVar7 = &(__this->fields).OBKCJGGIEMF;
    pPVar2 = *ppPVar7;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar7 = pPVar2;
      thunk_FUN_01c20e04(ppPVar7,pPVar2);
      pPVar2 = *ppPVar7;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_03525a0c;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar8 = &(__this->fields).OPHCNELIOLD;
    pKVar3 = *ppKVar8;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pKVar3 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar8 = pKVar3;
      thunk_FUN_01c20e04(ppKVar8,pKVar3);
      pKVar3 = *ppKVar8;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
LAB_03525a0c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pFVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pFVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pFVar5->CKFPENBPNML = pGVar4;
  thunk_FUN_01c20e04(pFVar5,pGVar4);
  return;
}

