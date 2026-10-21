// PNLFHHJGDLI$$FDOGCCOEHPL @ RVA 0x33251D8

void PNLFHHJGDLI__FDOGCCOEHPL(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  PNLFHHJGDLI_StaticFields *pPVar1;
  
  if ((DAT_0456788e & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456788e = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  if (pPVar1->MGFLMNJLJLK == CJNHFNHJHPE) {
    return;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  }
  pPVar1->MGFLMNJLJLK = CJNHFNHJHPE;
  PNLFHHJGDLI__KKHMJPANHCI(pPVar1->EEFDLAHNJHL,CJNHFNHJHPE,in_x2);
  return;
}

