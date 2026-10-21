// FGKGKDEJCOG$$.cctor @ RVA 0x333597C

void FGKGKDEJCOG___cctor(MethodInfo *method)

{
  System_String_o **ppSVar1;
  FGKGKDEJCOG_StaticFields *pFVar2;
  undefined8 uVar3;
  
  if ((DAT_04567946 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567946 = 1;
  }
  ppSVar1 = &FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ;
  *ppSVar1 = (System_String_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar1 = &FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP;
  *ppSVar1 = (System_String_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  uVar3 = NEON_fmov(0x3f800000,4);
  pFVar2 = FGKGKDEJCOG_TypeInfo->static_fields;
  pFVar2->CHCLEFKLOKH = (float)(int)uVar3;
  pFVar2->NADOFNLEECE = (float)(int)((ulong)uVar3 >> 0x20);
  return;
}

