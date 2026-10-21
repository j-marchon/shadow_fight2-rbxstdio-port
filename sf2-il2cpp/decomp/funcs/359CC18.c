// Nekki.Utils.RaidBetaLogger$$OKDDBDJLADD @ RVA 0x359CC18

System_String_o * Nekki_Utils_RaidBetaLogger__OKDDBDJLADD(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04568df8 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 0369cc48 to 0379cd33 has its CatchHandler @ 0369cc48
                       catch() { ... } // from try @ 0369cc48 with catch @ 0369cc48
                       catch() { ... } // from try @ 0369cd58 with catch @ 0369cc48
                       catch() { ... } // from try @ 0369cd98 with catch @ 0369cc48
                       catch() { ... } // from try @ 0369cdc0 with catch @ 0369cc48
                       catch() { ... } // from try @ 0369cdf8 with catch @ 0369cc48 */
    FUN_01bab630(&StringLiteral_1510);
    DAT_04568df8 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1510,(MethodInfo *)0x0);
  return pSVar1;
}

