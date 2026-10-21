// KBLFOOJFIIG$$Clone @ RVA 0x314E8B8

KBLFOOJFIIG_o * KBLFOOJFIIG__Clone(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  KBLFOOJFIIG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667ef & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667ef = 1;
    method = extraout_x1;
  }
  __this_00 = (KBLFOOJFIIG_o *)thunk_FUN_01bda818(KBLFOOJFIIG_TypeInfo,method);
  KBLFOOJFIIG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

