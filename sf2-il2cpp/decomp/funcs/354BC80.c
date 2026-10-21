// LEGDPJHPEOB$$BNIDHODEMHP @ RVA 0x354BC80

int64_t LEGDPJHPEOB__BNIDHODEMHP
                  (LEGDPJHPEOB_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool DHDIAGODPIG,
                  MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_String_o *message;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar3;
  undefined8 *puVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  if ((DAT_04568b27 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10685);
    FUN_01bab630(&StringLiteral_19738);
    FUN_01bab630(&StringLiteral_511);
    FUN_01bab630(&StringLiteral_10686);
    FUN_01bab630(&StringLiteral_16742);
    DAT_04568b27 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    message = StringLiteral_10686;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      message = StringLiteral_10686;
    }
LAB_0364bdc0:
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    iVar2 = 0x7fffffff;
  }
  else {
    if (DHDIAGODPIG) {
      bVar1 = HOOAAGABMBL__LJIADGDFCPK(IKKAMAMLIKA,(MethodInfo *)0x0);
      if (!bVar1) {
        puVar4 = &StringLiteral_19738;
LAB_0364bd74:
        message = System_String__Concat
                            (StringLiteral_10685,(System_String_o *)*puVar4,StringLiteral_511,
                             (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        goto LAB_0364bdc0;
      }
      pCVar3 = &(IKKAMAMLIKA->fields)._JIJJJBAGEFK_k__BackingField;
    }
    else {
      bVar1 = HOOAAGABMBL__NNBJIDNAADK(IKKAMAMLIKA,(MethodInfo *)0x0);
      if (!bVar1) {
        puVar4 = &StringLiteral_16742;
        goto LAB_0364bd74;
      }
      pCVar3 = &(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField;
    }
    local_60.fields.hiddenValue = (pCVar3->fields).hiddenValue;
    local_60.fields.currentCryptoKey = (pCVar3->fields).currentCryptoKey;
    local_60.fields.fakeValueActive = (pCVar3->fields).fakeValueActive;
    local_60.fields.inited = (pCVar3->fields).inited;
    local_60.fields._26_6_ = *(undefined6 *)&(pCVar3->fields).field_0x1a;
    local_60.fields.fakeValue = (pCVar3->fields).fakeValue;
    local_40 = local_60.fields.currentCryptoKey;
    iStack_38 = local_60.fields.hiddenValue;
    iStack_30 = local_60.fields.fakeValue;
    uStack_28 = local_60.fields._24_8_;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
  }
  return iVar2;
}

