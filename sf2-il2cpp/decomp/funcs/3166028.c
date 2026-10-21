// GALHNMPIEHA$$EBPPGDNPHGG @ RVA 0x3166028

bool GALHNMPIEHA__EBPPGDNPHGG(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  
  if ((DAT_045668ba & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15988);
    DAT_045668ba = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  bVar1 = false;
  if ((__this != (ACHLOMELAJE_o *)0x0) &&
     (pMVar3 = ACHLOMELAJE__HKIEGNBOFCD(__this,StringLiteral_15988,0,(MethodInfo *)0x0),
     bVar1 = false, pMVar3 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    iVar2 = System_Int32__Parse((pMVar3->fields).JAICMIMBIOA,(MethodInfo *)0x0);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

