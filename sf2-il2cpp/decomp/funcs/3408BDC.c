// MGNPHCAAEIO$$DGLJCGNHLIG @ RVA 0x3408BDC

void MGNPHCAAEIO__DGLJCGNHLIG(MethodInfo *method)

{
  MGNPHCAAEIO_c *pMVar1;
  MGNPHCAAEIO_StaticFields *pMVar2;
  
  if ((DAT_04568029 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568029 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568078 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568078 = '\x01';
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo;
  MGNPHCAAEIO_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField = false;
  if (DAT_0456807a == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456807a = '\x01';
    pMVar1 = MGNPHCAAEIO_TypeInfo;
  }
  if ((pMVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar1 = MGNPHCAAEIO_TypeInfo;
  }
  pMVar2 = pMVar1->static_fields;
  pMVar2->_DMBODIMEBBF_k__BackingField = false;
  pMVar2->CMLIPHOGOFB = false;
  return;
}

