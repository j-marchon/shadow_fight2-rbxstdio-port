// ENFPENIMCIK$$Clone @ RVA 0x3378A5C

ENFPENIMCIK_o * ENFPENIMCIK__Clone(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  ENFPENIMCIK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03478a70 to 03578a9b has its CatchHandler @ 03479d80 */
  if ((DAT_04567b5e & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b5e = 1;
    method = extraout_x1;
  }
  __this_00 = (ENFPENIMCIK_o *)thunk_FUN_01bda818(ENFPENIMCIK_TypeInfo,method);
  ENFPENIMCIK___ctor(__this_00,__this,in_x2);
  return __this_00;
}

