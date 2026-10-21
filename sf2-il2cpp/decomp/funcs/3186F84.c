// CKCJCNFBOLB.<>c$$KELLCGINCJD @ RVA 0x3186F84

System_String_o * CKCJCNFBOLB_<>c__KELLCGINCJD(CKCJCNFBOLB___c_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *pAVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int local_24;
  
  if ((DAT_045669e3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045669e3 = 1;
    method = extraout_x1;
  }
  local_24 = 0;
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0328702c to 03387053 has its CatchHandler @ 032875ac */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      iVar2 = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
      local_24 = iVar1 * 10 - iVar2;
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03287088 to 033870b3 has its CatchHandler @ 032875a8 */
  FUN_01bab8c8();
}

