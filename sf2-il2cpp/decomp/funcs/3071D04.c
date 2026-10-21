// GGDHPLABCGI$$Clone @ RVA 0x3071D04

GGDHPLABCGI_o * GGDHPLABCGI__Clone(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  GGDHPLABCGI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565f7e & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f7e = 1;
    method = extraout_x1;
  }
  __this_00 = (GGDHPLABCGI_o *)thunk_FUN_01bda818(GGDHPLABCGI_TypeInfo,method);
  GGDHPLABCGI___ctor(__this_00,__this,in_x2);
  return __this_00;
}

