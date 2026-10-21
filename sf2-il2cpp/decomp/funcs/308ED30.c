// AKOMJPINHEN$$OJAPEIKHMAP @ RVA 0x308ED30

void AKOMJPINHEN__OJAPEIKHMAP(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0318ed48 to 0328ed6f has its CatchHandler @ 0318f3fc */
  if ((DAT_0456608e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456608e = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,(pEVar1->fields).MICFEIBNOLM,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

