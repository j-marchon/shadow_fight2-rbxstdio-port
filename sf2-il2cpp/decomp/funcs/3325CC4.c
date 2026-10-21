// PNLFHHJGDLI$$NLKIBPNJDJL @ RVA 0x3325CC4

void PNLFHHJGDLI__NLKIBPNJDJL(MethodInfo *method)

{
  int NKENMPPEILF;
  
  if ((DAT_04567875 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567875 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NKENMPPEILF = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL <= NKENMPPEILF) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Audio_AudioManager__Pause(true,NKENMPPEILF,(MethodInfo *)0x0);
    NKENMPPEILF = NKENMPPEILF + 1;
  }
  return;
}

