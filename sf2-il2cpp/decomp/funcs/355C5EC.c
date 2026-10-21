// FFDBJONGOLC.<>c$$INEHMNAKNNC @ RVA 0x355C5EC

System_String_o * FFDBJONGOLC_<>c__INEHMNAKNNC(FFDBJONGOLC___c_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
  if ((DAT_04568b85 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04568b85 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  local_14 = GJFEBGNFFBA__MELICHAIADL(false,(MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  return pSVar1;
}

