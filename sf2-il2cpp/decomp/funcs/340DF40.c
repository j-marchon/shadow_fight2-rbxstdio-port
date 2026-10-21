// MGNPHCAAEIO$$MIPDFEIIKJM @ RVA 0x340DF40

void MGNPHCAAEIO__MIPDFEIIKJM(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568059 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568059 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO_TypeInfo->static_fields->_DMBODIMEBBF_k__BackingField = CJNHFNHJHPE;
  return;
}

