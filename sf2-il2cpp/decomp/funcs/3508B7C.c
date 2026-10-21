// FKDLCJJOGIP$$OPFEMEHHPDI @ RVA 0x3508B7C

void FKDLCJJOGIP__OPFEMEHHPDI(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  DOPEEDABNEK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 03608b8c to 03708b8f has its CatchHandler @ 03608bb0 */
                    /* try { // try from 03608b90 to 03708bb7 has its CatchHandler @ 03608620 */
  if ((DAT_045688b9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688b9 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03608b8c with catch @ 03608bb0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608bb8 to 03708bbf has its CatchHandler @ 03608bd4 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03608bc0 to 03708bcb has its CatchHandler @ 03608620 */
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 03608bcc to 03708bd3 has its CatchHandler @ 03608bd4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03608bb8 with catch @ 03608bd4
                       catch() { ... } // from try @ 03608bcc with catch @ 03608bd4 */
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    DOPEEDABNEK__MLENOBKGHHF(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

