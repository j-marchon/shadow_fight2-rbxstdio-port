// MEPKDDGONGE$$Clone @ RVA 0x3179818

MEPKDDGONGE_o * MEPKDDGONGE__Clone(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  MEPKDDGONGE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456697c & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_0456697c = 1;
    method = extraout_x1;
  }
  __this_00 = (MEPKDDGONGE_o *)thunk_FUN_01bda818(MEPKDDGONGE_TypeInfo,method);
  MEPKDDGONGE___ctor(__this_00,__this,in_x2);
  return __this_00;
}

