// GEIHBHEDJJM$$JIGNIKJHEBA @ RVA 0x35168AC

double GEIHBHEDJJM__JIGNIKJHEBA(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_String_o *OOGPLJBADCD;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  double dVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_48;
  
  if ((DAT_04568934 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_Value__);
    DAT_04568934 = 1;
  }
  __this_00 = &(__this->fields).JKDNFNLGGLI;
  if ((__this_00->fields).hasValue != false) {
    System_Nullable<ObscuredDouble>__get_Value
              (&local_48,__this_00,Method_System_Nullable<ObscuredDouble>_get_Value__);
    local_70.fields.hiddenValue = local_48.fields.hiddenValue;
    local_70.fields.currentCryptoKey = local_48.fields.currentCryptoKey;
    local_70.fields.fakeValue = local_48.fields.fakeValue;
    local_70.fields.hiddenValueOldByte8.fields = local_48.fields.hiddenValueOldByte8.fields;
    local_70.fields.fakeValueActive = local_48.fields.fakeValueActive;
    local_70.fields.inited = local_48.fields.inited;
    local_70.fields._34_6_ = local_48.fields._34_6_;
    dVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__ALBJPLAPOBO
                      (&local_70,(MethodInfo *)0x0);
    return dVar2;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    HLAGOHADLKH = (pNVar1->fields).QuestParameters;
    OOGPLJBADCD = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                            ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
    }
    dVar2 = MFBNFJGBPBB__GAJPKHHKCCE(HLAGOHADLKH,OOGPLJBADCD,(MethodInfo *)0x0);
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

