// BDMABHJEEGD$$.ctor @ RVA 0x310C5D8

void BDMABHJEEGD___ctor(BDMABHJEEGD_o *__this,BDMABHJEEGD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  PGICCMFLDPI_o *pPVar2;
  BECIPDJBAOG_o *pBVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BDMABHJEEGD_o *)0x0) {
    (__this->fields).OHMDCKEDOGH = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    pPVar2 = (IBKIPBJJCPG->fields).LBKLNIPHGMM;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    (__this->fields).LBKLNIPHGMM = pPVar2;
    thunk_FUN_01c20e04();
    pPVar2 = (IBKIPBJJCPG->fields).IMNALGKNMNP;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    ppPVar5 = &(__this->fields).IMNALGKNMNP;
    *ppPVar5 = pPVar2;
    thunk_FUN_01c20e04(ppPVar5);
    iVar1 = (IBKIPBJJCPG->fields).CLLIINPOPHO;
    (__this->fields).OOCPIHHNOBO = (IBKIPBJJCPG->fields).OOCPIHHNOBO;
    (__this->fields).CLLIINPOPHO = iVar1;
    pBVar3 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
      pBVar3 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar3 = BECIPDJBAOG__Clone(pBVar3,(MethodInfo *)0x0);
    }
    (__this->fields).MJIIHOLHNCK = pBVar3;
    thunk_FUN_01c20e04();
    pPVar2 = (IBKIPBJJCPG->fields).GMHNOGKNFNB;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    (__this->fields).GMHNOGKNFNB = pPVar2;
    thunk_FUN_01c20e04();
    pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar4;
    thunk_FUN_01c20e04(&__this->fields,pGVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

