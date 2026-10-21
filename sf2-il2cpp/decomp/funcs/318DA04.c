// LKAFKHBBNOH$$Clone @ RVA 0x318DA04

LKAFKHBBNOH_o * LKAFKHBBNOH__Clone(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  LKAFKHBBNOH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566a1e & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a1e = 1;
    method = extraout_x1;
  }
  __this_00 = (LKAFKHBBNOH_o *)thunk_FUN_01bda818(LKAFKHBBNOH_TypeInfo,method);
  LKAFKHBBNOH___ctor(__this_00,__this,in_x2);
  return __this_00;
}

