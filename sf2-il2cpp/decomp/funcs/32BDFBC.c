// PIADCKMDDAK$$Clone @ RVA 0x32BDFBC

PIADCKMDDAK_o * PIADCKMDDAK__Clone(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  PIADCKMDDAK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045674b0 & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674b0 = 1;
    method = extraout_x1;
  }
  __this_00 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo,method);
  PIADCKMDDAK___ctor(__this_00,__this,in_x2);
  return __this_00;
}

