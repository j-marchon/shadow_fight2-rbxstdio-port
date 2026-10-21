// IIAACMIKFCF$$.ctor @ RVA 0x34B4FE8

void IIAACMIKFCF___ctor(IIAACMIKFCF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456857a & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_0456857a = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
                    /* try { // try from 035b5038 to 036b503f has its CatchHandler @ 035b5260 */
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

