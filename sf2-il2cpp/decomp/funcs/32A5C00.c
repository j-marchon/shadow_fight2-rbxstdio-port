// CFLBEJAKHAL$$NKLGCNHLBAF @ RVA 0x32A5C00

void CFLBEJAKHAL__NKLGCNHLBAF(CFLBEJAKHAL_o *__this,MethodInfo *method)

{
  System_Action_o *HJNIEEICBFA;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673f1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CFLBEJAKHAL_JBCLNEBFCBA__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_045673f1 = 1;
    method = extraout_x1;
  }
  HJNIEEICBFA = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__FEJIKBIBCJB(HJNIEEICBFA,(MethodInfo *)0x0);
  return;
}

