// HOOAAGABMBL$$ICMFLAFFOFM @ RVA 0x30EE470

int64_t HOOAAGABMBL__ICMFLAFFOFM(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  long lVar1;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  pCVar4 = &(__this->fields)._JIJJJBAGEFK_k__BackingField;
  lVar1 = (*(__this->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                    (__this,0,(__this->klass->vtable)._6_PDECHBMCBDB.method);
  if (lVar1 == 0) {
    local_60.fields.hiddenValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey = (pCVar4->fields).currentCryptoKey;
    local_60.fields.fakeValueActive =
         (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
  }
  else {
    local_40.fields.hiddenValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey = (pCVar4->fields).currentCryptoKey;
    local_40.fields.fakeValueActive =
         (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0)
    ;
    fVar5 = HOOAAGABMBL__BCNJLJLHHAG(__this,method_00);
    iVar3 = -0x8000000000000000;
    if (fVar5 * (float)iVar2 != INFINITY) {
      iVar3 = (long)(fVar5 * (float)iVar2);
    }
  }
  return iVar3;
}

