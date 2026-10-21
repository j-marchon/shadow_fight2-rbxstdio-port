// MGNPHCAAEIO$$PHBFIAGKIBK @ RVA 0x33FF2D8

System_String_o * MGNPHCAAEIO__PHBFIAGKIBK(MethodInfo *method)

{
  if ((DAT_04567fd6 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fd6 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MGNPHCAAEIO_TypeInfo->static_fields->_NNOAHGCFLOM_k__BackingField;
}

