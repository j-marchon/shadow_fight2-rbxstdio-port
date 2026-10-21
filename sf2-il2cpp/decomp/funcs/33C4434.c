// OGNCMFBMBMB$$AIHNLLGNBLC @ RVA 0x33C4434

OGNCMFBMBMB_o * OGNCMFBMBMB__AIHNLLGNBLC(MethodInfo *method)

{
  OGNCMFBMBMB_o *pOVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04567de5 & 1) == 0) {
    FUN_01bab630(&OGNCMFBMBMB_TypeInfo);
    DAT_04567de5 = 1;
  }
  pOVar1 = OGNCMFBMBMB_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pOVar1 == (OGNCMFBMBMB_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pOVar1 = auVar2._0_8_;
    OGNCMFBMBMB___ctor(pOVar1,auVar2._8_8_);
    OGNCMFBMBMB_TypeInfo->static_fields->CBDMFFMCJBK = pOVar1;
    thunk_FUN_01c20e04(OGNCMFBMBMB_TypeInfo->static_fields,pOVar1);
    pOVar1 = OGNCMFBMBMB_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pOVar1;
}

