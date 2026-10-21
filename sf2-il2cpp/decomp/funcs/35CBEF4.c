// IHEKBNOFOKD$$.ctor @ RVA 0x35CBEF4

void IHEKBNOFOKD___ctor(IHEKBNOFOKD_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fa3 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04568fa3 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

