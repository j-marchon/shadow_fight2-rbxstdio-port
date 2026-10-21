// JLGNBOILFLN$$.ctor @ RVA 0x3248BC8

void JLGNBOILFLN___ctor(JLGNBOILFLN_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,int32_t JLAFGLDIFOC,
                       int32_t HJEBKCDDBAB,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  HEFOANCOHDC_o **ppHVar3;
  
  if ((DAT_045670d6 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045670d6 = 1;
  }
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).OIKLOAGFFGO = HJEBKCDDBAB;
  (__this->fields).GHPHFGBIPCI = JLAFGLDIFOC;
  ppHVar3 = &(__this->fields).LENFGEAJDMN;
  *ppHVar3 = EIKFGOCCOIE;
  thunk_FUN_01c20e04(ppHVar3,EIKFGOCCOIE);
  (__this->fields).HAEBIACJLHP = false;
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  ppSVar1 = (System_String_o **)&StringLiteral_1;
  if (*ppHVar3 != (HEFOANCOHDC_o *)0x0) {
    ppSVar1 = &((*ppHVar3)->fields).BPCADJLKKGA;
  }
  ppSVar2 = &(__this->fields).BJMHBMDFFPA;
  *ppSVar2 = *ppSVar1;
  thunk_FUN_01c20e04(ppSVar2);
  return;
}

