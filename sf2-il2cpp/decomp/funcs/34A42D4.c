// MGDJPGGPDJI$$Clone @ RVA 0x34A42D4

MGDJPGGPDJI_o * MGDJPGGPDJI__Clone(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  MGDJPGGPDJI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045684d8 & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684d8 = 1;
    method = extraout_x1;
  }
  __this_00 = (MGDJPGGPDJI_o *)thunk_FUN_01bda818(MGDJPGGPDJI_TypeInfo,method);
  MGDJPGGPDJI___ctor(__this_00,__this,in_x2);
  return __this_00;
}

