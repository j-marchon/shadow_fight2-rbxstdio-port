// NLPJLHOEAOE$$PEJHLCBNOFP @ RVA 0x31FDA38

bool NLPJLHOEAOE__PEJHLCBNOFP(int32_t KEMDLBKINAD,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  int iVar2;
  
  if ((DAT_04566df9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566df9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  iVar2 = NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED;
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      iVar2 = NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED;
    }
    bVar1 = iVar2 == KEMDLBKINAD;
  }
  return bVar1;
}

