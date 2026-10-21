// GEIHBHEDJJM$$FHBEMPFIHNF @ RVA 0x3516AE8

System_String_o * GEIHBHEDJJM__FHBEMPFIHNF(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *__this_00;
  System_String_o *pSVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_78;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_50;
  
  if ((DAT_04568935 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_Value__);
    DAT_04568935 = 1;
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
  __this_00 = &(__this->fields).JKDNFNLGGLI;
  if ((__this_00->fields).hasValue == false) {
    if ((__this->fields).NKMGMPKKEAA == false) {
      pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
    }
    else {
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HLAGOHADLKH = (pNVar2->fields).QuestParameters;
      pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
      }
      pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(HLAGOHADLKH,pSVar1,(MethodInfo *)0x0);
    }
  }
  else {
    System_Nullable<ObscuredDouble>__get_Value
              (&local_78,__this_00,Method_System_Nullable<ObscuredDouble>_get_Value__);
    local_50.fields.hiddenValue = local_78.fields.hiddenValue;
    local_50.fields.currentCryptoKey = local_78.fields.currentCryptoKey;
    local_50.fields.fakeValue = local_78.fields.fakeValue;
    local_50.fields.hiddenValueOldByte8.fields = local_78.fields.hiddenValueOldByte8.fields;
    local_50.fields.fakeValueActive = local_78.fields.fakeValueActive;
    local_50.fields.inited = local_78.fields.inited;
    local_50.fields._34_6_ = local_78.fields._34_6_;
    pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__ToString(&local_50,(MethodInfo *)0x0)
    ;
  }
  return pSVar1;
}

