// ACHLOMELAJE$$.cctor @ RVA 0x30594D4

void ACHLOMELAJE___cctor(MethodInfo *method)

{
  HEEEDKBOAKM_o *__this;
  GHOPMMBKGMB_o *__this_00;
  GHOPMMBKGMB_o **ppGVar1;
  
  if ((DAT_04565e75 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&GHOPMMBKGMB_TypeInfo);
    FUN_01bab630(&HEEEDKBOAKM_TypeInfo);
    DAT_04565e75 = 1;
  }
  __this = (HEEEDKBOAKM_o *)thunk_FUN_01bda818(HEEEDKBOAKM_TypeInfo);
  HEEEDKBOAKM___ctor(__this,(MethodInfo *)0x0);
  ACHLOMELAJE_TypeInfo->static_fields->HAEGJFPKIAD = __this;
  thunk_FUN_01c20e04(ACHLOMELAJE_TypeInfo->static_fields,__this);
  __this_00 = (GHOPMMBKGMB_o *)thunk_FUN_01bda818(GHOPMMBKGMB_TypeInfo);
  GHOPMMBKGMB___ctor(__this_00,(MethodInfo *)0x0);
  ppGVar1 = &ACHLOMELAJE_TypeInfo->static_fields->FGMAJAGGPCD;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  ACHLOMELAJE_TypeInfo->static_fields->PIOIBJJKJIK = -1;
  return;
}

