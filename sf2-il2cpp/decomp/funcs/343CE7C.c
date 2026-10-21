// IHMIMECHIAN$$Clone @ RVA 0x343CE7C

IHMIMECHIAN_o * IHMIMECHIAN__Clone(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  IHMIMECHIAN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045681e8 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681e8 = 1;
    method = extraout_x1;
  }
  __this_00 = (IHMIMECHIAN_o *)thunk_FUN_01bda818(IHMIMECHIAN_TypeInfo,method);
  IHMIMECHIAN___ctor(__this_00,__this,in_x2);
  return __this_00;
}

