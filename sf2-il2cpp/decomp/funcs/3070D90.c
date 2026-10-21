// EEGDOGKBLNG$$PALANAIJAFE @ RVA 0x3070D90

int64_t EEGDOGKBLNG__PALANAIJAFE(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  int64_t iVar3;
  EOLFEKNCPLM_o *pEVar4;
  GKLPDMLELJF_o *pGVar5;
  
  if ((DAT_04565f68 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    DAT_04565f68 = 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  iVar3 = 0;
  if (pKVar2 != (KAMBBJFPLGM_o *)0x0) {
    bVar1 = KAMBBJFPLGM__ODJAMCJCHGG(pKVar2,(MethodInfo *)0x0);
    iVar3 = 0;
    if (bVar1) {
      pKVar2 = (__this->fields).MLAAJICBOAD;
      if (((pKVar2 == (KAMBBJFPLGM_o *)0x0) ||
          (pEVar4 = (pKVar2->fields).FLAFELDNABC, pEVar4 == (EOLFEKNCPLM_o *)0x0)) ||
         (pGVar5 = (pEVar4->fields).MCOPPCNPAHF, pGVar5 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (pGVar5->fields).ADEIKPGDIPM.fields.value;
    }
  }
  return iVar3;
}

