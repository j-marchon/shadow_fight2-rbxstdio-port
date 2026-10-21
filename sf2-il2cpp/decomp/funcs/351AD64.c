// EKCGNICFDEO$$Clone @ RVA 0x351AD64

EKCGNICFDEO_o * EKCGNICFDEO__Clone(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  EKCGNICFDEO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456897a & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    DAT_0456897a = 1;
    method = extraout_x1;
  }
  __this_00 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo,method);
  EKCGNICFDEO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

