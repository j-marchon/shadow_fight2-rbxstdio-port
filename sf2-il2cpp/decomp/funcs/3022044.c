// OKKPDLAJBFD$$MergeFrom @ RVA 0x3022044

void OKKPDLAJBFD__MergeFrom(OKKPDLAJBFD_o *__this,OKKPDLAJBFD_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  OKKPDLAJBFD_Fields *pOVar3;
  PGICCMFLDPI_o **ppPVar4;
  
  if ((DAT_04565c57 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04565c57 = 1;
  }
  if (IBKIPBJJCPG == (OKKPDLAJBFD_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).LGHDNNJIJGO != (PGICCMFLDPI_o *)0x0) {
    ppPVar4 = &(__this->fields).LGHDNNJIJGO;
    pPVar1 = *ppPVar4;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar4 = pPVar1;
      thunk_FUN_01c20e04(ppPVar4,pPVar1);
      pPVar1 = *ppPVar4;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) goto LAB_03122160;
    }
    PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).LGHDNNJIJGO,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IPIKAEDIBOD != (PGICCMFLDPI_o *)0x0) {
    ppPVar4 = &(__this->fields).IPIKAEDIBOD;
    pPVar1 = *ppPVar4;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar4 = pPVar1;
      thunk_FUN_01c20e04(ppPVar4,pPVar1);
      pPVar1 = *ppPVar4;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
LAB_03122160:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).IPIKAEDIBOD,(MethodInfo *)0x0);
  }
  pOVar3 = &__this->fields;
  pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar3->CKFPENBPNML = pGVar2;
  thunk_FUN_01c20e04(pOVar3,pGVar2);
  return;
}

