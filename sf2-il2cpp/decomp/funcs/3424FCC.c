// PEEIMHCMDND$$FJIPCBOKHFC @ RVA 0x3424FCC

bool PEEIMHCMDND__FJIPCBOKHFC
               (EOLFEKNCPLM_o *INOIMHOFGBG,EOLFEKNCPLM_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  PEEIMHCMDND_o *pPVar2;
  MethodInfo *in_x3;
  System_String_o *local_30;
  System_String_o *pSStack_28;
  
                    /* catch() { ... } // from try @ 03524fb8 with catch @ 03524fe4 */
  if ((DAT_045680fd & 1) == 0) {
                    /* try { // try from 03524ff4 to 03624ffb has its CatchHandler @ 03525010 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03524ffc to 03625007 has its CatchHandler @ 03524ea4 */
    DAT_045680fd = 1;
  }
  local_30 = (System_String_o *)0x0;
  pSStack_28 = (System_String_o *)0x0;
                    /* try { // try from 03525008 to 0362500f has its CatchHandler @ 03525010 */
  if (INOIMHOFGBG == ACNOGKFFDEG) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03524ff4 with catch @ 03525010
                       catch(type#2 @ 00000000) { ... } // from try @ 03525008 with catch @ 03525010
                        */
    if ((INOIMHOFGBG != (EOLFEKNCPLM_o *)0x0) && (ACNOGKFFDEG != (EOLFEKNCPLM_o *)0x0)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      if (pPVar2 != (PEEIMHCMDND_o *)0x0) {
        PEEIMHCMDND__BHCOOILLMGA(pPVar2,INOIMHOFGBG,&pSStack_28,in_x3);
        pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
        if (pPVar2 != (PEEIMHCMDND_o *)0x0) {
          PEEIMHCMDND__BHCOOILLMGA(pPVar2,ACNOGKFFDEG,&local_30,in_x3);
          bVar1 = System_String__Equals(pSStack_28,local_30,5,(MethodInfo *)0x0);
          return !bVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return bVar1;
}

