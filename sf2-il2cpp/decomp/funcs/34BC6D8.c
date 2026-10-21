// IONAICHLBOO$$.cctor @ RVA 0x34BC6D8

void IONAICHLBOO___cctor(MethodInfo *method)

{
  if ((DAT_045685e8 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    FUN_01bab630(&StringLiteral_1591);
    FUN_01bab630(&StringLiteral_2610);
    DAT_045685e8 = 1;
  }
  IONAICHLBOO_TypeInfo->static_fields->JJBJCAPAILN = StringLiteral_2610;
  thunk_FUN_01c20e04(IONAICHLBOO_TypeInfo->static_fields,StringLiteral_2610);
  IONAICHLBOO_TypeInfo->static_fields->LFDLDAKALCP = StringLiteral_1591;
  thunk_FUN_01c20e04();
  return;
}

