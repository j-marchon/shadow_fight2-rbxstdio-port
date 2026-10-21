// NODLJPNGNBG$$Clone @ RVA 0x30915B8

NODLJPNGNBG_o * NODLJPNGNBG__Clone(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  NODLJPNGNBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045660a6 & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_045660a6 = 1;
    method = extraout_x1;
  }
  __this_00 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo,method);
  NODLJPNGNBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

