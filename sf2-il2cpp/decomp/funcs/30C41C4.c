// MDAPDLLMOMF$$GEANKLAHCAE @ RVA 0x30C41C4

/* WARNING: Type propagation algorithm not settling */

void MDAPDLLMOMF__GEANKLAHCAE
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *__return_storage_ptr__,
               MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  float fVar2;
  float fVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  undefined8 uVar7;
  
  pCVar1 = &(__this->fields).MAPPDBALOAE;
  uVar7 = *(undefined8 *)&(__this->fields).MAPPDBALOAE.fields.fakeValue.fields.z;
  fVar2 = (pCVar1->fields).fakeValue.fields.x;
  fVar3 = (pCVar1->fields).fakeValue.fields.y;
  pCVar1 = &(__this->fields).MAPPDBALOAE;
  iVar4 = (pCVar1->fields).hiddenValue.fields.z;
  iVar5 = (__this->fields).MAPPDBALOAE.fields.currentCryptoKey;
  iVar6 = (__this->fields).MAPPDBALOAE.fields.hiddenValue.fields.x;
  (__return_storage_ptr__->fields).hiddenValue.fields.y = (pCVar1->fields).hiddenValue.fields.y;
  (__return_storage_ptr__->fields).hiddenValue.fields.z = iVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue.fields.x = iVar6;
  *(undefined8 *)&(__return_storage_ptr__->fields).fakeValue.fields.z = uVar7;
  (__return_storage_ptr__->fields).fakeValue.fields.x = fVar2;
  (__return_storage_ptr__->fields).fakeValue.fields.y = fVar3;
  return;
}

