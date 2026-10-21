// NLPJLHOEAOE$$AHCCELOIBCC @ RVA 0x3208440

DBIINAFCKME_o * NLPJLHOEAOE__AHCCELOIBCC(MethodInfo *method)

{
  DBIINAFCKME_o *__this;
  DBIINAFCKME_o **ppDVar1;
  
  if ((DAT_04566e49 & 1) == 0) {
    FUN_01bab630(&DBIINAFCKME_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e49 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->IJMNBNGBAFC == (DBIINAFCKME_o *)0x0) {
    __this = (DBIINAFCKME_o *)thunk_FUN_01bda818(DBIINAFCKME_TypeInfo);
    DBIINAFCKME___ctor(__this,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppDVar1 = &NLPJLHOEAOE_TypeInfo->static_fields->IJMNBNGBAFC;
    *ppDVar1 = __this;
    thunk_FUN_01c20e04(ppDVar1,__this);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return NLPJLHOEAOE_TypeInfo->static_fields->IJMNBNGBAFC;
}

