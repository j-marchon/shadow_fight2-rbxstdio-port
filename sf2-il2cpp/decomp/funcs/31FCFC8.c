// NLPJLHOEAOE$$AHGCCMMKENO @ RVA 0x31FCFC8

void NLPJLHOEAOE__AHGCCMMKENO(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar1;
  int64_t PIBELEMLEPN;
  
  if ((DAT_04566df7 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566df7 = 1;
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
    method = extraout_x1_02;
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    PIBELEMLEPN = (pAVar1->fields).EEICLGMPJIO;
    if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AGILEPNENOH_TypeInfo,method);
    }
    AGILEPNENOH__DKFHOCKJKPG(1,PIBELEMLEPN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

