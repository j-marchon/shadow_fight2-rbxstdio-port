// OGHIOMKFPLH$$ADHABNOABPL @ RVA 0x3473B94

void OGHIOMKFPLH__ADHABNOABPL(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03573b94 to 03673b9b has its CatchHandler @ 03573ca0 */
                    /* try { // try from 03573ba8 to 03673bb3 has its CatchHandler @ 03573c9c */
  if ((DAT_04568306 & 1) == 0) {
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    DAT_04568306 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03573bc8 to 03673bcf has its CatchHandler @ 03573c10 */
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OGHIOMKFPLH_TypeInfo,method);
  }
                    /* try { // try from 03573be4 to 03673bf3 has its CatchHandler @ 03573c14 */
  OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(OGHIOMKFPLH_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}

