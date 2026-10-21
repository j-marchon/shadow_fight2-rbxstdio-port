// NLPJLHOEAOE$$DJKIDNICADB @ RVA 0x3205C40

System_String_o * NLPJLHOEAOE__DJKIDNICADB(MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_c *pNVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04566e1c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566e1c = 1;
  }
  pNVar2 = NLPJLHOEAOE_TypeInfo;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
  }
  pSVar3 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)pNVar2);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = NLPJLHOEAOE_TypeInfo;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
    }
    pSVar3 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)pNVar2);
    pSVar3 = NEHNBJKKABI__EPMKDIAJEOI(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  return StringLiteral_1;
}

