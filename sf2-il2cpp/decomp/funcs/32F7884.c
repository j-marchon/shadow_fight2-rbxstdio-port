// EEOMEMBBGNA$$OGBNPDLJNBG @ RVA 0x32F7884

void EEOMEMBBGNA__OGBNPDLJNBG(EEOMEMBBGNA_o *__this,EPCCNLNOALL_o *ADHJMIOENHG,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar2;
  MethodInfo *method_00;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  
                    /* catch() { ... } // from try @ 033f7870 with catch @ 033f7894 */
                    /* try { // try from 033f789c to 034f78a3 has its CatchHandler @ 033f78b8 */
  if ((DAT_045676a2 & 1) == 0) {
                    /* try { // try from 033f78a4 to 034f78af has its CatchHandler @ 033f75f4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033f78b0 to 034f78b7 has its CatchHandler @ 033f78b8 */
    DAT_045676a2 = 1;
  }
                    /* catch() { ... } // from try @ 033f77f0 with catch @ 033f78b8
                       catch() { ... } // from try @ 033f7844 with catch @ 033f78b8
                       catch() { ... } // from try @ 033f789c with catch @ 033f78b8
                       catch() { ... } // from try @ 033f78b0 with catch @ 033f78b8 */
  if (ADHJMIOENHG == (EPCCNLNOALL_o *)0x0) {
    return;
  }
  PBNPKBJKFHE = (ADHJMIOENHG->fields).KOGEBALMCBB;
  EEOMEMBBGNA__DCFBDLHNGJP(__this,PBNPKBJKFHE,method);
  LLJHKLPGMGC = (ADHJMIOENHG->fields).OPHCNELIOLD;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__JOMFHMDCMNG(pEVar1,LLJHKLPGMGC,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) && (pEVar1 != (EEGDOGKBLNG_o *)0x0)) {
      method_00 = (MethodInfo *)0x1;
      EEGDOGKBLNG__JMMFCMIIDHL(pEVar1,(PBNPKBJKFHE->fields).GJNOEAKNMOG,true,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        PEJIFIIDFMM = EEGDOGKBLNG__APCMGOCHMGC(pEVar1,(MethodInfo *)0x0);
        pMVar2 = EEOMEMBBGNA__MPCGKMBAHHO(__this,PEJIFIIDFMM,method_00);
        if (pMVar2 == (MGDJPGGPDJI_o *)0x0) {
          return;
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
          EEGDOGKBLNG__IJIJACHHPBO(pEVar1,(pMVar2->fields).BDPMJNBHKIJ,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

