// NLDPAHFABGL$$Clone @ RVA 0x356FC68

NLDPAHFABGL_o * NLDPAHFABGL__Clone(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  NLDPAHFABGL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0366fc80 to 0376fc83 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366fc84 to 0376fc87 has its CatchHandler @ 03672aec */
  if ((DAT_04568c56 & 1) == 0) {
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
                    /* try { // try from 0366fc98 to 0376fc9f has its CatchHandler @ 03672af0 */
    DAT_04568c56 = 1;
    method = extraout_x1;
  }
  __this_00 = (NLDPAHFABGL_o *)thunk_FUN_01bda818(NLDPAHFABGL_TypeInfo,method);
  NLDPAHFABGL___ctor(__this_00,__this,in_x2);
                    /* try { // try from 0366fcb0 to 0376fcb7 has its CatchHandler @ 03672ae8 */
  return __this_00;
}

