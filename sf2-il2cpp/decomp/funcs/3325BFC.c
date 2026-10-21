// PNLFHHJGDLI$$MEHGLNCEAAG @ RVA 0x3325BFC

void PNLFHHJGDLI__MEHGLNCEAAG
               (int32_t NKENMPPEILF,System_String_o *BNCJPLDMJMH,bool LPDDIIOAIOO,bool BBHKNEKAKMI,
               float EPNNOIDBNDC,float JLBFGCCBGBC,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)LPDDIIOAIOO;
  if ((DAT_04567899 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567899 = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Audio_AudioManager__Play
            (NKENMPPEILF,BNCJPLDMJMH,LPDDIIOAIOO,true,EPNNOIDBNDC,JLBFGCCBGBC,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__KKHMJPANHCI(NKENMPPEILF,BBHKNEKAKMI,method_00);
  return;
}

