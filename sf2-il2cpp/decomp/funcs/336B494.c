// MDFGJKBMECA.OJOAPHBHAFL$$DPHMDPHEIKO @ RVA 0x336B494

System_String_o *
MDFGJKBMECA_OJOAPHBHAFL__DPHMDPHEIKO(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MDFGJKBMECA_OJOAPHBHAFL_o *__this_00;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  
  if ((DAT_04567ae7 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04567ae7 = 1;
  }
  ppSVar3 = &(__this->fields).IFMAFGGMIFO;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = LIIFLGALGNK__FBLGOHOOMJG(0xf,(MethodInfo *)0x0);
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (MDFGJKBMECA_OJOAPHBHAFL_o *)EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
  pSVar2 = MDFGJKBMECA_OJOAPHBHAFL__MDCGMNHJPFN(__this_00,method_00);
  pSVar2 = System_String__Concat((System_String_o *)__this_00,pSVar2,*ppSVar3,(MethodInfo *)0x0);
  return pSVar2;
}

