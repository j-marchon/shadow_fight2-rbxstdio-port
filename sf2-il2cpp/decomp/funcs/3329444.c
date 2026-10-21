// PCEDNFLCPPF$$MDPANMJGEEI @ RVA 0x3329444

System_String_o * PCEDNFLCPPF__MDPANMJGEEI(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045678c4 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 03429470 to 03529473 has its CatchHandler @ 03429480 */
                    /* try { // try from 03429474 to 0352949b has its CatchHandler @ 034292b4 */
    FUN_01bab630(&StringLiteral_1544);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342941c with catch @ 03429478
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342940c with catch @ 0342947c
                        */
    DAT_045678c4 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03429470 with catch @ 03429480
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034293f4 with catch @ 03429484
                        */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0342949c to 0352949f has its CatchHandler @ 034294c8 */
  pSVar1 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
                    /* try { // try from 034294a0 to 035294d7 has its CatchHandler @ 034292b4 */
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1544,(MethodInfo *)0x0);
  return pSVar1;
}

