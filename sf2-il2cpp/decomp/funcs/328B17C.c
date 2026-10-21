// Nekki.SF2.GUI.Dialogs.LotteryDialog$$LMDGPINLALE @ RVA 0x328B17C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__LMDGPINLALE
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined6 uVar4;
  ACHLOMELAJE_o *pAVar5;
  int64_t iVar6;
  int64_t iVar7;
  ACHLOMELAJE_o *__this_00;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  long lVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_045672d9 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8697);
    DAT_045672d9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0338b470;
  iVar6 = ACHLOMELAJE__HEHFNBKGJLP(pAVar5,(MethodInfo *)0x0);
  pCVar1 = &(__this->fields).ENCFNGGMNAN;
  local_60.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
  local_60.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
  local_60.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
  local_60.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
  local_60.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
  local_60.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
  iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0);
  if (iVar6 < iVar7) {
    JJPNLEPEAFM__PCKFMMLICGD((MethodInfo *)0x0);
  }
  else {
    local_80.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
    local_80.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_80.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
    local_80.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
    local_80.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
    local_80.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_02;
    if (0 < iVar6) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
LAB_0338b470:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_a0.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
      local_a0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
      local_a0.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
      local_a0.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
      local_a0.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
      local_a0.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
      lVar8 = (pAVar5->fields).FBEBOPDOKFH;
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_a0,(MethodInfo *)0x0);
      ACHLOMELAJE__BMLCDKADBOC(pAVar5,iVar6 + lVar8,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
      }
      else {
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0338b470;
      iVar6 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
      local_c0.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
      local_c0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
      local_c0.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
      local_c0.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
      local_c0.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
      local_c0.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
      iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_c0,(MethodInfo *)0x0);
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0338b470;
      ACHLOMELAJE__OGPHHGFFKHD(pAVar5,iVar6 - iVar7,10,false,(MethodInfo *)0x0);
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (__this_01 == (DOPEEDABNEK_o *)0x0) goto LAB_0338b470;
      IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this_01,StringLiteral_8697,(MethodInfo *)0x0);
      iVar7 = (pCVar1->fields).currentCryptoKey;
      bVar2 = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
      bVar3 = (__this->fields).ENCFNGGMNAN.fields.inited;
      uVar4 = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
      iVar6 = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
      if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_0338b470;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue =
           (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey = iVar7;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive = bVar2;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited = bVar3;
      *(undefined6 *)&(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a = uVar4;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue = iVar6;
      NLPJLHOEAOE__FNLFJHFCGBJ(IKKAMAMLIKA,false,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__PNMMGOGAIEE(IKKAMAMLIKA,2,1,0,(MethodInfo *)0x0);
      method_00 = extraout_x1_03;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK(__this,method_00);
  }
  return;
}

