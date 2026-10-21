// KEGDLHPEJBG$$Clone @ RVA 0x35A934C

KEGDLHPEJBG_o * KEGDLHPEJBG__Clone(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  KEGDLHPEJBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e32 & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e32 = 1;
    method = extraout_x1;
  }
  __this_00 = (KEGDLHPEJBG_o *)thunk_FUN_01bda818(KEGDLHPEJBG_TypeInfo,method);
  KEGDLHPEJBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

