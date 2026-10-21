// NIGMCJIMBHO$$Clone @ RVA 0x337AACC

NIGMCJIMBHO_o * NIGMCJIMBHO__Clone(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  NIGMCJIMBHO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567b80 & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b80 = 1;
    method = extraout_x1;
  }
  __this_00 = (NIGMCJIMBHO_o *)thunk_FUN_01bda818(NIGMCJIMBHO_TypeInfo,method);
                    /* try { // try from 0347ab10 to 0357ab7f has its CatchHandler @ 0347b780 */
  NIGMCJIMBHO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

