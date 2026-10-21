// PNLFHHJGDLI$$FPPAOOIPKEO @ RVA 0x332526C

bool PNLFHHJGDLI__FPPAOOIPKEO(MethodInfo *method)

{
  int32_t BJMMLGEBJDK;
  bool bVar1;
  
  if ((DAT_0456786f & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456786f = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  bVar1 = Nekki_Audio_AudioManager__IsPlaying(BJMMLGEBJDK,(MethodInfo *)0x0);
  return bVar1;
}

