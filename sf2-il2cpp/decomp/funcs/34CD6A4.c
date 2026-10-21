// KCPFIELGGLA$$Clone @ RVA 0x34CD6A4

KCPFIELGGLA_o * KCPFIELGGLA__Clone(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  KCPFIELGGLA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456868e & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_0456868e = 1;
    method = extraout_x1;
  }
  __this_00 = (KCPFIELGGLA_o *)thunk_FUN_01bda818(KCPFIELGGLA_TypeInfo,method);
  KCPFIELGGLA___ctor(__this_00,__this,in_x2);
  return __this_00;
}

