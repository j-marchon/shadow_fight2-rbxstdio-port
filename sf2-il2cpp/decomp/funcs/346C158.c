// OGHIOMKFPLH$$OEPHALKDDLP @ RVA 0x346C158

int32_t OGHIOMKFPLH__OEPHALKDDLP(MethodInfo *method)

{
                    /* try { // try from 0356c164 to 0366c187 has its CatchHandler @ 0356c1e4 */
  if ((DAT_04568301 & 1) == 0) {
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    DAT_04568301 = 1;
  }
                    /* try { // try from 0356c188 to 0366c1b7 has its CatchHandler @ 0356bf28 */
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OGHIOMKFPLH_TypeInfo->static_fields->_PEOFDHDGLCH_k__BackingField;
}

