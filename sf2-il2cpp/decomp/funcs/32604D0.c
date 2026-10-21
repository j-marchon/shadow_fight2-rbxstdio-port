// AAPGCAPGBLG$$AIHNLLGNBLC @ RVA 0x32604D0

AAPGCAPGBLG_o * AAPGCAPGBLG__AIHNLLGNBLC(MethodInfo *method)

{
  AAPGCAPGBLG_o *pAVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045671a5 & 1) == 0) {
    FUN_01bab630(&AAPGCAPGBLG_TypeInfo);
    DAT_045671a5 = 1;
  }
  pAVar1 = AAPGCAPGBLG_TypeInfo->static_fields->KNOHKIKFEBL;
  if (pAVar1 == (AAPGCAPGBLG_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pAVar1 = auVar2._0_8_;
    AAPGCAPGBLG___ctor(pAVar1,auVar2._8_8_);
    AAPGCAPGBLG_TypeInfo->static_fields->KNOHKIKFEBL = pAVar1;
    thunk_FUN_01c20e04(AAPGCAPGBLG_TypeInfo->static_fields,pAVar1);
    pAVar1 = AAPGCAPGBLG_TypeInfo->static_fields->KNOHKIKFEBL;
  }
  return pAVar1;
}

