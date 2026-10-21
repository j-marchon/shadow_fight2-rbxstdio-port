// BFLFFPLIIFM$$Clone @ RVA 0x3232DE4

BFLFFPLIIFM_o * BFLFFPLIIFM__Clone(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  BFLFFPLIIFM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566fed & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566fed = 1;
    method = extraout_x1;
  }
  __this_00 = (BFLFFPLIIFM_o *)thunk_FUN_01bda818(BFLFFPLIIFM_TypeInfo,method);
  BFLFFPLIIFM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

