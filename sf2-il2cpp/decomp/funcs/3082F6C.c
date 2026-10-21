// KFCFGKEHPNK$$OEMIEJCOCDI @ RVA 0x3082F6C

bool KFCFGKEHPNK__OEMIEJCOCDI(MethodInfo *method)

{
  bool bVar1;
  EEOMEMBBGNA_o *pEVar2;
  EEGDOGKBLNG_o *__this;
  int64_t FKIGDGJPIAC;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  
  if ((DAT_04566006 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_4855);
    DAT_04566006 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
    PBNPKBJKFHE = (pEVar2->fields).MICFEIBNOLM;
    if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
      return false;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this != (EEGDOGKBLNG_o *)0x0) {
      FKIGDGJPIAC = EEGDOGKBLNG__APCMGOCHMGC(__this,(MethodInfo *)0x0);
      bVar1 = DOCPIHOLNOA__BJBGLBAEIJB(PBNPKBJKFHE,StringLiteral_4855,FKIGDGJPIAC,(MethodInfo *)0x0)
      ;
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

