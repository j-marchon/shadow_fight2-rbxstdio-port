// PNLFHHJGDLI$$DAKPBFCAKPB @ RVA 0x33274B8

int32_t PNLFHHJGDLI__DAKPBFCAKPB(MethodInfo *method)

{
  int BJMMLGEBJDK;
  bool bVar1;
  int iVar2;
  
  if ((DAT_0456789b & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789b = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL;
    if (iVar2 <= BJMMLGEBJDK) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Nekki_Audio_AudioManager__IsPlaying(BJMMLGEBJDK,(MethodInfo *)0x0);
    if (!bVar1) {
      return BJMMLGEBJDK;
    }
    BJMMLGEBJDK = BJMMLGEBJDK + 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    iVar2 = PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL;
  }
  return iVar2;
}

