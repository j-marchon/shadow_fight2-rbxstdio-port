// KMDOLFBIGNC$$MergeFrom @ RVA 0x3123368

void KMDOLFBIGNC__MergeFrom(KMDOLFBIGNC_o *__this,KMDOLFBIGNC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  KMDOLFBIGNC_Fields *pKVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_0456663c & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_0456663c = 1;
  }
  if (IBKIPBJJCPG != (KMDOLFBIGNC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    if (iVar1 != 0) {
      (__this->fields).PDOMCPONBNB = iVar1;
    }
    if ((IBKIPBJJCPG->fields).PNGGPPDKHPH != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).PNGGPPDKHPH;
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
      PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).PNGGPPDKHPH,(MethodInfo *)0x0);
    }
    iVar1 = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    if (iVar1 != 0) {
      (__this->fields).HCBJCMDLODI = iVar1;
    }
    pKVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pKVar4,pGVar3);
    return;
  }
  return;
}

