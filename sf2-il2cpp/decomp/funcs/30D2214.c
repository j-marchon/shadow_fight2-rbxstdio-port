// BECIPDJBAOG$$Clone @ RVA 0x30D2214

BECIPDJBAOG_o * BECIPDJBAOG__Clone(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  BECIPDJBAOG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566310 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566310 = 1;
    method = extraout_x1;
  }
  __this_00 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo,method);
  BECIPDJBAOG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

