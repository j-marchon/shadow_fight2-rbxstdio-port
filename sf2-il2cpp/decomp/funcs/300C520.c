// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowConsumableButton @ RVA 0x300C520

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowConsumableButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  HOOAAGABMBL_o *pHVar4;
  BHEDGAKGKPO_StaticFields *pBVar5;
  IconLabelButton_o *BECCOGAMKJL;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o EFJKPCADGJH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_04565b7c & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10828);
    DAT_04565b7c = 1;
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
      local_60.fields.hiddenValue = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue
      ;
      local_60.fields.currentCryptoKey =
           (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey;
      local_60.fields.fakeValueActive =
           (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
      local_60.fields.inited = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
      local_60.fields._26_6_ =
           *(undefined6 *)&(pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
      local_60.fields.fakeValue = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_60,(MethodInfo *)0x0);
      if (iVar2 < iVar3) {
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pBVar5 = BHEDGAKGKPO_TypeInfo->static_fields;
        fVar9 = (pBVar5->GNNEMOOOOCI).fields.r;
        fVar8 = (pBVar5->GNNEMOOOOCI).fields.g;
        fVar6 = (pBVar5->GNNEMOOOOCI).fields.b;
        fVar7 = (pBVar5->GNNEMOOOOCI).fields.a;
      }
      else {
        fVar6 = 0.0;
        fVar7 = 1.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
      }
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        bVar1 = System_String__op_Inequality
                          ((pHVar4->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_10828,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pHVar4 = (__this->fields).BBODGCMLKFP;
          if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_0310c6b8;
          local_80.fields.hiddenValue =
               (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
          local_80.fields.currentCryptoKey =
               (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey;
          local_80.fields.fakeValueActive =
               (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
          local_80.fields.inited = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
          local_80.fields._26_6_ =
               *(undefined6 *)&(pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
          local_80.fields.fakeValue = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue
          ;
          BECCOGAMKJL = (__this->fields).HMANCFHBJIN;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_80,(MethodInfo *)0x0);
          EFJKPCADGJH.fields.g = fVar8;
          EFJKPCADGJH.fields.r = fVar9;
          EFJKPCADGJH.fields.a = fVar7;
          EFJKPCADGJH.fields.b = fVar6;
          Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                    (__this,BECCOGAMKJL,iVar2,EFJKPCADGJH,in_x3);
        }
        return;
      }
    }
  }
LAB_0310c6b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

