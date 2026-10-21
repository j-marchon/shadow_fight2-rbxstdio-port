// Nekki.Utils.RaidBetaLogger$$EFNGLBGMOGG @ RVA 0x35A355C

void Nekki_Utils_RaidBetaLogger__EFNGLBGMOGG(System_TimeSpan_o CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568de9 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568de9 = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo,method);
  }
  (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->_LHFHJAHDOOA_k__BackingField).fields._ticks =
       (int64_t)CJNHFNHJHPE.fields._ticks;
  return;
}

