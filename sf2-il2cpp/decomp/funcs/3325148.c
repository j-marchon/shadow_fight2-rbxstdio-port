// PNLFHHJGDLI$$NEKJIEEEPFO @ RVA 0x3325148

void PNLFHHJGDLI__NEKJIEEEPFO(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  PNLFHHJGDLI_StaticFields *pPVar1;
  
  if ((DAT_0456787c & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787c = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
  if (pPVar1->GBBBAEHFPLH == CJNHFNHJHPE) {
    return;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pPVar1 = PNLFHHJGDLI_TypeInfo->static_fields;
    method = extraout_x1_01;
  }
  pPVar1->GBBBAEHFPLH = CJNHFNHJHPE;
  PNLFHHJGDLI__HNLKJHFIJIN(CJNHFNHJHPE,method);
  return;
}

