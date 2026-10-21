// CPNHNIKFGFB$$AIHNLLGNBLC @ RVA 0x3079604

CPNHNIKFGFB_o * CPNHNIKFGFB__AIHNLLGNBLC(MethodInfo *method)

{
  CPNHNIKFGFB_o *pCVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04565fc8 & 1) == 0) {
    FUN_01bab630(&CPNHNIKFGFB_TypeInfo);
    DAT_04565fc8 = 1;
  }
  pCVar1 = CPNHNIKFGFB_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pCVar1 == (CPNHNIKFGFB_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pCVar1 = auVar2._0_8_;
    CPNHNIKFGFB___ctor(pCVar1,auVar2._8_8_);
    CPNHNIKFGFB_TypeInfo->static_fields->CBDMFFMCJBK = pCVar1;
    thunk_FUN_01c20e04(CPNHNIKFGFB_TypeInfo->static_fields,pCVar1);
    pCVar1 = CPNHNIKFGFB_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pCVar1;
}

