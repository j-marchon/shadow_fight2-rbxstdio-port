// OLCBPIHLPEC$$Clone @ RVA 0x35BB4B0

OLCBPIHLPEC_o * OLCBPIHLPEC__Clone(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  OLCBPIHLPEC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568ed1 & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568ed1 = 1;
    method = extraout_x1;
  }
  __this_00 = (OLCBPIHLPEC_o *)thunk_FUN_01bda818(OLCBPIHLPEC_TypeInfo,method);
  OLCBPIHLPEC___ctor(__this_00,__this,in_x2);
  return __this_00;
}

