// FAACNCKMEJM$$Clone @ RVA 0x31BBDCC

FAACNCKMEJM_o * FAACNCKMEJM__Clone(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  FAACNCKMEJM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566be7 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566be7 = 1;
    method = extraout_x1;
  }
  __this_00 = (FAACNCKMEJM_o *)thunk_FUN_01bda818(FAACNCKMEJM_TypeInfo,method);
  FAACNCKMEJM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

