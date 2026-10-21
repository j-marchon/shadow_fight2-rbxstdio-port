// OJFPEINHCDP$$Clone @ RVA 0x329309C

OJFPEINHCDP_o * OJFPEINHCDP__Clone(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  OJFPEINHCDP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456733c & 1) == 0) {
                    /* try { // try from 033930c4 to 034930cb has its CatchHandler @ 03393188 */
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    DAT_0456733c = 1;
    method = extraout_x1;
  }
  __this_00 = (OJFPEINHCDP_o *)thunk_FUN_01bda818(OJFPEINHCDP_TypeInfo,method);
                    /* try { // try from 033930d8 to 034930e3 has its CatchHandler @ 03393184 */
  OJFPEINHCDP___ctor(__this_00,__this,in_x2);
  return __this_00;
}

