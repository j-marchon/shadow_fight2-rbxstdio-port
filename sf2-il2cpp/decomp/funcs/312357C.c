// KMDOLFBIGNC$$Clone @ RVA 0x312357C

KMDOLFBIGNC_o * KMDOLFBIGNC__Clone(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  KMDOLFBIGNC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456663e & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_0456663e = 1;
    method = extraout_x1;
  }
  __this_00 = (KMDOLFBIGNC_o *)thunk_FUN_01bda818(KMDOLFBIGNC_TypeInfo,method);
  KMDOLFBIGNC___ctor(__this_00,__this,in_x2);
  return __this_00;
}

