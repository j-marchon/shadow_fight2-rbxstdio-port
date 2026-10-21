// LJNJDFEAIOH$$IGLJNCEHFOI @ RVA 0x3037EE4

void LJNJDFEAIOH__IGLJNCEHFOI(LJNJDFEAIOH_o *__this,AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  AADKBCFCLKK_o **ppAVar1;
  CHDGOFBHAFI_o *pCVar2;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 03137ef0 to 03237eff has its CatchHandler @ 03137f14 */
                    /* try { // try from 03137f00 to 03237f1b has its CatchHandler @ 03137f94 */
                    /* catch() { ... } // from try @ 03137e60 with catch @ 03137f08 */
  if ((DAT_04565d7d & 1) == 0) {
                    /* catch() { ... } // from try @ 03137e98 with catch @ 03137f14
                       catch() { ... } // from try @ 03137ef0 with catch @ 03137f14 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03137f1c to 03237f3b has its CatchHandler @ 03137ae0 */
    DAT_04565d7d = 1;
  }
                    /* catch() { ... } // from try @ 03137bbc with catch @ 03137f20 */
  ppAVar1 = &(__this->fields).IHODMKCBNKJ;
                    /* catch() { ... } // from try @ 03137c54 with catch @ 03137f24 */
  *ppAVar1 = DKMMBMBMJBO;
  thunk_FUN_01c20e04(ppAVar1,DKMMBMBMJBO);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03137f3c to 03237f3f has its CatchHandler @ 03137f68 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03137f40 to 03237f77 has its CatchHandler @ 03137ae0 */
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    CHDGOFBHAFI__PNLACGIDHPI(pCVar2,1,(MethodInfo *)0x0);
    if (DKMMBMBMJBO == (AADKBCFCLKK_o *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03137f3c with catch @ 03137f68 */
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
                    /* try { // try from 03137f78 to 03237f7f has its CatchHandler @ 03137f94 */
                    /* try { // try from 03137f80 to 03237f8b has its CatchHandler @ 03137ae0 */
      EEGDOGKBLNG__JJBFCLBGNBO(__this_00,(DKMMBMBMJBO->fields).AMKHEHFFAKJ,(MethodInfo *)0x0);
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 03137f8c to 03237f93 has its CatchHandler @ 03137f94 */
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
                    /* catch() { ... } // from try @ 03137e78 with catch @ 03137f94
                       catch() { ... } // from try @ 03137f00 with catch @ 03137f94
                       catch() { ... } // from try @ 03137f78 with catch @ 03137f94
                       catch() { ... } // from try @ 03137f8c with catch @ 03137f94 */
        method_01 = (MethodInfo *)0x0;
        CHDGOFBHAFI__KDLABEFIDFG(pCVar2,DKMMBMBMJBO,(MethodInfo *)0x0);
        LJNJDFEAIOH__OAPADFFJJCH(__this,DKMMBMBMJBO,method_01);
        LJNJDFEAIOH__MHJKLCKMFMO(__this,(DKMMBMBMJBO->fields).LHFLMBNKPHF,method_01);
        LJNJDFEAIOH__CPMHIEJENLD(__this,DKMMBMBMJBO,method_01);
        LJNJDFEAIOH__KGKDFGCGHPC(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

