// PNLFHHJGDLI$$CMELEMCIOPP @ RVA 0x3326700

void PNLFHHJGDLI__CMELEMCIOPP(int32_t LPINEGEIINJ,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567882 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    DAT_04567882 = 1;
    method = extraout_x1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo,method);
  }
  Nekki_Audio_AudioManager__Stop(LPINEGEIINJ,false,(MethodInfo *)0x0);
  return;
}

