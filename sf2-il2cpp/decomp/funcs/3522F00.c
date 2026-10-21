// LLKDCCJMFLE$$ELJDBJCJAEF @ RVA 0x3522F00

bool LLKDCCJMFLE__ELJDBJCJAEF(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_045689e9 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_4699);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_13929);
    DAT_045689e9 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI__PDGPEFAMKLM((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  bVar1 = !bVar1;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar2 = ACHLOMELAJE__JGGHLGELFDJ(__this,StringLiteral_4699,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = ACHLOMELAJE__NOILDCIGGJB(__this,StringLiteral_4699,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13929,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar3 = ACHLOMELAJE__NOILDCIGGJB(__this,StringLiteral_4699,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_1606,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = true;
    }
  }
  return bVar1;
}

