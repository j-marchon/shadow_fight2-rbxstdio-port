// CMEBCBKGFFL$$KGDAINKJCGG @ RVA 0x3196054

System_String_o *
CMEBCBKGFFL__KGDAINKJCGG(System_String_o *EIJDDKJONFO,bool ILDOEIOKKNO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)ILDOEIOKKNO;
  if ((DAT_04566a73 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04566a73 = 1;
    method_00 = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  if ((MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM != false) && (!ILDOEIOKKNO)) {
    pSVar1 = CMEBCBKGFFL__LMCHNOGAEHE(EIJDDKJONFO,method_00);
    return pSVar1;
  }
  pSVar1 = CMEBCBKGFFL__IKCJLINAPOA(EIJDDKJONFO,method_00);
  return pSVar1;
}

