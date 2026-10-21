// EEGDOGKBLNG$$PLFLMELHBPN @ RVA 0x3071314

System_String_o * EEGDOGKBLNG__PLFLMELHBPN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  System_String_o **ppSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04565f6e & 1) == 0) {
    auVar5 = FUN_01bab630(&StringLiteral_1);
    DAT_04565f6e = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
    ppSVar4 = (System_String_o **)&StringLiteral_1;
  }
  else {
    pEVar2 = (pKVar1->fields).FLAFELDNABC;
    if ((pEVar2 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    ppSVar4 = &(pGVar3->fields).FFOIEHLJLDA;
  }
  return *ppSVar4;
}

