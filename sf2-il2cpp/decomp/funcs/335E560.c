// NFNBHPOJFNJ$$KEDOIFMBKNI @ RVA 0x335E560

System_String_o * NFNBHPOJFNJ__KEDOIFMBKNI(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567a62 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1521);
    DAT_04567a62 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1521,(MethodInfo *)0x0);
  return pSVar1;
}

