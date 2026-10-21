// PAOMOCCOFDE$$LFJLJEHKINP @ RVA 0x33A2C2C

System_Collections_IEnumerator_o *
PAOMOCCOFDE__LFJLJEHKINP(PAOMOCCOFDE_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034a2c30 to 035a2c37 has its CatchHandler @ 034a2da8 */
                    /* try { // try from 034a2c38 to 035a2cb3 has its CatchHandler @ 034a2aa8 */
  if ((DAT_04567cc6 & 1) == 0) {
    FUN_01bab630(&PAOMOCCOFDE_IFMANFAJIHA_TypeInfo);
    DAT_04567cc6 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PAOMOCCOFDE_IFMANFAJIHA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

