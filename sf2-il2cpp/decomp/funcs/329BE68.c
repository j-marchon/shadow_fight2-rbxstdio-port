// EEHFEPPDBHL$$Clone @ RVA 0x329BE68

EEHFEPPDBHL_o * EEHFEPPDBHL__Clone(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  EEHFEPPDBHL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567397 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04567397 = 1;
    method = extraout_x1;
  }
  __this_00 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo,method);
  EEHFEPPDBHL___ctor(__this_00,__this,in_x2);
  return __this_00;
}

