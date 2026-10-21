// EBAGAPCEIOM$$.ctor @ RVA 0x30FAC98

void EBAGAPCEIOM___ctor(EBAGAPCEIOM_o *__this,System_String_o *AAIHDEKMIJG,
                       System_String_o *BCJOFBLBHAC,MethodInfo *method)

{
  System_String_o *JGHIJMJNJLE;
  System_String_o *IBOAKONNBMM;
  System_String_o **ppSVar1;
  EBAGAPCEIOM_Fields *pEVar2;
  
  if ((DAT_04566499 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1556);
    DAT_04566499 = 1;
  }
  LDBDCAICCPP___ctor((LDBDCAICCPP_o *)__this,(MethodInfo *)0x0);
  pEVar2 = &__this->fields;
  pEVar2->KLHOPMEDALP = AAIHDEKMIJG;
  thunk_FUN_01c20e04(pEVar2,AAIHDEKMIJG);
  ppSVar1 = &(__this->fields).DHAMIKMBDEE;
  *ppSVar1 = BCJOFBLBHAC;
  thunk_FUN_01c20e04(ppSVar1,BCJOFBLBHAC);
  JGHIJMJNJLE = System_String__Concat(pEVar2->KLHOPMEDALP,*ppSVar1,(MethodInfo *)0x0);
  IBOAKONNBMM = System_String__Concat(pEVar2->KLHOPMEDALP,StringLiteral_1556,(MethodInfo *)0x0);
  BHHMILDAFKI__AGBMPFBJBGM(JGHIJMJNJLE,IBOAKONNBMM,(MethodInfo *)0x0);
  return;
}

