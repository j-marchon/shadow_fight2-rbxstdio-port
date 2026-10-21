// FIKENOMMMBH$$OLAIMOFPEIL @ RVA 0x34E2C78

/* WARNING: Type propagation algorithm not settling */

bool FIKENOMMMBH__OLAIMOFPEIL(bool DKCOAMDMOKM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NJNCPNBIPCD_o *__this;
  
  method_00 = (MethodInfo *)(ulong)DKCOAMDMOKM;
  if ((DAT_04568748 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17825);
    FUN_01bab630(&StringLiteral_17824);
    FUN_01bab630(&StringLiteral_1);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_11125);
    DAT_04568748 = 1;
  }
  bVar1 = FIKENOMMMBH__DBNJAEEPFFJ(method_00);
  if (bVar1) {
    if (!DKCOAMDMOKM) {
      return false;
    }
  }
  else {
    bVar1 = FIKENOMMMBH__PKMMPNIBFOI((MethodInfo *)(ulong)bVar1);
    if (!DKCOAMDMOKM) {
      return !bVar1;
    }
    if (!bVar1) {
      return true;
    }
  }
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_17825,StringLiteral_17824,StringLiteral_9679,StringLiteral_1,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
             (MethodInfo *)0x0);
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this != (NJNCPNBIPCD_o *)0x0) {
      NJNCPNBIPCD__HJNOLAEOPJF(__this,StringLiteral_11125,(MethodInfo *)0x0);
      return false;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

