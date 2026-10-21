// ICOEHFKOMGO$$.cctor @ RVA 0x329E590

void ICOEHFKOMGO___cctor(MethodInfo *method)

{
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *pSVar1;
  ICOEHFKOMGO_StaticFields *pIVar2;
  System_Collections_Generic_List_string__o **ppSVar3;
  
  if ((DAT_045673b4 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    DAT_045673b4 = 1;
  }
  pIVar2 = ICOEHFKOMGO_TypeInfo->static_fields;
  pIVar2->INJOPADMHIN = 10000;
  pIVar2->AOCHDECPDCE = 20000;
  ICOEHFKOMGO__DGLJCGNHLIG(method);
  pSVar1 = ICOEHFKOMGO__DNPLNFOAMMC(method_00);
  ppSVar3 = &ICOEHFKOMGO_TypeInfo->static_fields->FLHAPNICOAN;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  return;
}

