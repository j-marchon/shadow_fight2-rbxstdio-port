// EEGDOGKBLNG$$IGIHHCEONEM @ RVA 0x306FDD8

int32_t EEGDOGKBLNG__IGIHHCEONEM(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
    iVar1 = 1;
  }
  else {
    pEVar3 = (pKVar2->fields).FLAFELDNABC;
    if ((pEVar3 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pGVar4->fields).PEBHLKLGDBM;
  }
  return iVar1;
}

