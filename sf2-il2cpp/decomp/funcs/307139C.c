// EEGDOGKBLNG$$APCMGOCHMGC @ RVA 0x307139C

int64_t EEGDOGKBLNG__APCMGOCHMGC(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
    iVar1 = 0;
  }
  else {
    pEVar3 = (pKVar2->fields).FLAFELDNABC;
    if ((pEVar3 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pGVar4->fields).ANAJGHJEEOC;
  }
  return iVar1;
}

