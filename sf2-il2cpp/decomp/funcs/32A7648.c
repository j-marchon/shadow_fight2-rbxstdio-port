// NLFLMJPNOLF$$Clone @ RVA 0x32A7648

NLFLMJPNOLF_o * NLFLMJPNOLF__Clone(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  NLFLMJPNOLF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567403 & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7674 to 034a767b has its CatchHandler @ 033a7828 */
    DAT_04567403 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033a7680 to 034a7687 has its CatchHandler @ 033a77e4 */
  __this_00 = (NLFLMJPNOLF_o *)thunk_FUN_01bda818(NLFLMJPNOLF_TypeInfo,method);
  NLFLMJPNOLF___ctor(__this_00,__this,in_x2);
                    /* try { // try from 033a7694 to 034a769b has its CatchHandler @ 033a77d8 */
  return __this_00;
}

