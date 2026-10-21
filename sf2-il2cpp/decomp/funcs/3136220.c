// OFFIONDOEPM$$AIHNLLGNBLC @ RVA 0x3136220

OFFIONDOEPM_o * OFFIONDOEPM__AIHNLLGNBLC(MethodInfo *method)

{
  OFFIONDOEPM_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566704 & 1) == 0) {
    FUN_01bab630(&OFFIONDOEPM_TypeInfo);
    DAT_04566704 = 1;
  }
  __this = OFFIONDOEPM_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (OFFIONDOEPM_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    OFFIONDOEPM___ctor(__this,auVar1._8_8_);
    OFFIONDOEPM_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(OFFIONDOEPM_TypeInfo->static_fields,__this);
  }
  return __this;
}

