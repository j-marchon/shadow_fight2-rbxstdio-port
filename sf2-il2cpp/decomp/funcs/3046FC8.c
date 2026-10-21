// BKMLILFFPIH$$Clone @ RVA 0x3046FC8

BKMLILFFPIH_o * BKMLILFFPIH__Clone(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  BKMLILFFPIH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565de3 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de3 = 1;
    method = extraout_x1;
  }
  __this_00 = (BKMLILFFPIH_o *)thunk_FUN_01bda818(BKMLILFFPIH_TypeInfo,method);
  BKMLILFFPIH___ctor(__this_00,__this,in_x2);
  return __this_00;
}

