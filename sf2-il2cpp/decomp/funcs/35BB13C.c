// OLCBPIHLPEC$$.ctor @ RVA 0x35BB13C

void OLCBPIHLPEC___ctor(OLCBPIHLPEC_o *__this,OLCBPIHLPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  OLCBPIHLPEC___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (OLCBPIHLPEC_o *)0x0) {
    (__this->fields).NGODFBDEMLE = (IBKIPBJJCPG->fields).NGODFBDEMLE;
    (__this->fields).IAEBJKOPDAO = (IBKIPBJJCPG->fields).IAEBJKOPDAO;
    thunk_FUN_01c20e04();
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).EGELDFKMOCJ = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
    thunk_FUN_01c20e04();
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

