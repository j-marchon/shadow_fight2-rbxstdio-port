// OJEHKJHEBID$$Clone @ RVA 0x34B5E1C

OJEHKJHEBID_o * OJEHKJHEBID__Clone(OJEHKJHEBID_o *__this,MethodInfo *method)

{
  OJEHKJHEBID_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568583 & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_04568583 = 1;
    method = extraout_x1;
  }
  __this_00 = (OJEHKJHEBID_o *)thunk_FUN_01bda818(OJEHKJHEBID_TypeInfo,method);
  OJEHKJHEBID___ctor(__this_00,__this,in_x2);
  return __this_00;
}

