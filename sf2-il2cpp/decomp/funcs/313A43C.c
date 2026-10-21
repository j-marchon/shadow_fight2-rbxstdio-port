// NJNCPNBIPCD$$AIHNLLGNBLC @ RVA 0x313A43C

NJNCPNBIPCD_o * NJNCPNBIPCD__AIHNLLGNBLC(MethodInfo *method)

{
  NJNCPNBIPCD_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566722 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04566722 = 1;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NJNCPNBIPCD_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (NJNCPNBIPCD_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    NJNCPNBIPCD___ctor(__this,auVar1._8_8_);
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NJNCPNBIPCD_TypeInfo->static_fields->CBDMFFMCJBK = __this;
  thunk_FUN_01c20e04(NJNCPNBIPCD_TypeInfo->static_fields,__this);
  return __this;
}

