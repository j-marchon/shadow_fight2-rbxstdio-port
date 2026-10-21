// LCOODJKAICL$$AIHNLLGNBLC @ RVA 0x34A2F10

LCOODJKAICL_o * LCOODJKAICL__AIHNLLGNBLC(MethodInfo *method)

{
  LCOODJKAICL_o *pLVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045684bb & 1) == 0) {
    FUN_01bab630(&LCOODJKAICL_TypeInfo);
    DAT_045684bb = 1;
  }
  pLVar1 = LCOODJKAICL_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pLVar1 == (LCOODJKAICL_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pLVar1 = auVar2._0_8_;
    LCOODJKAICL___ctor(pLVar1,auVar2._8_8_);
    LCOODJKAICL_TypeInfo->static_fields->CBDMFFMCJBK = pLVar1;
    thunk_FUN_01c20e04(LCOODJKAICL_TypeInfo->static_fields,pLVar1);
    pLVar1 = LCOODJKAICL_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pLVar1;
}

