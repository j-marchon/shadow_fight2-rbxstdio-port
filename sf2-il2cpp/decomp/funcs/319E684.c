// KOKJOMBFNCD$$DMCIPJBHCNE @ RVA 0x319E684

void KOKJOMBFNCD__DMCIPJBHCNE(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566acd & 1) == 0) {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566acd = 1;
    method = extraout_x1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KOKJOMBFNCD_TypeInfo,method);
  }
  KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField = CJNHFNHJHPE;
  return;
}

