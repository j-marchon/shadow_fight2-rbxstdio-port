// CNLGMNIEGFG$$HFNDKACEADO @ RVA 0x3480690

void CNLGMNIEGFG__HFNDKACEADO(CNLGMNIEGFG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_48;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  pCVar1 = (__this->fields).BOOKHNOMHGM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_48,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_30.hiddenValueOldByte4.fields = local_48.hiddenValueOldByte4.fields;
  local_30.fakeValue = local_48.fakeValue;
  local_30.currentCryptoKey = local_48.currentCryptoKey;
  local_30.hiddenValue = local_48.hiddenValue;
  local_30.fakeValueActive = local_48.fakeValueActive;
  local_30.inited = local_48.inited;
  local_30._18_2_ = local_48._18_2_;
  if (pCVar1 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
    (pCVar1->fields).ILNHMPEGKDD.fields.fakeValueActive = local_48.fakeValueActive;
    (pCVar1->fields).ILNHMPEGKDD.fields.inited = local_48.inited;
    *(undefined2 *)&(pCVar1->fields).ILNHMPEGKDD.fields.field_0x12 = local_48._18_2_;
    (pCVar1->fields).ILNHMPEGKDD.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_48.hiddenValueOldByte4.fields;
    (pCVar1->fields).ILNHMPEGKDD.fields.fakeValue = local_48.fakeValue;
    (pCVar1->fields).ILNHMPEGKDD.fields.currentCryptoKey = local_48.currentCryptoKey;
    (pCVar1->fields).ILNHMPEGKDD.fields.hiddenValue = local_48.hiddenValue;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

