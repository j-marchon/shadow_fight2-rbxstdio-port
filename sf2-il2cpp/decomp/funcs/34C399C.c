// JBGPNJEDALF$$HJDHGAAHOHO @ RVA 0x34C399C

System_String_o *
JBGPNJEDALF__HJDHGAAHOHO(JBGPNJEDALF_o *__this,BCGLDKLKKDA_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 035c39b4 to 036c39bb has its CatchHandler @ 035c3b20 */
  if ((DAT_04568621 & 1) == 0) {
                    /* try { // try from 035c39c4 to 036c39cb has its CatchHandler @ 035c3b04 */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 035c39d0 to 036c39d7 has its CatchHandler @ 035c3b14 */
    FUN_01bab630(&StringLiteral_22364);
    DAT_04568621 = 1;
  }
                    /* try { // try from 035c39dc to 036c39e3 has its CatchHandler @ 035c3b08 */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035c39e8 to 036c3a37 has its CatchHandler @ 035c3b0c */
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__NBLCEHIPPHB((MethodInfo *)0x0);
  if (IKKAMAMLIKA != (BCGLDKLKKDA_o *)0x0) {
    pSVar1 = System_String__Format
                       (StringLiteral_22364,(Il2CppObject *)pSVar1,
                        (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

