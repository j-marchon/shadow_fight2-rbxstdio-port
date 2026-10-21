// PNLFHHJGDLI$$OECHILBBMLF @ RVA 0x3319900

void PNLFHHJGDLI__OECHILBBMLF(MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  
  if ((DAT_0456787f & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456787f = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  bVar2 = Nekki_Audio_AudioManager__IsPlaying(iVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
    }
    Nekki_Audio_AudioManager__Pause(false,iVar1,(MethodInfo *)0x0);
    if (DAT_045678e1 == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678e1 = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI_TypeInfo->static_fields->_AJNAEHPIEAJ_k__BackingField = false;
  }
  return;
}

