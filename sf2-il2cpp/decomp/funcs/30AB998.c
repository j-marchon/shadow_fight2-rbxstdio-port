// IMBPILFKGEO$$Clone @ RVA 0x30AB998

IMBPILFKGEO_o * IMBPILFKGEO__Clone(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  IMBPILFKGEO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045661a0 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_045661a0 = 1;
    method = extraout_x1;
  }
  __this_00 = (IMBPILFKGEO_o *)thunk_FUN_01bda818(IMBPILFKGEO_TypeInfo,method);
  IMBPILFKGEO___ctor(__this_00,__this,in_x2);
  return __this_00;
}

