// HOOAAGABMBL$$LNDGIGMFJPO @ RVA 0x30E9524

int64_t HOOAAGABMBL__LNDGIGMFJPO(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  long lVar2;
  int64_t iVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  bool_conflict bStack_28;
  bool_conflict bStack_27;
  undefined6 uStack_26;
  
  lVar2 = (*(__this->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                    (__this,0,(__this->klass->vtable)._6_PDECHBMCBDB.method);
  if (lVar2 != 0) {
    local_60.fields._24_8_ = *(undefined8 *)(lVar2 + 0x60);
    local_60.fields.fakeValue = *(int64_t *)(lVar2 + 0x58);
    local_60.fields.hiddenValue = *(int64_t *)(lVar2 + 0x50);
    local_60.fields.currentCryptoKey = *(int64_t *)(lVar2 + 0x48);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
                    /* try { // try from 031e9564 to 032e958f has its CatchHandler @ 031e97d4 */
    if ((0 < iVar3) &&
       (iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields)._OJGPBEFJPKN_k__BackingField.fields,(MethodInfo *)0x0),
       0 < iVar1)) {
      iStack_38 = *(int64_t *)(lVar2 + 0x50);
      local_40 = *(int64_t *)(lVar2 + 0x48);
      _bStack_28 = *(undefined8 *)(lVar2 + 0x60);
      iStack_30 = *(int64_t *)(lVar2 + 0x58);
                    /* try { // try from 031e9590 to 032e978f has its CatchHandler @ 031e9204 */
      goto LAB_031e95bc;
    }
  }
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields)._OJGPBEFJPKN_k__BackingField.fields,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_80,(long)iVar1,(MethodInfo *)0x0);
  iStack_38 = local_80.fields.hiddenValue;
  local_40 = local_80.fields.currentCryptoKey;
  bStack_28 = local_80.fields.fakeValueActive;
  bStack_27 = local_80.fields.inited;
  uStack_26 = local_80.fields._26_6_;
  iStack_30 = local_80.fields.fakeValue;
LAB_031e95bc:
  local_a0.fields.hiddenValue = iStack_38;
  local_a0.fields.currentCryptoKey = local_40;
  local_a0.fields.fakeValueActive = bStack_28;
  local_a0.fields.inited = bStack_27;
  local_a0.fields._26_6_ = uStack_26;
  local_a0.fields.fakeValue = iStack_30;
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_a0,(MethodInfo *)0x0);
  return iVar3;
}

