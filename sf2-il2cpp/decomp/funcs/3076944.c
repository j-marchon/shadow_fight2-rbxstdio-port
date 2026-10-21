// KKCBGIBKOCP$$GCOFAABGDIM @ RVA 0x3076944

System_String_o *
KKCBGIBKOCP__GCOFAABGDIM(System_String_o *AFKICLAFDKC,bool GMDKAHCJGBD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04565faa & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04565faa = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (GMDKAHCJGBD) {
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ,(MethodInfo *)0x0);
    if (bVar1) {
      return AFKICLAFDKC;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ;
  }
  else {
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP,(MethodInfo *)0x0);
    if (bVar1) {
      return AFKICLAFDKC;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP;
  }
  pSVar2 = System_String__Concat(AFKICLAFDKC,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}

