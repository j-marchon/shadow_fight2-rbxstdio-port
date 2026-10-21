// KMAOIKKMFJF$$Clone @ RVA 0x3032FC8

KMAOIKKMFJF_o * KMAOIKKMFJF__Clone(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  KMAOIKKMFJF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565d17 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d17 = 1;
    method = extraout_x1;
  }
  __this_00 = (KMAOIKKMFJF_o *)thunk_FUN_01bda818(KMAOIKKMFJF_TypeInfo,method);
  KMAOIKKMFJF___ctor(__this_00,__this,in_x2);
  return __this_00;
}

