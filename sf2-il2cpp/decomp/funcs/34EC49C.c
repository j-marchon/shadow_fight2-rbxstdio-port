// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34EC49C

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,CAAGJEKMDOA_o *CPECAEHDDDB,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  PJKHAJKEHEL_o *pPVar3;
  System_String_o *EELDDPEAGGA;
  float EPNNOIDBNDC;
  
  if ((DAT_04568796 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04568796 = 1;
  }
  pPVar3 = (__this->fields).FAPMJJBOFEF;
  if ((pPVar3 != (PJKHAJKEHEL_o *)0x0) && (CPECAEHDDDB != (CAAGJEKMDOA_o *)0x0)) {
    bVar2 = CAAGJEKMDOA__IPDNPCFJOAN(CPECAEHDDDB,(pPVar3->fields).PKCIGNCFMNF,(MethodInfo *)0x0);
    if (bVar2) {
      EELDDPEAGGA = (CPECAEHDDDB->fields).NPFMOEOIEKM;
      bVar1 = (CPECAEHDDDB->fields).NDNEMFBCJFC;
      EPNNOIDBNDC = (CPECAEHDDDB->fields).DFNFFGCKNCM;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,bVar1 != false,EPNNOIDBNDC,1.0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

