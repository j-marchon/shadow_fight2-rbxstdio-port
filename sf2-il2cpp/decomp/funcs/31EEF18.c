// NLPJLHOEAOE$$JNFIBDBHNOA @ RVA 0x31EEF18

IGFGDDANEPE_o * NLPJLHOEAOE__JNFIBDBHNOA(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *pIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_04566de6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566de6 = 1;
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
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (__this = (pAVar2->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
    pIVar1 = GGHCLMEFIGO__JNFIBDBHNOA(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

