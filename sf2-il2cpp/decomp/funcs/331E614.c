// IPABNCIICPB$$LLJHBNCLIEC @ RVA 0x331E614

void IPABNCIICPB__LLJHBNCLIEC(IPABNCIICPB_o *__this,CBLABOPKBKD_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  long lVar3;
  
                    /* try { // try from 0341e614 to 0351e69b has its CatchHandler @ 0341e350 */
  if ((DAT_0456782d & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_LLJHBNCLIEC__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456782d = 1;
  }
  if (IKKAMAMLIKA == (CBLABOPKBKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0341e6bc to 0351e6bf has its CatchHandler @ 0341e6c8 */
    FUN_01bab8c8();
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((IKKAMAMLIKA->fields).super._FEKJKEFIKEK_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    lVar3 = (IKKAMAMLIKA->fields).ACBJIJCAOOD;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
    if (iVar2 < lVar3) {
                    /* try { // try from 0341e69c to 0351e69f has its CatchHandler @ 0341e830 */
                    /* try { // try from 0341e6a0 to 0351e6ab has its CatchHandler @ 0341e350 */
                    /* try { // try from 0341e6ac to 0351e6b3 has its CatchHandler @ 0341e770 */
      DOCLKKFHECI<object>__LLJHBNCLIEC
                ((DOCLKKFHECI_T__o *)__this,(Il2CppObject *)IKKAMAMLIKA,
                 Method_DOCLKKFHECI<CBLABOPKBKD>_LLJHBNCLIEC__);
      return;
    }
  }
                    /* try { // try from 0341e6b4 to 0351e6bb has its CatchHandler @ 0341e6d0 */
  return;
}

