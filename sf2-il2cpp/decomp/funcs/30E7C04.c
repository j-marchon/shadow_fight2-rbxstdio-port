// HOOAAGABMBL$$JKGFLFGMALB @ RVA 0x30E7C04

bool HOOAAGABMBL__JKGFLFGMALB(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_045663fe & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045663fe = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._LLNNLKPLLBN_k__BackingField == false) {
    bVar1 = false;
  }
  else {
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
    if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA
                       (__this_00,(__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    bVar1 = pIVar2 != (IGFGDDANEPE_o *)0x0;
  }
  return bVar1;
}

