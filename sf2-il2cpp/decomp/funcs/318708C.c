// CKCJCNFBOLB.<>c$$KMODLEEDGIE @ RVA 0x318708C

System_String_o * CKCJCNFBOLB_<>c__KMODLEEDGIE(CKCJCNFBOLB___c_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int local_14;
  
  if ((DAT_045669e4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045669e4 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 032870f0 to 033870f7 has its CatchHandler @ 032875a0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03287100 to 03387107 has its CatchHandler @ 0328759c */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03287118 to 0338711f has its CatchHandler @ 03287594 */
    local_14 = 0x14 - iVar1;
    pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
                    /* try { // try from 03287130 to 03387137 has its CatchHandler @ 0328758c */
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

