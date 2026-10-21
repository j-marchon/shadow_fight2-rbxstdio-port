// KKLJIDJBFEI$$MBHIKFMIDAO @ RVA 0x31437C4

KKLJIDJBFEI_o * KKLJIDJBFEI__MBHIKFMIDAO(MethodInfo *method)

{
  KKLJIDJBFEI_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566784 & 1) == 0) {
    FUN_01bab630(&KKLJIDJBFEI_TypeInfo);
    DAT_04566784 = 1;
  }
  __this = KKLJIDJBFEI_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (KKLJIDJBFEI_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    KKLJIDJBFEI___ctor(__this,auVar1._8_8_);
    KKLJIDJBFEI_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(KKLJIDJBFEI_TypeInfo->static_fields,__this);
  }
  return __this;
}

