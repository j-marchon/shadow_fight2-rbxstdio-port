// Nekki.Utils.RaidBetaLogger$$get_UPLOAD_TIMEOUT @ RVA 0x35A4C20

System_TimeSpan_o Nekki_Utils_RaidBetaLogger__get_UPLOAD_TIMEOUT(MethodInfo *method)

{
  if ((DAT_04568df4 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568df4 = 1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036a4c70 to 037a4c97 has its CatchHandler @ 036a5298 */
  return (System_TimeSpan_o)
         (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->_LHFHJAHDOOA_k__BackingField).fields.
         _ticks;
}

