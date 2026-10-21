// EPCCNLNOALL$$Clone @ RVA 0x32FB968

EPCCNLNOALL_o * EPCCNLNOALL__Clone(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  EPCCNLNOALL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045676dd & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    DAT_045676dd = 1;
    method = extraout_x1;
  }
  __this_00 = (EPCCNLNOALL_o *)thunk_FUN_01bda818(EPCCNLNOALL_TypeInfo,method);
  EPCCNLNOALL___ctor(__this_00,__this,in_x2);
  return __this_00;
}

