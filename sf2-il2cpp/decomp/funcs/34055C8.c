// MGNPHCAAEIO$$PKNDHONBNIF @ RVA 0x34055C8

bool MGNPHCAAEIO__PKNDHONBNIF(MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *pEVar2;
  long lVar3;
  
  if ((DAT_04568011 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568011 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
    lVar3 = (pEVar2->fields).NCMLGNEFKBF;
    if (lVar3 < 0) {
      bVar1 = false;
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = lVar3 <= NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

