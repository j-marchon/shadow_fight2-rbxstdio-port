// PNLFHHJGDLI$$KKHMJPANHCI @ RVA 0x3326468

void PNLFHHJGDLI__KKHMJPANHCI(int32_t NKENMPPEILF,bool MLNDMELNGIK,MethodInfo *method)

{
  if ((DAT_04567888 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    DAT_04567888 = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (MLNDMELNGIK) {
    Nekki_Audio_AudioManager__Mute(NKENMPPEILF,(MethodInfo *)0x0);
    return;
  }
  Nekki_Audio_AudioManager__UnMute(NKENMPPEILF,(MethodInfo *)0x0);
  return;
}

