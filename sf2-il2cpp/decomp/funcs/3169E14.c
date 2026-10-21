// GKKKJLJFGBG$$Clone @ RVA 0x3169E14

GKKKJLJFGBG_o * GKKKJLJFGBG__Clone(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  GKKKJLJFGBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045668e1 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668e1 = 1;
    method = extraout_x1;
  }
  __this_00 = (GKKKJLJFGBG_o *)thunk_FUN_01bda818(GKKKJLJFGBG_TypeInfo,method);
  GKKKJLJFGBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

