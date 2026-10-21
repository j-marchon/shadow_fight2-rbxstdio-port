// MGNPHCAAEIO$$AJMLOLNIMIM @ RVA 0x3401720

void MGNPHCAAEIO__AJMLOLNIMIM(MethodInfo *method)

{
  MGNPHCAAEIO_c *pMVar1;
  
  if ((DAT_04567ff5 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567ff5 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568077 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568077 = '\x01';
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo;
  MGNPHCAAEIO_TypeInfo->static_fields->_DJANJOONIBJ_k__BackingField = false;
  if (DAT_04568078 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568078 = '\x01';
    pMVar1 = MGNPHCAAEIO_TypeInfo;
  }
  if ((pMVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar1 = MGNPHCAAEIO_TypeInfo;
  }
  pMVar1->static_fields->_CANIKCKLKBL_k__BackingField = true;
  return;
}

