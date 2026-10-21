// JMDPBFOCHHP$$EMHGIBKDBOG @ RVA 0x2FF7864

System_String_o * JMDPBFOCHHP__EMHGIBKDBOG(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565ab0 & 1) == 0) {
                    /* try { // try from 030f7888 to 031f788b has its CatchHandler @ 030f7eb0 */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_17972);
    DAT_04565ab0 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 030f78bc to 031f78cf has its CatchHandler @ 030f7eb8 */
  pSVar1 = MGENAMAJALB__GAFKBFMBPKO((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_17972,(MethodInfo *)0x0);
  return pSVar1;
}

