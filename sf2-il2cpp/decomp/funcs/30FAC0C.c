// EBAGAPCEIOM$$PKFOJKHFKKL @ RVA 0x30FAC0C

System_String_o *
EBAGAPCEIOM__PKFOJKHFKKL(EBAGAPCEIOM_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566498 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1556);
    DAT_04566498 = 1;
  }
  pSVar2 = System_String__Concat
                     ((__this->fields).KLHOPMEDALP,StringLiteral_1556,HEEJOJAGIKC,(MethodInfo *)0x0)
  ;
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = NEHNBJKKABI__OLOAJIKFMHE(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (System_String_o *)0x0;
}

