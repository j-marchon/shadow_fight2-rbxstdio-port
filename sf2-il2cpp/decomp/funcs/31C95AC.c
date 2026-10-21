// DBNIPENAEKO$$Clone @ RVA 0x31C95AC

DBNIPENAEKO_o * DBNIPENAEKO__Clone(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  DBNIPENAEKO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566c50 & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c50 = 1;
    method = extraout_x1;
  }
  __this_00 = (DBNIPENAEKO_o *)thunk_FUN_01bda818(DBNIPENAEKO_TypeInfo,method);
  DBNIPENAEKO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

