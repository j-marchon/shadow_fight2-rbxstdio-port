// NGKBNOEJLPH$$EADCLJDHACM @ RVA 0x349892C

float NGKBNOEJLPH__EADCLJDHACM(NGKBNOEJLPH_o *__this,OPNFCOGALLI_o *JALKELIHLPC,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  OPNFCOGALLI_o *__this_00;
  CNDPAJOLKFN_o *pCVar3;
  CNDPAJOLKFN_o *pCVar4;
  float fVar5;
  
  if (JALKELIHLPC != (OPNFCOGALLI_o *)0x0) {
    pIVar1 = OPNFCOGALLI__ILECMJOENMK(JALKELIHLPC,(MethodInfo *)0x0);
    __this_00 = (__this->fields).LGJKGLINMGP;
    if (__this_00 != (OPNFCOGALLI_o *)0x0) {
      pIVar2 = OPNFCOGALLI__ILECMJOENMK(__this_00,(MethodInfo *)0x0);
      if ((pIVar1 == (IEFEBEDLHNN_o *)0x0) || (pIVar2 == (IEFEBEDLHNN_o *)0x0)) {
        fVar5 = 0.0;
      }
      else {
        pCVar3 = (pIVar1->fields).CNMHHKAMGPI;
        if ((pCVar3 == (CNDPAJOLKFN_o *)0x0) ||
           (pCVar4 = (pIVar2->fields).CNMHHKAMGPI, pCVar4 == (CNDPAJOLKFN_o *)0x0))
        goto LAB_035989a0;
        fVar5 = 1.0;
        if ((pCVar3->fields).super.OHHDBINAJCB - (pCVar4->fields).super.OHHDBINAJCB < 0.0) {
          fVar5 = -1.0;
        }
      }
      return fVar5;
    }
  }
LAB_035989a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

