// NPLIJHGBGCB$$MPDLFPNJNED @ RVA 0x33DE9F8

Nekki_Yaml_YamlDocumentNekki_o *
NPLIJHGBGCB__MPDLFPNJNED
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t HIEHLGHMJDO,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_Yaml_YamlDocumentNekki_o *pNVar3;
  
  if ((DAT_04567e8a & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e8a = 1;
  }
  bVar1 = System_String__op_Inequality(ILENGCADNIH,StringLiteral_1,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1;
  if (bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_1492,ILENGCADNIH,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
  if (HIEHLGHMJDO == 2) {
    pSVar2 = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else if (HIEHLGHMJDO == 1) {
    pSVar2 = CMEBCBKGFFL__LMCHNOGAEHE(pSVar2,(MethodInfo *)0x0);
  }
  else {
    if (HIEHLGHMJDO != 0) {
      return (Nekki_Yaml_YamlDocumentNekki_o *)0x0;
    }
    pSVar2 = CMEBCBKGFFL__KGDAINKJCGG(pSVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = Nekki_Yaml_YamlDocumentNekki__OACALLIJLDC(pSVar2,(MethodInfo *)0x0);
  return pNVar3;
}

