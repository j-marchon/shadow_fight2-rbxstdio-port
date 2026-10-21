// CAAGJEKMDOA$$NCMDLPOGBPE @ RVA 0x3582AEC

void CAAGJEKMDOA__NCMDLPOGBPE(CAAGJEKMDOA_o *__this,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this_00;
  System_String_o *BNCJPLDMJMH;
  
  if ((DAT_04568cde & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04568cde = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (AAPGCAPGBLG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = AAPGCAPGBLG__BAFDBLCFCPO
                      (__this_00,(__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
  }
  BNCJPLDMJMH = (__this->fields).NPFMOEOIEKM;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__PPMOLPPCNFC(BNCJPLDMJMH,(MethodInfo *)0x0);
  return;
}

