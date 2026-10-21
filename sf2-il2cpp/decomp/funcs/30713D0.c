// EEGDOGKBLNG$$BCOMIMBOGIM @ RVA 0x30713D0

void EEGDOGKBLNG__BCOMIMBOGIM(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *LLJHKLPGMGC,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  KAMBBJFPLGM_o *pKVar4;
  
  EEGDOGKBLNG__LHHHAKCIBHC(__this,(MethodInfo *)LLJHKLPGMGC);
  EEGDOGKBLNG__JOMFHMDCMNG(__this,LLJHKLPGMGC,method);
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if (((pKVar4 != (KAMBBJFPLGM_o *)0x0) && ((pKVar4->fields).GNKNDHJHFOC == 0x32)) &&
     (bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(1,(MethodInfo *)0x0), bVar1)) {
    pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
      if ((iVar2 == 6) &&
         (bVar1 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0), bVar1)) {
        return;
      }
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__DHMIJAAHPEI(pNVar3,(MethodInfo *)0x0);
        pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__NPDADBCINPL(pNVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

