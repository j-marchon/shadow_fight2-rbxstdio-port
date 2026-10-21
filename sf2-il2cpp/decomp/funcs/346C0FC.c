// OGHIOMKFPLH$$HHNCFGEAGNO @ RVA 0x346C0FC

void OGHIOMKFPLH__HHNCFGEAGNO(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0356c118 to 0366c127 has its CatchHandler @ 0356c1d4 */
  if ((DAT_04568300 & 1) == 0) {
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    DAT_04568300 = 1;
    method = extraout_x1;
  }
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OGHIOMKFPLH_TypeInfo,method);
  }
  OGHIOMKFPLH_TypeInfo->static_fields->_PEOFDHDGLCH_k__BackingField = CJNHFNHJHPE;
  return;
}

