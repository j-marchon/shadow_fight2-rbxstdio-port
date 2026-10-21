// GPKDMPJJEOO$$Clone @ RVA 0x319D6D4

GPKDMPJJEOO_o * GPKDMPJJEOO__Clone(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  GPKDMPJJEOO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566ab8 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566ab8 = 1;
    method = extraout_x1;
  }
  __this_00 = (GPKDMPJJEOO_o *)thunk_FUN_01bda818(GPKDMPJJEOO_TypeInfo,method);
  GPKDMPJJEOO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

