// OJFPEINHCDP.<>c$$OEFEKGDDHPN @ RVA 0x3293210

OJFPEINHCDP_o * OJFPEINHCDP_<>c__OEFEKGDDHPN(OJFPEINHCDP___c_o *__this,MethodInfo *method)

{
  OJFPEINHCDP_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03393214 to 03493337 has its CatchHandler @ 03393214
                       catch() { ... } // from try @ 03393214 with catch @ 03393214
                       catch() { ... } // from try @ 033934e8 with catch @ 03393214
                       catch() { ... } // from try @ 0339355c with catch @ 03393214
                       catch() { ... } // from try @ 0339359c with catch @ 03393214 */
  if ((DAT_04567340 & 1) == 0) {
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    DAT_04567340 = 1;
    method = extraout_x1;
  }
  __this_00 = (OJFPEINHCDP_o *)thunk_FUN_01bda818(OJFPEINHCDP_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}

