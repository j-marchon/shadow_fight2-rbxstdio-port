// EEOMEMBBGNA$$GMKFPMKJEPO @ RVA 0x32F7658

void EEOMEMBBGNA__GMKFPMKJEPO(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  CFMDGLMCNIL_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676c2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&JOAFCNEGILC_TypeInfo);
                    /* try { // try from 033f7698 to 034f769f has its CatchHandler @ 033f7858 */
    DAT_045676c2 = 1;
    method = extraout_x1;
  }
  KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(JOAFCNEGILC_TypeInfo,method);
                    /* try { // try from 033f76ac to 034f76b3 has its CatchHandler @ 033f77a8 */
  JOAFCNEGILC___ctor((JOAFCNEGILC_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
                    /* try { // try from 033f76b4 to 034f76eb has its CatchHandler @ 033f75f4 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__MPFFOIIBAKO(__this_00,KCPFFLHCCIN,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

