// EMBNHHOCCBH$$Clone @ RVA 0x35AA650

EMBNHHOCCBH_o * EMBNHHOCCBH__Clone(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  EMBNHHOCCBH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e48 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e48 = 1;
    method = extraout_x1;
  }
  __this_00 = (EMBNHHOCCBH_o *)thunk_FUN_01bda818(EMBNHHOCCBH_TypeInfo,method);
  EMBNHHOCCBH___ctor(__this_00,__this,in_x2);
  return __this_00;
}

