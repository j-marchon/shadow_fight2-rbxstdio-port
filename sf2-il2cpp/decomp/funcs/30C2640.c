// MDAPDLLMOMF.NHJGACDEAGK$$DPPIEAMHDCI @ RVA 0x30C2640

void MDAPDLLMOMF_NHJGACDEAGK__DPPIEAMHDCI(MDAPDLLMOMF_NHJGACDEAGK_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_98 [2];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
                    /* try { // try from 031c2658 to 032c267f has its CatchHandler @ 031c2870 */
  if (((__this->fields).FPMLNJLCOGA != false) && ((__this->fields).ENADIBNCOMI != false)) {
    local_40.fakeValueActive = (__this->fields).JHLJELAKADM.fields.fakeValueActive;
    local_40.inited = (__this->fields).JHLJELAKADM.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (__this->fields).JHLJELAKADM.fields.fakeValue;
    local_40.currentCryptoKey = (__this->fields).JHLJELAKADM.fields.currentCryptoKey;
    local_40.hiddenValue = (__this->fields).JHLJELAKADM.fields.hiddenValue;
    fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                       (MethodInfo *)0x0);
    local_60.hiddenValueOldByte4.fields =
         (__this->fields).HKPPIFKAFMP.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (__this->fields).HKPPIFKAFMP.fields.fakeValue;
    local_60.currentCryptoKey = (__this->fields).HKPPIFKAFMP.fields.currentCryptoKey;
    local_60.hiddenValue = (__this->fields).HKPPIFKAFMP.fields.hiddenValue;
    local_60.fakeValueActive = (__this->fields).HKPPIFKAFMP.fields.fakeValueActive;
    local_60.inited = (__this->fields).HKPPIFKAFMP.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(__this->fields).HKPPIFKAFMP.fields.field_0x12;
    fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                       (MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_98,fVar1 * fVar2,
               (MethodInfo *)0x0);
                    /* try { // try from 031c26b4 to 032c26df has its CatchHandler @ 031c286c */
    (__this->fields).JHLJELAKADM.fields.fakeValueActive = local_98[0].fakeValueActive;
    (__this->fields).JHLJELAKADM.fields.inited = local_98[0].inited;
    *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12 = local_98[0]._18_2_;
    (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_98[0].hiddenValueOldByte4.fields;
    (__this->fields).JHLJELAKADM.fields.fakeValue = local_98[0].fakeValue;
    (__this->fields).JHLJELAKADM.fields.currentCryptoKey = local_98[0].currentCryptoKey;
    (__this->fields).JHLJELAKADM.fields.hiddenValue = local_98[0].hiddenValue;
  }
  return;
}

