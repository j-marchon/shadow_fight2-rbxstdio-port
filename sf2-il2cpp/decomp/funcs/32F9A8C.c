// EEOMEMBBGNA$$AGHPILNDDIJ @ RVA 0x32F9A8C

void EEOMEMBBGNA__AGHPILNDDIJ(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  OJEHKJHEBID_o *pOVar2;
  Il2CppObject *IMMNELPBGIF;
  
  if ((DAT_045676bc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f9ac8 to 034f9acf has its CatchHandler @ 033fa018 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EEHFEPPDBHL>__);
    FUN_01bab630(&StringLiteral_10818);
    DAT_045676bc = 1;
  }
                    /* try { // try from 033f9ae4 to 034f9ae7 has its CatchHandler @ 033f9fa4 */
                    /* try { // try from 033f9ae8 to 034f9b37 has its CatchHandler @ 033f950c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10818,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pEVar1 = (EEHFEPPDBHL_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EEHFEPPDBHL>__);
    if ((pEVar1 != (EEHFEPPDBHL_o *)0x0) &&
       (pOVar2 = (__this->fields).MICFEIBNOLM, pOVar2 != (OJEHKJHEBID_o *)0x0)) {
      (pOVar2->fields).MMIHELOLFPP = pEVar1;
      thunk_FUN_01c20e04();
                    /* try { // try from 033f9b38 to 034f9b3f has its CatchHandler @ 033f9ec8 */
      EEOMEMBBGNA__CBPJBDDLNFI(__this,IMMNELPBGIF,method);
      return;
    }
                    /* try { // try from 033f9b54 to 034f9b57 has its CatchHandler @ 033f9e9c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f9b58 to 034f9c43 has its CatchHandler @ 033f950c */
  FUN_01bab8c8();
}

