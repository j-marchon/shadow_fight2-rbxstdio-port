// AMIINPEKKFB$$NLJKKOINGGE @ RVA 0x35111D4

bool AMIINPEKKFB__NLJKKOINGGE(System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
                    /* try { // try from 036111e4 to 037111eb has its CatchHandler @ 03611388 */
  if ((DAT_045688f0 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f0 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03611218 to 0371121f has its CatchHandler @ 03611370 */
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03611234 to 0371123b has its CatchHandler @ 03611378 */
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03611250 to 03711257 has its CatchHandler @ 0361137c */
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this,CNIELFLIKJB,(MethodInfo *)0x0);
                    /* try { // try from 03611268 to 0371126f has its CatchHandler @ 03611364 */
    bVar1 = AMIINPEKKFB__NLJKKOINGGE(IKKAMAMLIKA,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

