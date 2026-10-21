// BPBGAAHBFKH$$Clone @ RVA 0x35CFCC8

BPBGAAHBFKH_o * BPBGAAHBFKH__Clone(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  BPBGAAHBFKH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568fd4 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fd4 = 1;
    method = extraout_x1;
  }
  __this_00 = (BPBGAAHBFKH_o *)thunk_FUN_01bda818(BPBGAAHBFKH_TypeInfo,method);
  BPBGAAHBFKH___ctor(__this_00,__this,in_x2);
  return __this_00;
}

