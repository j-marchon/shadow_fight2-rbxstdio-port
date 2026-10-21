// AMIINPEKKFB$$GPAJFKADBKK @ RVA 0x3510C80

void AMIINPEKKFB__GPAJFKADBKK
               (BKKPAKHJDKB_o *MEJOGHDACNG,System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  ADJEBFOPFFF_o *__this;
  MAEAAOFOANA_o *__this_00;
  FAIJGJCCKJC_o *pFVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
                    /* try { // try from 03610c8c to 03710c93 has its CatchHandler @ 03610cf0 */
  if ((DAT_045688eb & 1) == 0) {
                    /* try { // try from 03610ca4 to 03710caf has its CatchHandler @ 03610ce8 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03610cb0 to 03710cdf has its CatchHandler @ 03610bf8 */
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    DAT_045688eb = 1;
  }
  if ((MEJOGHDACNG != (BKKPAKHJDKB_o *)0x0) && ((MEJOGHDACNG->fields).HHJIJKJCEOF == 0)) {
                    /* try { // try from 03610ce0 to 03710ce3 has its CatchHandler @ 03610cec */
                    /* try { // try from 03610ce4 to 03710d07 has its CatchHandler @ 03610bf8 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ca4 with catch @ 03610ce8
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ce0 with catch @ 03610cec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610c8c with catch @ 03610cf0
                        */
    __this = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this == (ADJEBFOPFFF_o *)0x0) {
LAB_03610d7c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ADJEBFOPFFF__AEADCLCKCEL(__this,(MEJOGHDACNG->fields).EBJBJCPBFLE,false,(MethodInfo *)0x0);
                    /* try { // try from 03610d08 to 03710d0b has its CatchHandler @ 03610d2c */
    pFVar1 = (MEJOGHDACNG->fields).IJDPHADMDKN;
                    /* try { // try from 03610d0c to 03710d33 has its CatchHandler @ 03610bf8 */
    if (((pFVar1 != (FAIJGJCCKJC_o *)0x0) &&
        (pJVar2 = (pFVar1->fields).FBBBEHLGDJK, pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) &&
       ((pJVar2->fields).CBKACDJHFNE != false)) {
                    /* catch() { ... } // from try @ 03610d08 with catch @ 03610d2c */
      __this_00 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
                    /* try { // try from 03610d34 to 03710d3b has its CatchHandler @ 03610d50 */
      MAEAAOFOANA___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03610d3c to 03710d47 has its CatchHandler @ 03610bf8 */
      if (__this_00 == (MAEAAOFOANA_o *)0x0) goto LAB_03610d7c;
                    /* try { // try from 03610d48 to 03710d4f has its CatchHandler @ 03610d50 */
      (__this_00->fields).EBBNAOLNKGD = (MEJOGHDACNG->fields).EBJBJCPBFLE;
      thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03610d34 with catch @ 03610d50
                       catch(type#2 @ 00000000) { ... } // from try @ 03610d48 with catch @ 03610d50
                        */
      JJPNLEPEAFM__EFLNJLIDLEF(__this_00,(MethodInfo *)0x0);
    }
    if (BLMFLPJJMPF != (System_Action_BKKPAKHJDKB__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03610d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                ((BLMFLPJJMPF->fields).super.super.method_code,MEJOGHDACNG,
                 (BLMFLPJJMPF->fields).super.super.method);
      return;
    }
  }
  return;
}

