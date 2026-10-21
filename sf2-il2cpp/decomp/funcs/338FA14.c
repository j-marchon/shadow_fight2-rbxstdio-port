// HBHFOKIPAHA$$Clone @ RVA 0x338FA14

HBHFOKIPAHA_o * HBHFOKIPAHA__Clone(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  HBHFOKIPAHA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567c14 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c14 = 1;
    method = extraout_x1;
  }
  __this_00 = (HBHFOKIPAHA_o *)thunk_FUN_01bda818(HBHFOKIPAHA_TypeInfo,method);
  HBHFOKIPAHA___ctor(__this_00,__this,in_x2);
  return __this_00;
}

