// AJINOJNMEEK$$Clone @ RVA 0x304E198

AJINOJNMEEK_o * AJINOJNMEEK__Clone(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  AJINOJNMEEK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565e29 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e29 = 1;
    method = extraout_x1;
  }
  __this_00 = (AJINOJNMEEK_o *)thunk_FUN_01bda818(AJINOJNMEEK_TypeInfo,method);
  AJINOJNMEEK___ctor(__this_00,__this,in_x2);
  return __this_00;
}

