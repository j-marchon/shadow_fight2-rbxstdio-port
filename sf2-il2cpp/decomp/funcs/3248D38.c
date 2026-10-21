// JLGNBOILFLN$$MBIIPOJONAM @ RVA 0x3248D38

System_String_o * JLGNBOILFLN__MBIIPOJONAM(JLGNBOILFLN_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  HEFOANCOHDC_o *pHVar2;
  
  if ((DAT_045670d9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_045670d9 = 1;
  }
  pHVar2 = (__this->fields).LENFGEAJDMN;
  ppSVar1 = (System_String_o **)&StringLiteral_1;
  if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
    ppSVar1 = &(pHVar2->fields).KPDPJONADPJ;
  }
  return *ppSVar1;
}

