// BBBBKBBFNOG$$NDNPGAKJLHM @ RVA 0x34D0E38

void BBBBKBBFNOG__NDNPGAKJLHM(MethodInfo *method)

{
  BBBBKBBFNOG_c *pBVar1;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  bool_conflict bStack_28;
  bool_conflict bStack_27;
  undefined6 uStack_26;
  
  if ((DAT_045686b3 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b3 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,0,(MethodInfo *)0x0);
  iStack_38 = local_60.fields.hiddenValue;
  local_40 = local_60.fields.currentCryptoKey;
  bStack_28 = local_60.fields.fakeValueActive;
  bStack_27 = local_60.fields.inited;
  uStack_26 = local_60.fields._26_6_;
  iStack_30 = local_60.fields.fakeValue;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar1 = BBBBKBBFNOG_TypeInfo;
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = bStack_28;
  (pBVar2->HEINPMAGCOD).fields.inited = bStack_27;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = uStack_26;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = iStack_30;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = iStack_38;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_40;
  pBVar2 = pBVar1->static_fields;
  pBVar2->GIBFOOLLACF = (System_Action_long__o *)0x0;
  pBVar2->AHCKJLKAKMN = 0.0;
  pBVar2->CLGHDPOCECK = 0;
  thunk_FUN_01c20e04(&pBVar2->GIBFOOLLACF,0);
  return;
}

