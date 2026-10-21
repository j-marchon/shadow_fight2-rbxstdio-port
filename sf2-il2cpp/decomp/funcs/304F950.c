// EIBAKHBHMAO$$Clone @ RVA 0x304F950

EIBAKHBHMAO_o * EIBAKHBHMAO__Clone(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  EIBAKHBHMAO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565e3f & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e3f = 1;
    method = extraout_x1;
  }
  __this_00 = (EIBAKHBHMAO_o *)thunk_FUN_01bda818(EIBAKHBHMAO_TypeInfo,method);
  EIBAKHBHMAO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

