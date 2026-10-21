// KGBIBHEFBHA$$Clone @ RVA 0x3303DD8

KGBIBHEFBHA_o * KGBIBHEFBHA__Clone(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  KGBIBHEFBHA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03403df4 to 03503dfb has its CatchHandler @ 03404164 */
  if ((DAT_0456773c & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
                    /* try { // try from 03403e04 to 03503e1f has its CatchHandler @ 0340417c */
    DAT_0456773c = 1;
    method = extraout_x1;
  }
  __this_00 = (KGBIBHEFBHA_o *)thunk_FUN_01bda818(KGBIBHEFBHA_TypeInfo,method);
  KGBIBHEFBHA___ctor(__this_00,__this,in_x2);
  return __this_00;
}

