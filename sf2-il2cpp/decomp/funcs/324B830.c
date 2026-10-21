// ELBBEAGGAOH$$Clone @ RVA 0x324B830

ELBBEAGGAOH_o * ELBBEAGGAOH__Clone(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  ELBBEAGGAOH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045670f5 & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670f5 = 1;
    method = extraout_x1;
  }
  __this_00 = (ELBBEAGGAOH_o *)thunk_FUN_01bda818(ELBBEAGGAOH_TypeInfo,method);
  ELBBEAGGAOH___ctor(__this_00,__this,in_x2);
  return __this_00;
}

