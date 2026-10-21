// IGFGDDANEPE$$DHNBLNPDGMD @ RVA 0x30A2E18

HOOAAGABMBL_o * IGFGDDANEPE__DHNBLNPDGMD(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar2;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04566156 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566156 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).NOBPPMJKPLM.fields,(MethodInfo *)0x0);
  if ((0 < iVar1) && (pHVar3 = (__this->fields).PCBECBEFJOI, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).NOBPPMJKPLM.fields,(MethodInfo *)0x0);
    pHVar3 = HOOAAGABMBL__PIGMAMNLCMH(pHVar3,iVar1,(MethodInfo *)0x0);
    return pHVar3;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    pHVar3 = IGFGDDANEPE__JPNNODJPOCL(__this,(pAVar2->fields).CDAFCFNLDND,method_00);
    return pHVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

