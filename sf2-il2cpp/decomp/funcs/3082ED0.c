// KFCFGKEHPNK$$DJDNNHMCGAE @ RVA 0x3082ED0

System_String_o * KFCFGKEHPNK__DJDNNHMCGAE(MethodInfo *method)

{
  EEOMEMBBGNA_o *__this;
  EEGDOGKBLNG_o *__this_00;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566005 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566005 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((__this_00 != (EEGDOGKBLNG_o *)0x0) &&
     (PEJIFIIDFMM = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0),
     __this != (EEOMEMBBGNA_o *)0x0)) {
    pMVar1 = EEOMEMBBGNA__MPCGKMBAHHO(__this,PEJIFIIDFMM,(MethodInfo *)0x0);
    if (pMVar1 != (MGDJPGGPDJI_o *)0x0) {
      pSVar2 = DKDMBPOCAJL__JHDLBBNGEGA((pMVar1->fields).BDPMJNBHKIJ,(MethodInfo *)0x0);
      return pSVar2;
    }
    return (System_String_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

