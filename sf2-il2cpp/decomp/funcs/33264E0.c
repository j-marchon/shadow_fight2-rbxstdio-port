// PNLFHHJGDLI$$ADEMCPBEKPK @ RVA 0x33264E0

void PNLFHHJGDLI__ADEMCPBEKPK(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567880 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567880 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField = CJNHFNHJHPE;
  return;
}

