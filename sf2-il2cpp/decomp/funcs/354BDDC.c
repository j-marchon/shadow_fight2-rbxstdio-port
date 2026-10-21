// LEGDPJHPEOB$$LDBLLGOEDFF @ RVA 0x354BDDC

int64_t LEGDPJHPEOB__LDBLLGOEDFF
                  (LEGDPJHPEOB_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool DHDIAGODPIG,
                  MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  int64_t iVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  if ((DAT_04568b28 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10683);
    DAT_04568b28 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_10683,(MethodInfo *)0x0);
    iVar2 = 0x7fffffff;
  }
  else {
    pCVar1 = &(IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField;
    if (!DHDIAGODPIG) {
      pCVar1 = &(IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField;
    }
    local_60.fields.hiddenValue = (pCVar1->fields).hiddenValue;
    local_60.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_60.fields.fakeValueActive = (pCVar1->fields).fakeValueActive;
    local_60.fields.inited = (pCVar1->fields).inited;
    local_60.fields._26_6_ = *(undefined6 *)&(pCVar1->fields).field_0x1a;
    local_60.fields.fakeValue = (pCVar1->fields).fakeValue;
    local_40 = local_60.fields.currentCryptoKey;
    iStack_38 = local_60.fields.hiddenValue;
    iStack_30 = local_60.fields.fakeValue;
    uStack_28 = local_60.fields._24_8_;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
  }
  return iVar2;
}

