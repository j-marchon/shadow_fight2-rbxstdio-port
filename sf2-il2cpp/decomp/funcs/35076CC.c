// KEIAEKNFNNA$$FIHIDMOGGFA @ RVA 0x35076CC

void KEIAEKNFNNA__FIHIDMOGGFA(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  FMOAMIIOKNP_o *pFVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar2;
  KEIAEKNFNNA_Fields *pKVar3;
  
  if ((DAT_045688a9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688a9 = 1;
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      pFVar1 = NLCLFNMIEJC__KKBFNNGJOLN((pAVar2->fields).HPDENNCHNHB,(MethodInfo *)0x0);
      pKVar3 = &__this->fields;
      pKVar3->JEPHJLEICLO = pFVar1;
      thunk_FUN_01c20e04(pKVar3,pFVar1);
      NLCLFNMIEJC__BONNGEGNMLF(pKVar3->JEPHJLEICLO,(__this->fields).DCAEFFHDMGE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

