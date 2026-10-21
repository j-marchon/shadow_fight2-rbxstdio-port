// IMAPABEJECG$$LPBAKNGGBMK @ RVA 0x35C1CAC

OCHIFKHFMAC_o * IMAPABEJECG__LPBAKNGGBMK(MethodInfo *method)

{
  bool bVar1;
  OCHIFKHFMAC_o *__this;
  
  if ((DAT_04568f36 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&OCHIFKHFMAC_TypeInfo);
    DAT_04568f36 = 1;
  }
  bVar1 = IMAPABEJECG__EMBIGPDBNKJ(method);
  if (bVar1) {
    __this = (OCHIFKHFMAC_o *)thunk_FUN_01bda818(OCHIFKHFMAC_TypeInfo);
    OCHIFKHFMAC___ctor(__this,(MethodInfo *)0x0);
  }
  else {
    __this = (OCHIFKHFMAC_o *)0x0;
  }
  return __this;
}

