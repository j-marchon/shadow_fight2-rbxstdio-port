// ACHLOMELAJE$$FMPEPDEHNKP @ RVA 0x305E0A8

void ACHLOMELAJE__FMPEPDEHNKP
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__return_storage_ptr__,
               ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined6 uVar3;
  int64_t iVar4;
  int64_t iVar5;
  
  iVar5 = (__this->fields).MBINFANFLMC.fields.currentCryptoKey;
  bVar1 = (__this->fields).MBINFANFLMC.fields.fakeValueActive;
  bVar2 = (__this->fields).MBINFANFLMC.fields.inited;
  uVar3 = *(undefined6 *)&(__this->fields).MBINFANFLMC.fields.field_0x1a;
  iVar4 = (__this->fields).MBINFANFLMC.fields.fakeValue;
  (__return_storage_ptr__->fields).hiddenValue = (__this->fields).MBINFANFLMC.fields.hiddenValue;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).fakeValueActive = bVar1;
  (__return_storage_ptr__->fields).inited = bVar2;
  *(undefined6 *)&(__return_storage_ptr__->fields).field_0x1a = uVar3;
  (__return_storage_ptr__->fields).fakeValue = iVar4;
  return;
}

