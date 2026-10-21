// OPNFCOGALLI$$GIENGNEGHPJ @ RVA 0x310A2E0

void OPNFCOGALLI__GIENGNEGHPJ(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  GBJGJEGPHKD_o *pGVar1;
  IEFEBEDLHNN_o *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_0456652a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9292);
    FUN_01bab630(&StringLiteral_9291);
    DAT_0456652a = 1;
    method = extraout_x1;
  }
  pGVar1 = (__this->fields).KOHECBJAFKG;
  if (pGVar1 != (GBJGJEGPHKD_o *)0x0) {
    pIVar2 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar1,StringLiteral_9291,(MethodInfo *)0x0);
    (__this->fields).PKADCPJHGDI = pIVar2;
    thunk_FUN_01c20e04(&(__this->fields).PKADCPJHGDI);
    pGVar1 = (__this->fields).KOHECBJAFKG;
    method = extraout_x1_00;
    if (pGVar1 != (GBJGJEGPHKD_o *)0x0) {
      pIVar2 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar1,StringLiteral_9292,(MethodInfo *)0x0);
      (__this->fields).GGPGDDKHOMJ = pIVar2;
      thunk_FUN_01c20e04(&(__this->fields).GGPGDDKHOMJ);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

