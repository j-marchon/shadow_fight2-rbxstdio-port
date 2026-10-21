// OJKCDJCBOBL$$Clone @ RVA 0x35C2748

OJKCDJCBOBL_o * OJKCDJCBOBL__Clone(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  OJKCDJCBOBL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568f41 & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f41 = 1;
    method = extraout_x1;
  }
  __this_00 = (OJKCDJCBOBL_o *)thunk_FUN_01bda818(OJKCDJCBOBL_TypeInfo,method);
  OJKCDJCBOBL___ctor(__this_00,__this,in_x2);
  return __this_00;
}

