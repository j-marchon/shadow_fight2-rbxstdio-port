// AKOMJPINHEN$$MCAIDEFDJHF @ RVA 0x308F904

void AKOMJPINHEN__MCAIDEFDJHF(AKOMJPINHEN_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  
  if ((DAT_04566090 & 1) == 0) {
    FUN_01bab630(&AKOMJPINHEN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566090 = 1;
  }
  if ((IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) ||
     ((IIPPMAOIKHB->fields).AMKHEHFFAKJ == (long)AKOMJPINHEN_TypeInfo->static_fields->FNOHBBCCMJD))
  {
    return;
  }
  AKOMJPINHEN__KHFOCHBBBLH(__this,2,method);
  AKOMJPINHEN_TypeInfo->static_fields->FNOHBBCCMJD = (int32_t)(IIPPMAOIKHB->fields).AMKHEHFFAKJ;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,(pEVar1->fields).MICFEIBNOLM,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

