// EEGDOGKBLNG$$KKMICNJPOKE @ RVA 0x306F0E0

int32_t EEGDOGKBLNG__KKMICNJPOKE(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  KAMBBJFPLGM_o *pKVar3;
  EOLFEKNCPLM_o *pEVar4;
  
  pKVar3 = (__this->fields).MLAAJICBOAD;
  iVar2 = 0;
  if (pKVar3 != (KAMBBJFPLGM_o *)0x0) {
    bVar1 = KAMBBJFPLGM__FOBHCKNLADH(pKVar3,(MethodInfo *)0x0);
    if (bVar1) {
      pKVar3 = (__this->fields).MLAAJICBOAD;
      if ((pKVar3 == (KAMBBJFPLGM_o *)0x0) ||
         (pEVar4 = (pKVar3->fields).FLAFELDNABC, pEVar4 == (EOLFEKNCPLM_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = (pEVar4->fields).ODDCBFOLIGB;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

