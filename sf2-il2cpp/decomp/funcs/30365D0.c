// GGCMECLCOMJ$$PKPLAKAMOPO @ RVA 0x30365D0

void GGCMECLCOMJ__PKPLAKAMOPO
               (GGCMECLCOMJ_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
                    /* try { // try from 031365d0 to 032365d3 has its CatchHandler @ 031366e0 */
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._AJBLFMPFEIO_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._AJBLFMPFEIO_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
                    /* try { // try from 031365d4 to 032365d7 has its CatchHandler @ 031366d8 */
  return;
}

