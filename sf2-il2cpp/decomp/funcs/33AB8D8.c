// GDKLJOEKBNF$$OAKNDMACPCK @ RVA 0x33AB8D8

void GDKLJOEKBNF__OAKNDMACPCK
               (GDKLJOEKBNF_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._LJNEEIANKCI_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}

