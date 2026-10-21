// IEFEBEDLHNN$$HAEEOENJNBK @ RVA 0x308B7A4

void IEFEBEDLHNN__HAEEOENJNBK
               (IEFEBEDLHNN_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = CJNHFNHJHPE.fields._8_4_;
  uVar1 = CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.currentCryptoKey = (char)uVar1;
  *(int3 *)&(__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0x1 =
       (int3)((ulong)uVar1 >> 8);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.hiddenValue = (int)((ulong)uVar1 >> 0x20);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValue = (bool_conflict)(char)uVar2;
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.inited =
       (bool_conflict)(char)((uint)uVar2 >> 8);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((uint)uVar2 >> 0x10);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0xb = (char)((uint)uVar2 >> 0x18);
  return;
}

