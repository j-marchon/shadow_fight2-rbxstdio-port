// NLPJLHOEAOE$$AIHNLLGNBLC @ RVA 0x31F2664

NLPJLHOEAOE_o * NLPJLHOEAOE__AIHNLLGNBLC(MethodInfo *method)

{
  NLPJLHOEAOE_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566e44 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e44 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (NLPJLHOEAOE_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    NLPJLHOEAOE___ctor(__this,auVar1._8_8_);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(NLPJLHOEAOE_TypeInfo->static_fields,__this);
  }
  return __this;
}

