// MGNPHCAAEIO$$MBDKHCEIHAA @ RVA 0x3405858

bool MGNPHCAAEIO__MBDKHCEIHAA(MethodInfo *method)

{
  if ((DAT_04568016 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568016 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MGNPHCAAEIO_TypeInfo->static_fields->_DMBODIMEBBF_k__BackingField;
}

