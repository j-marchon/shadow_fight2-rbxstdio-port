// FMIEFKAKOMG$$Clone @ RVA 0x3280A24

FMIEFKAKOMG_o * FMIEFKAKOMG__Clone(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  FMIEFKAKOMG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456728e & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
    DAT_0456728e = 1;
    method = extraout_x1;
  }
  __this_00 = (FMIEFKAKOMG_o *)thunk_FUN_01bda818(FMIEFKAKOMG_TypeInfo,method);
  FMIEFKAKOMG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

