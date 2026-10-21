// NCNJEIBHGBH$$AIHNLLGNBLC @ RVA 0x32F5D74

NCNJEIBHGBH_o * NCNJEIBHGBH__AIHNLLGNBLC(MethodInfo *method)

{
  NCNJEIBHGBH_o *pNVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_0456768e & 1) == 0) {
    FUN_01bab630(&NCNJEIBHGBH_TypeInfo);
    DAT_0456768e = 1;
  }
  pNVar1 = NCNJEIBHGBH_TypeInfo->static_fields->KNOHKIKFEBL;
  if (pNVar1 == (NCNJEIBHGBH_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pNVar1 = auVar2._0_8_;
    NCNJEIBHGBH___ctor(pNVar1,auVar2._8_8_);
    NCNJEIBHGBH_TypeInfo->static_fields->KNOHKIKFEBL = pNVar1;
    thunk_FUN_01c20e04(NCNJEIBHGBH_TypeInfo->static_fields,pNVar1);
    pNVar1 = NCNJEIBHGBH_TypeInfo->static_fields->KNOHKIKFEBL;
  }
  return pNVar1;
}

