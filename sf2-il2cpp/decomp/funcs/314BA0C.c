// HCFOFHGNBKP$$Clone @ RVA 0x314BA0C

HCFOFHGNBKP_o * HCFOFHGNBKP__Clone(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  HCFOFHGNBKP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667c2 & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667c2 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCFOFHGNBKP_o *)thunk_FUN_01bda818(HCFOFHGNBKP_TypeInfo,method);
  HCFOFHGNBKP___ctor(__this_00,__this,in_x2);
  return __this_00;
}

