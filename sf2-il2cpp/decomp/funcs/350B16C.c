// FKDLCJJOGIP$$AIHNLLGNBLC @ RVA 0x350B16C

FKDLCJJOGIP_o * FKDLCJJOGIP__AIHNLLGNBLC(MethodInfo *method)

{
  FKDLCJJOGIP_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_045688c5 & 1) == 0) {
    FUN_01bab630(&FKDLCJJOGIP_TypeInfo);
    DAT_045688c5 = 1;
  }
  __this = FKDLCJJOGIP_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (FKDLCJJOGIP_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    FKDLCJJOGIP___ctor(__this,auVar1._8_8_);
    FKDLCJJOGIP_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(FKDLCJJOGIP_TypeInfo->static_fields,__this);
  }
  return __this;
}

