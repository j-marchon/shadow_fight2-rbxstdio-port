// OLHGMELLLFK$$Clone @ RVA 0x3194FA0

OLHGMELLLFK_o * OLHGMELLLFK__Clone(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  OLHGMELLLFK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566a63 & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a63 = 1;
    method = extraout_x1;
  }
  __this_00 = (OLHGMELLLFK_o *)thunk_FUN_01bda818(OLHGMELLLFK_TypeInfo,method);
  OLHGMELLLFK___ctor(__this_00,__this,in_x2);
  return __this_00;
}

