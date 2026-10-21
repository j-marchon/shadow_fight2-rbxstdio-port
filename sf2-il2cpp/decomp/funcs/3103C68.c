// CBPENMDOJDB.<>c$$AEOCKHPMHLJ @ RVA 0x3103C68

CBPENMDOJDB_o * CBPENMDOJDB_<>c__AEOCKHPMHLJ(CBPENMDOJDB___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
                    /* try { // try from 03203c7c to 03303cb7 has its CatchHandler @ 03203a0c */
  if ((DAT_045664e0 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664e0 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(CBPENMDOJDB_TypeInfo,method);
  CBPENMDOJDB___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

