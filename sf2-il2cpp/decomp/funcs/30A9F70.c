// HCKHJECBIJC$$Clone @ RVA 0x30A9F70

HCKHJECBIJC_o * HCKHJECBIJC__Clone(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  HCKHJECBIJC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566198 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566198 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCKHJECBIJC_o *)thunk_FUN_01bda818(HCKHJECBIJC_TypeInfo,method);
  HCKHJECBIJC___ctor(__this_00,__this,in_x2);
  return __this_00;
}

