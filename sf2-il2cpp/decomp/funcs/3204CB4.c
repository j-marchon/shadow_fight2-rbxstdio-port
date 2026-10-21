// NLPJLHOEAOE$$BPCKJLOOEKO @ RVA 0x3204CB4

void NLPJLHOEAOE__BPCKJLOOEKO(DOPEEDABNEK_o *CJNHFNHJHPE,MethodInfo *method)

{
  DOPEEDABNEK_o **ppDVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566e16 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e16 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  ppDVar1 = &NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  *ppDVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppDVar1,CJNHFNHJHPE);
  return;
}

