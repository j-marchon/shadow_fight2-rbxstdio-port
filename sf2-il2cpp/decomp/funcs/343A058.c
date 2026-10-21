// AADKBCFCLKK$$Clone @ RVA 0x343A058

AADKBCFCLKK_o * AADKBCFCLKK__Clone(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  AADKBCFCLKK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045681c1 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    DAT_045681c1 = 1;
    method = extraout_x1;
  }
  __this_00 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo,method);
                    /* try { // try from 0353a09c to 0363a0a3 has its CatchHandler @ 0353a0f8 */
  AADKBCFCLKK___ctor(__this_00,__this,in_x2);
  return __this_00;
}

