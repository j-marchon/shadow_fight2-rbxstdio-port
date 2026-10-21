// NLPJLHOEAOE$$HNJKLCLDKHP @ RVA 0x31FDCA0

bool NLPJLHOEAOE__HNJKLCLDKHP(uint32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 032fdcb4 to 033fdcbb has its CatchHandler @ 032fdda8 */
  if ((DAT_04566dfd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032fdcd0 to 033fdcd7 has its CatchHandler @ 032fdda4 */
    DAT_04566dfd = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032fdcd8 to 033fdd97 has its CatchHandler @ 032fdbc0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar1 = ACHLOMELAJE__FFNBJGDLIAK(__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

