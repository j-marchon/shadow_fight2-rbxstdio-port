// EEOMEMBBGNA$$ICNCJDCHLJE @ RVA 0x32F891C

void EEOMEMBBGNA__ICNCJDCHLJE
               (EEOMEMBBGNA_o *__this,int32_t EJCBNPCNCBF,int32_t HAOHGBBPBII,MethodInfo *method)

{
  MFKCBFODPNJ_o *__this_00;
  CFMDGLMCNIL_o *__this_01;
  
                    /* try { // try from 033f8924 to 034f892b has its CatchHandler @ 033f8d48 */
                    /* try { // try from 033f893c to 034f893f has its CatchHandler @ 033f8d34 */
  if ((DAT_045676ca & 1) == 0) {
                    /* try { // try from 033f894c to 034f894f has its CatchHandler @ 033f8d38 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MFKCBFODPNJ_TypeInfo);
    DAT_045676ca = 1;
  }
  __this_00 = (MFKCBFODPNJ_o *)thunk_FUN_01bda818(MFKCBFODPNJ_TypeInfo);
  MFKCBFODPNJ___ctor(__this_00,EJCBNPCNCBF,HAOHGBBPBII,(MethodInfo *)0x0);
                    /* try { // try from 033f8988 to 034f89af has its CatchHandler @ 033f8b70 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_01 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__MPFFOIIBAKO(__this_01,(OHPOFOPJIMB_o *)__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

