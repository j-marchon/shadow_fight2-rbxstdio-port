// LKJJCAEOJBG$$Clone @ RVA 0x3541D70

LKJJCAEOJBG_o * LKJJCAEOJBG__Clone(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  LKJJCAEOJBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568afa & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afa = 1;
    method = extraout_x1;
  }
  __this_00 = (LKJJCAEOJBG_o *)thunk_FUN_01bda818(LKJJCAEOJBG_TypeInfo,method);
  LKJJCAEOJBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

