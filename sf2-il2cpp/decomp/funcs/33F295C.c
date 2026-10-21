// FCJBEKHDLAF$$EGJNOOMPGEA @ RVA 0x33F295C

void FCJBEKHDLAF__EGJNOOMPGEA(FCJBEKHDLAF_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  FCJBEKHDLAF_StaticFields *pFVar1;
  
                    /* catch() { ... } // from try @ 034f2870 with catch @ 034f2960
                       catch() { ... } // from try @ 034f2950 with catch @ 034f2960 */
                    /* try { // try from 034f2964 to 035f2967 has its CatchHandler @ 034f2970 */
                    /* try { // try from 034f2968 to 035f2973 has its CatchHandler @ 034f24f4 */
                    /* catch() { ... } // from try @ 034f2964 with catch @ 034f2970 */
  if ((DAT_04567f2e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_6327);
    DAT_04567f2e = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  pFVar1 = FCJBEKHDLAF_TypeInfo->static_fields;
  if (CJNHFNHJHPE != pFVar1->IGABFCCGLCO) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
      pFVar1 = FCJBEKHDLAF_TypeInfo->static_fields;
      method = extraout_x1_01;
    }
    if ((CJNHFNHJHPE == (FCJBEKHDLAF_o *)0x0) || (pFVar1->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0)) {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
        pFVar1 = FCJBEKHDLAF_TypeInfo->static_fields;
      }
      pFVar1->IGABFCCGLCO = CJNHFNHJHPE;
      thunk_FUN_01c20e04(&pFVar1->IGABFCCGLCO,CJNHFNHJHPE);
      return;
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__LogError(StringLiteral_6327,(MethodInfo *)0x0);
  return;
}

