// OLCBPIHLPEC$$MergeFrom @ RVA 0x35BAF10

void OLCBPIHLPEC__MergeFrom(OLCBPIHLPEC_o *__this,OLCBPIHLPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  long lVar5;
  OLCBPIHLPEC_Fields *pOVar6;
  PGICCMFLDPI_o **ppPVar7;
  
  if ((DAT_04568ecd & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568ecd = 1;
  }
  if (IBKIPBJJCPG == (OLCBPIHLPEC_o *)0x0) {
    return;
  }
  lVar5 = (IBKIPBJJCPG->fields).NGODFBDEMLE;
  if (lVar5 != 0) {
    (__this->fields).NGODFBDEMLE = lVar5;
  }
  pSVar4 = (IBKIPBJJCPG->fields).IAEBJKOPDAO;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      OLCBPIHLPEC__EEMGLBFKELA(__this,pSVar4,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      (__this->fields).EMDNDLOODLG = iVar1;
    }
    pSVar4 = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        OLCBPIHLPEC__IPNMMELEIJE(__this,pSVar4,method);
      }
      if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
        ppPVar7 = &(__this->fields).MIINPPOCPCN;
        pPVar2 = *ppPVar7;
        if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
          pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
          PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
          *ppPVar7 = pPVar2;
          thunk_FUN_01c20e04(ppPVar7,pPVar2);
          pPVar2 = *ppPVar7;
          if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_036bb020;
        }
        PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
      }
      pOVar6 = &__this->fields;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pOVar6->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pOVar6->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pOVar6,pGVar3);
      return;
    }
  }
LAB_036bb020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

