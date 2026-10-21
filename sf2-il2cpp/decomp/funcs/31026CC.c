// NLEHCFCPAAO$$.ctor @ RVA 0x31026CC

void NLEHCFCPAAO___ctor(NLEHCFCPAAO_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032026d4 to 033026db has its CatchHandler @ 032027f8 */
                    /* try { // try from 032026e8 to 033026f3 has its CatchHandler @ 032027dc */
  if ((DAT_045664cd & 1) == 0) {
                    /* try { // try from 032026f4 to 0330278f has its CatchHandler @ 0320233c */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_045664cd = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

