// MGNPHCAAEIO$$GPILLBADOPD @ RVA 0x340D35C

System_String_o * MGNPHCAAEIO__GPILLBADOPD(MethodInfo *method)

{
  if ((DAT_04568052 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568052 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MGNPHCAAEIO_TypeInfo->static_fields->GPECMIFNCLI;
}

