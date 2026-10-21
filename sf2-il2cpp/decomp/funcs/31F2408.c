// NLPJLHOEAOE$$AMJJDIMFCFI @ RVA 0x31F2408

void NLPJLHOEAOE__AMJJDIMFCFI(KCJCIJHMEJF_o *CJNHFNHJHPE,MethodInfo *method)

{
  KCJCIJHMEJF_o **ppKVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566dba & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dba = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  ppKVar1 = &NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  *ppKVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppKVar1,CJNHFNHJHPE);
  return;
}

