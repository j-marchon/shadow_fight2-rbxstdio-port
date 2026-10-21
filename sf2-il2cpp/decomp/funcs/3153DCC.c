// HBLHCCMEEEC$$Clone @ RVA 0x3153DCC

HBLHCCMEEEC_o * HBLHCCMEEEC__Clone(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  HBLHCCMEEEC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456681f & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_0456681f = 1;
    method = extraout_x1;
  }
  __this_00 = (HBLHCCMEEEC_o *)thunk_FUN_01bda818(HBLHCCMEEEC_TypeInfo,method);
  HBLHCCMEEEC___ctor(__this_00,__this,in_x2);
  return __this_00;
}

