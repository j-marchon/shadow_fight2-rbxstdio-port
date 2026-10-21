// CFJANHACGMG$$HBBPAJFLDPL @ RVA 0x3597F10

void CFJANHACGMG__HBBPAJFLDPL(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dac & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04568dac = 1;
    method = extraout_x1;
  }
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo,method);
  }
  CFJANHACGMG_TypeInfo->static_fields->_PCFJKILMDCE_k__BackingField = CJNHFNHJHPE;
  return;
}

