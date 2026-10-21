// OJHLANCHFPC$$MergeFrom @ RVA 0x34D9174

void OJHLANCHFPC__MergeFrom(OJHLANCHFPC_o *__this,OJHLANCHFPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  OJHLANCHFPC_Fields *pOVar4;
  AADKBCFCLKK_o **ppAVar5;
  PGICCMFLDPI_o **ppPVar6;
  
  if ((DAT_045686f9 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045686f9 = 1;
  }
  if (IBKIPBJJCPG == (OJHLANCHFPC_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PKIDDHNAOAC != (AADKBCFCLKK_o *)0x0) {
    ppAVar5 = &(__this->fields).PKIDDHNAOAC;
    pAVar1 = *ppAVar5;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
      AADKBCFCLKK___ctor(pAVar1,(MethodInfo *)0x0);
      *ppAVar5 = pAVar1;
      thunk_FUN_01c20e04(ppAVar5,pAVar1);
      pAVar1 = *ppAVar5;
      if (pAVar1 == (AADKBCFCLKK_o *)0x0) goto LAB_035d929c;
    }
    AADKBCFCLKK__MergeFrom(pAVar1,(IBKIPBJJCPG->fields).PKIDDHNAOAC,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OBKCJGGIEMF != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).OBKCJGGIEMF;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
LAB_035d929c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0);
  }
  pOVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pOVar4,pGVar3);
  return;
}

