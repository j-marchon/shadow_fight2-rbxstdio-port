// GCIFMNHADDF$$AIHNLLGNBLC @ RVA 0x31ABD30

GCIFMNHADDF_o * GCIFMNHADDF__AIHNLLGNBLC(MethodInfo *method)

{
  GCIFMNHADDF_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566b41 & 1) == 0) {
    FUN_01bab630(&GCIFMNHADDF_TypeInfo);
    DAT_04566b41 = 1;
  }
  __this = GCIFMNHADDF_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (GCIFMNHADDF_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    GCIFMNHADDF___ctor(__this,auVar1._8_8_);
    GCIFMNHADDF_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(GCIFMNHADDF_TypeInfo->static_fields,__this);
  }
  return __this;
}

