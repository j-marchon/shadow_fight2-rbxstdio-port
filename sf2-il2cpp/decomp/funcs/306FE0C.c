// EEGDOGKBLNG$$GGHGAIBPPJO @ RVA 0x306FE0C

System_String_o * EEGDOGKBLNG__GGHGAIBPPJO(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int32_t startIndex;
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  System_String_o *pSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04565f57 & 1) == 0) {
    auVar5 = FUN_01bab630(&StringLiteral_1);
    DAT_04565f57 = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    pEVar2 = (pKVar1->fields).FLAFELDNABC;
    if (((pEVar2 != (EOLFEKNCPLM_o *)0x0) &&
        (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 != (GKLPDMLELJF_o *)0x0)) &&
       (pSVar4 = (pGVar3->fields).FFOIEHLJLDA, pSVar4 != (System_String_o *)0x0)) {
      startIndex = System_String__IndexOf(pSVar4,0x23,(MethodInfo *)0x0);
      pSVar4 = System_String__Substring(pSVar4,startIndex,(MethodInfo *)0x0);
      return pSVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
  }
  return StringLiteral_1;
}

