// OLKKAIFGGAK$$EMCBNFILMMJ @ RVA 0x34F3D70

void OLKKAIFGGAK__EMCBNFILMMJ(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  GBJGJEGPHKD_o *pGVar1;
  IEFEBEDLHNN_o *pIVar2;
  int iVar3;
  CNDPAJOLKFN_o *pCVar4;
  OLKKAIFGGAK_o *pOVar5;
  float fVar6;
  
  iVar3 = (__this->fields).NABJGMHJKDG;
  if (iVar3 == 0) {
    pOVar5 = (__this->fields).BPJMMBGIMNC;
    if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
      pGVar1 = (__this->fields).HMIAFJALFCJ;
      if ((((pGVar1 != (GBJGJEGPHKD_o *)0x0) &&
           (pIVar2 = GBJGJEGPHKD__ILECMJOENMK(pGVar1,(MethodInfo *)0x0),
           pIVar2 != (IEFEBEDLHNN_o *)0x0)) &&
          (pCVar4 = (pIVar2->fields).CNMHHKAMGPI, pCVar4 != (CNDPAJOLKFN_o *)0x0)) &&
         (pGVar1 = (pOVar5->fields).HMIAFJALFCJ, pGVar1 != (GBJGJEGPHKD_o *)0x0)) {
        fVar6 = (pCVar4->fields).super.OHHDBINAJCB;
        pIVar2 = GBJGJEGPHKD__ILECMJOENMK(pGVar1,(MethodInfo *)0x0);
        if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
           (pCVar4 = (pIVar2->fields).CNMHHKAMGPI, pCVar4 != (CNDPAJOLKFN_o *)0x0)) {
          iVar3 = -1;
          if (fVar6 <= (pCVar4->fields).super.OHHDBINAJCB) {
            iVar3 = 1;
          }
          goto LAB_035f3de4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = 1;
  }
LAB_035f3de4:
  (__this->fields).LCCDJMDFHJD = iVar3;
  return;
}

