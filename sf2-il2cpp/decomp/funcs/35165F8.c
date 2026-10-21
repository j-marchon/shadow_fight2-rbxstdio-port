// GEIHBHEDJJM$$GPJJDLBJOAL @ RVA 0x35165F8

/* WARNING: Type propagation algorithm not settling */

void GEIHBHEDJJM__GPJJDLBJOAL(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *pSVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_50;
  
  if ((DAT_04568930 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    DAT_04568930 = 1;
  }
  local_50.fields.fakeValueActive = false;
  local_50.fields.inited = false;
  local_50.fields._34_6_ = 0;
  local_50.fields.hiddenValue = 0;
  local_50.fields.currentCryptoKey = 0;
  local_50.fields.fakeValue = 0.0;
  local_50.fields.hiddenValueOldByte8.fields.b1 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b2 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b3 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b4 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b5 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b6 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b7 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b8 = 0;
  if ((__this->fields).JKDNFNLGGLI.fields.hasValue != false) {
    pSVar1 = &(__this->fields).JKDNFNLGGLI;
    local_50.fields.fakeValueActive = (pSVar1->fields).value.fields.fakeValueActive;
    local_50.fields.inited = (pSVar1->fields).value.fields.inited;
    local_50.fields._34_6_ = *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22;
    local_50.fields.hiddenValue = (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue;
    local_50.fields.currentCryptoKey =
         (__this->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey;
    local_50.fields.fakeValue = (__this->fields).JKDNFNLGGLI.fields.value.fields.fakeValue;
    local_50.fields.hiddenValueOldByte8.fields =
         (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__GPJJDLBJOAL(&local_50,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).PCNEDMAJMOJ;
  if (__this_00 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL(__this_00,(MethodInfo *)0x0);
  }
  return;
}

