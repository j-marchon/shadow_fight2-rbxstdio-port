// CDAAECGFKON$$Clone @ RVA 0x3212160

CDAAECGFKON_o * CDAAECGFKON__Clone(CDAAECGFKON_o *__this,MethodInfo *method)

{
  CDAAECGFKON_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566e9c & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e9c = 1;
    method = extraout_x1;
  }
  __this_00 = (CDAAECGFKON_o *)thunk_FUN_01bda818(CDAAECGFKON_TypeInfo,method);
  CDAAECGFKON___ctor(__this_00,__this,in_x2);
  return __this_00;
}

