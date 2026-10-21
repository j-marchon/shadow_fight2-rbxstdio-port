// JHMFOIIPEHB$$Clone @ RVA 0x30CF1A0

JHMFOIIPEHB_o * JHMFOIIPEHB__Clone(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  JHMFOIIPEHB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045662f1 & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662f1 = 1;
    method = extraout_x1;
  }
  __this_00 = (JHMFOIIPEHB_o *)thunk_FUN_01bda818(JHMFOIIPEHB_TypeInfo,method);
  JHMFOIIPEHB___ctor(__this_00,__this,in_x2);
  return __this_00;
}

