// AGILEPNENOH$$HCIGNMBPBOP @ RVA 0x30FF1EC

int64_t AGILEPNENOH__HCIGNMBPBOP(MethodInfo *method)

{
  int64_t iVar1;
  AGILEPNENOH_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045664b3 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    DAT_045664b3 = 1;
  }
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = AGILEPNENOH_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pAVar2->MKMJJANAAFD).fields.fakeValueActive;
  local_40.fields.inited = (pAVar2->MKMJJANAAFD).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pAVar2->MKMJJANAAFD).fields.field_0x1a;
  local_40.fields.fakeValue = (pAVar2->MKMJJANAAFD).fields.fakeValue;
  local_40.fields.hiddenValue = (pAVar2->MKMJJANAAFD).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pAVar2->MKMJJANAAFD).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return iVar1;
}

