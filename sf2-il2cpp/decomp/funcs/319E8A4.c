// HLMLENLKHFF$$COPDGBDLGEP @ RVA 0x319E8A4

PDFMAHPKIEI_o * HLMLENLKHFF__COPDGBDLGEP(HLMLENLKHFF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  PDFMAHPKIEI_o *__this_00;
  
  if ((DAT_04566b09 & 1) == 0) {
    FUN_01bab630(&PDFMAHPKIEI_TypeInfo);
    DAT_04566b09 = 1;
    method = extraout_x1;
  }
  __this_00 = PDFMAHPKIEI_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this_00 == (PDFMAHPKIEI_o *)0x0) {
    __this_00 = (PDFMAHPKIEI_o *)thunk_FUN_01bda818(PDFMAHPKIEI_TypeInfo,method);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    PDFMAHPKIEI_TypeInfo->static_fields->CBDMFFMCJBK = __this_00;
    thunk_FUN_01c20e04(PDFMAHPKIEI_TypeInfo->static_fields,__this_00);
  }
  return __this_00;
}

