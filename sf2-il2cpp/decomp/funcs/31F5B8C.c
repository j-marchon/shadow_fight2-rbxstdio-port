// NLPJLHOEAOE$$HMAMCEMIKEB @ RVA 0x31F5B8C

void NLPJLHOEAOE__HMAMCEMIKEB(MKIBNAAANPO_o *CJNHFNHJHPE,MethodInfo *method)

{
  MKIBNAAANPO_o **ppMVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566dc9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dc9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  ppMVar1 = &NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
  *ppMVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppMVar1,CJNHFNHJHPE);
  return;
}

