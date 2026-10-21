// CBPENMDOJDB$$Clone @ RVA 0x31036B0

CBPENMDOJDB_o * CBPENMDOJDB__Clone(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  CBPENMDOJDB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 032036b0 to 0330372f has its CatchHandler @ 032034e4 */
  if ((DAT_045664d9 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664d9 = 1;
    method = extraout_x1;
  }
  __this_00 = (CBPENMDOJDB_o *)thunk_FUN_01bda818(CBPENMDOJDB_TypeInfo,method);
  CBPENMDOJDB___ctor(__this_00,__this,in_x2);
  return __this_00;
}

