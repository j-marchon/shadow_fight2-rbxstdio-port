// NLPJLHOEAOE$$FKAIKHDPIMK @ RVA 0x31F4278

System_String_o * NLPJLHOEAOE__FKAIKHDPIMK(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  System_String_o *pSVar2;
  
  if ((DAT_04566dc1 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_21895);
    DAT_04566dc1 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGENAMAJALB__GIENGNEGHPJ((MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pSVar2 = NLPJLHOEAOE__IAIDHMIGCEL(pSVar2,StringLiteral_21892,in_x2);
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pSVar2 = NLPJLHOEAOE__IAIDHMIGCEL(pSVar2,StringLiteral_21895,in_x2);
    return pSVar2;
  }
  return pSVar2;
}

