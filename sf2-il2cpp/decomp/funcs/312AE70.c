// ABMPAOFAAEI$$.cctor @ RVA 0x312AE70

void ABMPAOFAAEI___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_0456668c & 1) == 0) {
    FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_0456668c = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0);
  ABMPAOFAAEI_TypeInfo->static_fields->DHCFDOAFFFO = pSVar1;
  thunk_FUN_01c20e04(ABMPAOFAAEI_TypeInfo->static_fields,pSVar1);
  return;
}

