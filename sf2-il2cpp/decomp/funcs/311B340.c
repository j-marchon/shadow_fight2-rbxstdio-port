// KAMBBJFPLGM$$Clone @ RVA 0x311B340

KAMBBJFPLGM_o * KAMBBJFPLGM__Clone(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045665e6 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_045665e6 = 1;
    method = extraout_x1;
  }
  __this_00 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo,method);
  KAMBBJFPLGM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

