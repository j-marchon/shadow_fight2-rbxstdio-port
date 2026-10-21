// EPFMFHDGMCE$$ICEPMHDMFLM @ RVA 0x35378A0

EPFMFHDGMCE_o * EPFMFHDGMCE__ICEPMHDMFLM(MethodInfo *method)

{
  EPFMFHDGMCE_o *pEVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04568aa2 & 1) == 0) {
    FUN_01bab630(&EPFMFHDGMCE_TypeInfo);
    DAT_04568aa2 = 1;
  }
  pEVar1 = EPFMFHDGMCE_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pEVar1 == (EPFMFHDGMCE_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pEVar1 = auVar2._0_8_;
    EPFMFHDGMCE___ctor(pEVar1,auVar2._8_8_);
    EPFMFHDGMCE_TypeInfo->static_fields->CBDMFFMCJBK = pEVar1;
    thunk_FUN_01c20e04(EPFMFHDGMCE_TypeInfo->static_fields,pEVar1);
    pEVar1 = EPFMFHDGMCE_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pEVar1;
}

