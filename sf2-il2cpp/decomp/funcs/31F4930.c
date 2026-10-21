// NLPJLHOEAOE$$NIEJJOHOGNB @ RVA 0x31F4930

void NLPJLHOEAOE__NIEJJOHOGNB(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  int64_t iVar1;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  int64_t iVar4;
  ACHLOMELAJE_o *pAVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_e0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  int64_t local_a0;
  int64_t iStack_98;
  int64_t iStack_90;
  bool_conflict bStack_88;
  bool_conflict bStack_87;
  undefined6 uStack_86;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_04566dc5 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dc5 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    iVar1 = HOOAAGABMBL__ICMFLAFFOFM(IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        local_60.fields.hiddenValue = (pAVar2->fields).GMGHJMNBDDJ.fields.hiddenValue;
        local_60.fields.currentCryptoKey = (pAVar2->fields).GMGHJMNBDDJ.fields.currentCryptoKey;
        local_60.fields.fakeValueActive = (pAVar2->fields).GMGHJMNBDDJ.fields.fakeValueActive;
        local_60.fields.inited = (pAVar2->fields).GMGHJMNBDDJ.fields.inited;
        local_60.fields._26_6_ = *(undefined6 *)&(pAVar2->fields).GMGHJMNBDDJ.fields.field_0x1a;
        local_60.fields.fakeValue = (pAVar2->fields).GMGHJMNBDDJ.fields.fakeValue;
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_60,(MethodInfo *)0x0);
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(System_Math_TypeInfo);
        }
        iVar1 = System_Math__Max(0,(iVar1 - iVar3) + iVar4,(MethodInfo *)0x0);
        (IKKAMAMLIKA->fields)._LDNHFNABLEK_k__BackingField = iVar1;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
        }
        else {
          pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
          local_80.fields.hiddenValue = (pAVar5->fields).GMGHJMNBDDJ.fields.hiddenValue;
          local_80.fields.currentCryptoKey = (pAVar5->fields).GMGHJMNBDDJ.fields.currentCryptoKey;
          local_80.fields.fakeValueActive = (pAVar5->fields).GMGHJMNBDDJ.fields.fakeValueActive;
          local_80.fields.inited = (pAVar5->fields).GMGHJMNBDDJ.fields.inited;
          local_80.fields._26_6_ = *(undefined6 *)&(pAVar5->fields).GMGHJMNBDDJ.fields.field_0x1a;
          local_80.fields.fakeValue = (pAVar5->fields).GMGHJMNBDDJ.fields.fakeValue;
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_80,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                    (&local_c0,iVar3 - iVar1,(MethodInfo *)0x0);
          iStack_98 = local_c0.fields.hiddenValue;
          local_a0 = local_c0.fields.currentCryptoKey;
          bStack_88 = local_c0.fields.fakeValueActive;
          bStack_87 = local_c0.fields.inited;
          uStack_86 = local_c0.fields._26_6_;
          iStack_90 = local_c0.fields.fakeValue;
          if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
            local_e0.fields.hiddenValue = local_c0.fields.hiddenValue;
            local_e0.fields.currentCryptoKey = local_c0.fields.currentCryptoKey;
            local_e0.fields.fakeValueActive = local_c0.fields.fakeValueActive;
            local_e0.fields.inited = local_c0.fields.inited;
            local_e0.fields._26_6_ = local_c0.fields._26_6_;
            local_e0.fields.fakeValue = local_c0.fields.fakeValue;
            ACHLOMELAJE__DLKOKAPHODP(pAVar2,&local_e0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

