// DMOPGPMINJD$$Clone @ RVA 0x30BA9C0

DMOPGPMINJD_o * DMOPGPMINJD__Clone(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  DMOPGPMINJD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566233 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_04566233 = 1;
    method = extraout_x1;
  }
  __this_00 = (DMOPGPMINJD_o *)thunk_FUN_01bda818(DMOPGPMINJD_TypeInfo,method);
  DMOPGPMINJD___ctor(__this_00,__this,in_x2);
  return __this_00;
}

