// FIMAAAOEIGM$$Clone @ RVA 0x3425E3C

FIMAAAOEIGM_o * FIMAAAOEIGM__Clone(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  FIMAAAOEIGM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456810b & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810b = 1;
    method = extraout_x1;
  }
  __this_00 = (FIMAAAOEIGM_o *)thunk_FUN_01bda818(FIMAAAOEIGM_TypeInfo,method);
  FIMAAAOEIGM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

