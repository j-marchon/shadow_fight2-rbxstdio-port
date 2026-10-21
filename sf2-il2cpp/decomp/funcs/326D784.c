// LMEMJBOBHBE$$Clone @ RVA 0x326D784

LMEMJBOBHBE_o * LMEMJBOBHBE__Clone(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  LMEMJBOBHBE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045671f7 & 1) == 0) {
                    /* try { // try from 0336d7a8 to 0346d7cf has its CatchHandler @ 0336ddd8 */
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
    DAT_045671f7 = 1;
    method = extraout_x1;
  }
  __this_00 = (LMEMJBOBHBE_o *)thunk_FUN_01bda818(LMEMJBOBHBE_TypeInfo,method);
  LMEMJBOBHBE___ctor(__this_00,__this,in_x2);
  return __this_00;
}

