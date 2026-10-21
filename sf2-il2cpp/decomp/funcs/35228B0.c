// LLKDCCJMFLE$$BJGGBNJEDLM @ RVA 0x35228B0

void LLKDCCJMFLE__BJGGBNJEDLM(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036228b0 to 037228b7 has its CatchHandler @ 03622b8c */
                    /* try { // try from 036228cc to 037228d3 has its CatchHandler @ 03622b98 */
  if ((DAT_045689dd & 1) == 0) {
                    /* try { // try from 036228d8 to 037228e3 has its CatchHandler @ 03622b90 */
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10630);
                    /* try { // try from 036228f8 to 037228ff has its CatchHandler @ 03622b78 */
    DAT_045689dd = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03622904 to 0372290f has its CatchHandler @ 03622b7c */
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
                    /* try { // try from 03622920 to 03722927 has its CatchHandler @ 03622b80 */
  LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB = CJNHFNHJHPE;
                    /* try { // try from 0362292c to 03722937 has its CatchHandler @ 03622b70 */
  thunk_FUN_01c20e04(LLKDCCJMFLE_TypeInfo->static_fields,CJNHFNHJHPE);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03622944 to 0372294f has its CatchHandler @ 03622ba0 */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 03622950 to 03722b3b has its CatchHandler @ 03622590 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__PHCMABDBLJH
              (pAVar1,StringLiteral_10630,LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB,
               (MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

