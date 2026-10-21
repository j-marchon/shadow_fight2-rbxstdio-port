// HOOAAGABMBL$$FKKAEBAKBOO @ RVA 0x30EFC8C

int64_t HOOAAGABMBL__FKKAEBAKBOO(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  long lVar1;
  int64_t iVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  lVar1 = (*(__this->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                    (__this,0,(__this->klass->vtable)._6_PDECHBMCBDB.method);
  if (lVar1 != 0) {
    local_60.fields._24_8_ = *(undefined8 *)(lVar1 + 0x60);
    local_60.fields.fakeValue = *(int64_t *)(lVar1 + 0x58);
    local_60.fields.hiddenValue = *(int64_t *)(lVar1 + 0x50);
    local_60.fields.currentCryptoKey = *(int64_t *)(lVar1 + 0x48);
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
    if (0 < iVar2) {
      local_80.fields.hiddenValue = (__this->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue
      ;
      local_80.fields.currentCryptoKey =
           (__this->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
      local_80.fields.fakeValueActive =
           (__this->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
      local_80.fields.inited = (__this->fields)._OFDIEEPACGC_k__BackingField.fields.inited;
      local_80.fields._26_6_ =
           *(undefined6 *)&(__this->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a;
      local_80.fields.fakeValue = (__this->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_80,(MethodInfo *)0x0);
      if (0 < iVar2) {
        local_a0.fields.hiddenValue = *(int64_t *)(lVar1 + 0x50);
        local_a0.fields.currentCryptoKey = *(int64_t *)(lVar1 + 0x48);
        local_a0.fields._24_8_ = *(undefined8 *)(lVar1 + 0x60);
        local_a0.fields.fakeValue = *(int64_t *)(lVar1 + 0x58);
        goto LAB_031efd00;
      }
    }
  }
  local_a0.fields.hiddenValue = (__this->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue;
  local_a0.fields.currentCryptoKey =
       (__this->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
  local_a0.fields.fakeValueActive =
       (__this->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
  local_a0.fields.inited = (__this->fields)._OFDIEEPACGC_k__BackingField.fields.inited;
  local_a0.fields._26_6_ =
       *(undefined6 *)&(__this->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a;
  local_a0.fields.fakeValue = (__this->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
LAB_031efd00:
  local_40 = local_a0.fields.currentCryptoKey;
  iStack_38 = local_a0.fields.hiddenValue;
  iStack_30 = local_a0.fields.fakeValue;
  uStack_28 = local_a0.fields._24_8_;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_a0,(MethodInfo *)0x0);
  return iVar2;
}

