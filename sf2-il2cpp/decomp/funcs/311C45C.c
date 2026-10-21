// HDDKPFAHBBN$$Clone @ RVA 0x311C45C

HDDKPFAHBBN_o * HDDKPFAHBBN__Clone(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  HDDKPFAHBBN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045665f3 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f3 = 1;
    method = extraout_x1;
  }
  __this_00 = (HDDKPFAHBBN_o *)thunk_FUN_01bda818(HDDKPFAHBBN_TypeInfo,method);
  HDDKPFAHBBN___ctor(__this_00,__this,in_x2);
  return __this_00;
}

