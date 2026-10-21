// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34F4FEC

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,FIALDHOKCBK_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *EELDDPEAGGA;
  PJKHAJKEHEL_o *pPVar2;
  
  if ((DAT_045687ce & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045687ce = 1;
  }
  pPVar2 = (__this->fields).FAPMJJBOFEF;
  if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) && (CPECAEHDDDB != (FIALDHOKCBK_o *)0x0)) {
    bVar1 = FIALDHOKCBK__IPDNPCFJOAN(CPECAEHDDDB,(pPVar2->fields).PKCIGNCFMNF,(MethodInfo *)0x0);
    if (bVar1) {
      EELDDPEAGGA = FIALDHOKCBK__KCHJCGEMCGE(CPECAEHDDDB,(MethodInfo *)0x0);
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
      }
      PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,false,1.0,1.0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

