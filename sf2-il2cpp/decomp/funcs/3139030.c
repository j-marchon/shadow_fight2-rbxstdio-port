// NJNCPNBIPCD$$NBNHOMIFDNO @ RVA 0x3139030

void NJNCPNBIPCD__NBNHOMIFDNO(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566713 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04566713 = 1;
    method = extraout_x1;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo,method);
  }
  NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField = CJNHFNHJHPE;
  return;
}

