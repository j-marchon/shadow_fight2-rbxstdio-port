// BEPJMNAHCAD$$DPDGNBFJJNC @ RVA 0x31898F8

void BEPJMNAHCAD__DPDGNBFJJNC(BEPJMNAHCAD_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  MBALPICJBHF_o *pMVar2;
  MNLIBPAOCLG_o *__this_00;
  Il2CppClass *settings;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_e0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_04566a02 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04566a02 = 1;
    method = extraout_x1;
  }
  if (((__this->fields).ANNBPCDGAHJ == false) ||
     ((__this->fields).IMEDLCCHGNH == (MBALPICJBHF_o *)0x0)) {
    return;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    settings = pIVar1[3].klass;
    fVar10 = (__this->fields).CDCDGKDNDAL;
    fVar9 = (__this->fields).OLFPNIHIDIN;
    fVar3 = Core_Configs_Models_BuildSettingsExtension__EvaluateAmplitudeFactor
                      ((Core_Configs_Models_ShakeScreenParamsSettings_o *)settings,(MethodInfo *)0x0
                      );
    pMVar2 = (__this->fields).IMEDLCCHGNH;
    if (pMVar2 != (MBALPICJBHF_o *)0x0) {
      local_80.fakeValueActive = (pMVar2->fields).CKHKAPNMEKL.fields.fakeValueActive;
      local_80.inited = (pMVar2->fields).CKHKAPNMEKL.fields.inited;
      local_80._18_2_ = *(undefined2 *)&(pMVar2->fields).CKHKAPNMEKL.fields.field_0x12;
      local_80.hiddenValueOldByte4.fields =
           (pMVar2->fields).CKHKAPNMEKL.fields.hiddenValueOldByte4.fields;
      local_80.fakeValue = (pMVar2->fields).CKHKAPNMEKL.fields.fakeValue;
      local_80.currentCryptoKey = (pMVar2->fields).CKHKAPNMEKL.fields.currentCryptoKey;
      local_80.hiddenValue = (pMVar2->fields).CKHKAPNMEKL.fields.hiddenValue;
      fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                         (MethodInfo *)0x0);
      pMVar2 = (__this->fields).IMEDLCCHGNH;
      if (pMVar2 != (MBALPICJBHF_o *)0x0) {
        local_a0.fakeValueActive = (pMVar2->fields).IBBCABGOAMN.fields.fakeValueActive;
        local_a0.inited = (pMVar2->fields).IBBCABGOAMN.fields.inited;
        local_a0._18_2_ = *(undefined2 *)&(pMVar2->fields).IBBCABGOAMN.fields.field_0x12;
        local_a0.hiddenValueOldByte4.fields =
             (pMVar2->fields).IBBCABGOAMN.fields.hiddenValueOldByte4.fields;
        local_a0.fakeValue = (pMVar2->fields).IBBCABGOAMN.fields.fakeValue;
        local_a0.currentCryptoKey = (pMVar2->fields).IBBCABGOAMN.fields.currentCryptoKey;
        local_a0.hiddenValue = (pMVar2->fields).IBBCABGOAMN.fields.hiddenValue;
        fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,
                           (MethodInfo *)0x0);
        fVar6 = Core_Configs_Models_BuildSettingsExtension__EvaluateFrequencyFactor
                          ((Core_Configs_Models_ShakeScreenParamsSettings_o *)settings,
                           (MethodInfo *)0x0);
        pMVar2 = (__this->fields).IMEDLCCHGNH;
        if (pMVar2 != (MBALPICJBHF_o *)0x0) {
          local_c0.fakeValueActive = (pMVar2->fields).JPKGOALFABP.fields.fakeValueActive;
          local_c0.inited = (pMVar2->fields).JPKGOALFABP.fields.inited;
          local_c0._18_2_ = *(undefined2 *)&(pMVar2->fields).JPKGOALFABP.fields.field_0x12;
          local_c0.hiddenValueOldByte4.fields =
               (pMVar2->fields).JPKGOALFABP.fields.hiddenValueOldByte4.fields;
          local_c0.fakeValue = (pMVar2->fields).JPKGOALFABP.fields.fakeValue;
          local_c0.currentCryptoKey = (pMVar2->fields).JPKGOALFABP.fields.currentCryptoKey;
          local_c0.hiddenValue = (pMVar2->fields).JPKGOALFABP.fields.hiddenValue;
          fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,
                             (MethodInfo *)0x0);
          pMVar2 = (__this->fields).IMEDLCCHGNH;
          if (pMVar2 != (MBALPICJBHF_o *)0x0) {
            local_e0.fakeValueActive = (pMVar2->fields).LGABGEDDHDO.fields.fakeValueActive;
            local_e0.inited = (pMVar2->fields).LGABGEDDHDO.fields.inited;
            local_e0._18_2_ = *(undefined2 *)&(pMVar2->fields).LGABGEDDHDO.fields.field_0x12;
            local_e0.hiddenValueOldByte4.fields =
                 (pMVar2->fields).LGABGEDDHDO.fields.hiddenValueOldByte4.fields;
            local_e0.fakeValue = (pMVar2->fields).LGABGEDDHDO.fields.fakeValue;
            local_e0.currentCryptoKey = (pMVar2->fields).LGABGEDDHDO.fields.currentCryptoKey;
            local_e0.hiddenValue = (pMVar2->fields).LGABGEDDHDO.fields.hiddenValue;
            fVar10 = fVar9 - fVar10;
            fVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_e0,
                               (MethodInfo *)0x0);
            fVar7 = sinf(fVar10 * fVar6 * fVar7);
            fVar6 = sinf(fVar10 * fVar6 * fVar8);
            if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = (__this->fields).LIICCFBEOLC;
            if (__this_00 != (MNLIBPAOCLG_o *)0x0) {
              fVar8 = EOAOCPLIKOI_TypeInfo->static_fields->IBOAGHOHNIN;
              MNLIBPAOCLG__AJFICHLKOBO
                        (__this_00,(((fVar9 - fVar10) * fVar3 * fVar4 * fVar7) / fVar9) * fVar8,
                         (((fVar9 - fVar10) * fVar3 * fVar5 * fVar6) / fVar9) * fVar8,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

