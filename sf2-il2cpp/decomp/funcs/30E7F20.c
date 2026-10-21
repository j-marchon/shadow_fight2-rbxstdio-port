// HOOAAGABMBL$$NEDDLGPMIEB @ RVA 0x30E7F20

void HOOAAGABMBL__NEDDLGPMIEB(HOOAAGABMBL_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_045663ff & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_11073);
    DAT_045663ff = 1;
  }
  bVar1 = System_String__op_Inequality
                    ((__this->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    local_50.fields.hiddenValue = (__this->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue;
    local_50.fields.currentCryptoKey =
         (__this->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey;
    local_50.fields.fakeValueActive =
         (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive;
    local_50.fields.inited = (__this->fields)._DILLJMLCPON_k__BackingField.fields.inited;
    local_50.fields._26_6_ =
         *(undefined6 *)&(__this->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a;
    local_50.fields.fakeValue = (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_50,(MethodInfo *)0x0);
    local_70.fields.hiddenValue = (__this->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue;
    local_70.fields.currentCryptoKey =
         (__this->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey;
    local_70.fields.fakeValueActive =
         (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive;
    local_70.fields.inited = (__this->fields)._DILLJMLCPON_k__BackingField.fields.inited;
    local_70.fields._26_6_ =
         *(undefined6 *)&(__this->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a;
    local_70.fields.fakeValue = (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0)
    ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,iVar2,(MethodInfo *)0x0);
    (__this->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue = local_90.fields.hiddenValue;
    (__this->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey =
         local_90.fields.currentCryptoKey;
    (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive =
         local_90.fields.fakeValueActive;
    (__this->fields)._DILLJMLCPON_k__BackingField.fields.inited = local_90.fields.inited;
    *(undefined6 *)&(__this->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a =
         local_90.fields._26_6_;
    (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue = local_90.fields.fakeValue;
  }
  return;
}

