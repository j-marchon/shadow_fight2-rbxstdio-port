// CKCJCNFBOLB.<>c$$JLAEDNPFJFA @ RVA 0x3186C44

System_String_o * CKCJCNFBOLB_<>c__JLAEDNPFJFA(CKCJCNFBOLB___c_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *pAVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int local_24;
  
  if ((DAT_045669df & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045669df = 1;
    method = extraout_x1;
  }
  local_24 = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 03286c9c to 03386ca3 has its CatchHandler @ 03286dd4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03286cb8 to 03386cbf has its CatchHandler @ 03286de4 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03286cc4 to 03386ccf has its CatchHandler @ 03286dd8 */
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 03286ce4 to 03386cff has its CatchHandler @ 03286dd0 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03286d04 to 03386d13 has its CatchHandler @ 03286dcc */
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 03286d14 to 03386da3 has its CatchHandler @ 03286b08 */
      iVar2 = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
      local_24 = iVar1 * 100 + iVar2 * -2;
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

