// AAPGCAPGBLG$$OKJPFHIIJAD @ RVA 0x325F328

System_String_o * AAPGCAPGBLG__OKJPFHIIJAD(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456719e & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456719e = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MGENAMAJALB__GACHMMDHOJE((MethodInfo *)0x0);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__GACHMMDHOJE((MethodInfo *)0x0);
    pSVar2 = NEHNBJKKABI__EPMKDIAJEOI(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return StringLiteral_1;
}

