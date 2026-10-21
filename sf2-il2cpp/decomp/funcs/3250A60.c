// ICPMLKOEANF$$Clone @ RVA 0x3250A60

ICPMLKOEANF_o * ICPMLKOEANF__Clone(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  ICPMLKOEANF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567128 & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_04567128 = 1;
    method = extraout_x1;
  }
  __this_00 = (ICPMLKOEANF_o *)thunk_FUN_01bda818(ICPMLKOEANF_TypeInfo,method);
  ICPMLKOEANF___ctor(__this_00,__this,in_x2);
  return __this_00;
}

