// MGNPHCAAEIO$$DBGCPPPLKDF @ RVA 0x3400880

bool MGNPHCAAEIO__DBGCPPPLKDF(MethodInfo *method)

{
  if ((DAT_04567feb & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567feb = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MGNPHCAAEIO_TypeInfo->static_fields->_PNGNJMNDMPC_k__BackingField;
}

