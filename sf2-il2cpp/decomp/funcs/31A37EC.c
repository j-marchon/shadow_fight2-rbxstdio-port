// HGADMOBFBBF$$Clone @ RVA 0x31A37EC

HGADMOBFBBF_o * HGADMOBFBBF__Clone(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  HGADMOBFBBF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 032a3800 to 033a3807 has its CatchHandler @ 032a3850 */
                    /* try { // try from 032a3808 to 033a3843 has its CatchHandler @ 032a3774 */
  if ((DAT_04566aef & 1) == 0) {
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    DAT_04566aef = 1;
    method = extraout_x1;
  }
  __this_00 = (HGADMOBFBBF_o *)thunk_FUN_01bda818(HGADMOBFBBF_TypeInfo,method);
  HGADMOBFBBF___ctor(__this_00,__this,in_x2);
  return __this_00;
}

