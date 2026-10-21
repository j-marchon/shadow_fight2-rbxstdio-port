// PBGDDCFGPJI$$Clone @ RVA 0x34BC954

PBGDDCFGPJI_o * PBGDDCFGPJI__Clone(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  PBGDDCFGPJI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045685ec & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685ec = 1;
    method = extraout_x1;
  }
  __this_00 = (PBGDDCFGPJI_o *)thunk_FUN_01bda818(PBGDDCFGPJI_TypeInfo,method);
  PBGDDCFGPJI___ctor(__this_00,__this,in_x2);
  return __this_00;
}

