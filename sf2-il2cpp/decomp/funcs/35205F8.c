// Nekki.SF2.GUI.Fight.PlayerLifeBar$$HOPDLCBPCNB @ RVA 0x35205F8

float Nekki_SF2_GUI_Fight_PlayerLifeBar__HOPDLCBPCNB
                (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  float fVar2;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pPVar1 = (__this->fields).MFLNIMCFPDK;
  if (pPVar1 == (PJKHAJKEHEL_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,0.0,(MethodInfo *)0x0)
    ;
    local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
    local_40.fakeValue = local_58.fakeValue;
    local_40.currentCryptoKey = local_58.currentCryptoKey;
    local_40.hiddenValue = local_58.hiddenValue;
    local_40.fakeValueActive = local_58.fakeValueActive;
    local_40.inited = local_58.inited;
    local_40._18_2_ = local_58._18_2_;
  }
  else {
    local_40.fakeValueActive = (pPVar1->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_40.inited = (pPVar1->fields).JNFNFEJAGGN.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(pPVar1->fields).JNFNFEJAGGN.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (pPVar1->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (pPVar1->fields).JNFNFEJAGGN.fields.fakeValue;
    local_40.currentCryptoKey = (pPVar1->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_40.hiddenValue = (pPVar1->fields).JNFNFEJAGGN.fields.hiddenValue;
  }
  local_70.hiddenValueOldByte4.fields = local_40.hiddenValueOldByte4.fields;
  local_70.fakeValue = local_40.fakeValue;
  local_70.currentCryptoKey = local_40.currentCryptoKey;
  local_70.hiddenValue = local_40.hiddenValue;
  local_70.fakeValueActive = local_40.fakeValueActive;
  local_70.inited = local_40.inited;
  local_70._18_2_ = local_40._18_2_;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                     (MethodInfo *)0x0);
  if (0.0 < fVar2) {
    if (DAT_04568a2e == '\0') {
      FUN_01bab630(&LNEGPKPOLGO_TypeInfo);
      DAT_04568a2e = '\x01';
    }
    fVar3 = LNEGPKPOLGO_TypeInfo->static_fields->KLAPNGPGIGB;
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}

