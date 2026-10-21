// OPNFCOGALLI$$PPPACEMNFGM @ RVA 0x3108C78

/* WARNING: Type propagation algorithm not settling */

void OPNFCOGALLI__PPPACEMNFGM(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int32_t iVar6;
  ECENNHNBAME_o *pEVar7;
  UnityEngine_Vector3_array *pUVar8;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar9;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar10;
  int32_t *piVar11;
  UnityEngine_Vector3_array_array *pUVar12;
  UnityEngine_Vector3_array *pUVar13;
  IEFEBEDLHNN_o *pIVar14;
  float fVar15;
  float fVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((__this->fields).AANDHIFMLHC == false) {
    pIVar14 = (IEFEBEDLHNN_o *)0x0;
  }
  else {
    pIVar14 = (__this->fields).BAAPAKJGOMG;
  }
  pEVar7 = (__this->fields).NDBPNFLAKDL;
  if (pEVar7 == (ECENNHNBAME_o *)0x0) goto LAB_03208e58;
  fVar16 = (__this->fields).BDLMOBMPOHM;
  uVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (pEVar7->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  uVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
  pEVar7 = (__this->fields).NDBPNFLAKDL;
  if (pEVar7 == (ECENNHNBAME_o *)0x0) goto LAB_03208e58;
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (pEVar7->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
  iVar3 = (iVar6 + 1) * (uVar5 - uVar4);
  fVar15 = 0.0;
  (__this->fields).OJEODKKHEPE = iVar3;
  if (iVar3 < 1) goto LAB_03208db8;
  pEVar7 = (__this->fields).NDBPNFLAKDL;
  if (((pEVar7 == (ECENNHNBAME_o *)0x0) ||
      (pEVar9 = (pEVar7->fields).DMGLMCBIAGL, pEVar9 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) ||
     (pEVar10 = (pEVar9->fields).EJNDOMGCGFL, pEVar10 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0))
  goto LAB_03208e58;
  if ((pEVar10->fields).LBDADFDEMPE != 1) goto LAB_03208db8;
  if ((__this->fields).IOGCGDKKILK == false) {
LAB_03208d48:
    piVar11 = &(__this->fields).NOEPMCHIBOL;
  }
  else {
    if (pIVar14 == (IEFEBEDLHNN_o *)0x0) goto LAB_03208e58;
    pIVar14 = (pIVar14->fields).GAFCPEOANDD;
    if (pIVar14 == (IEFEBEDLHNN_o *)0x0) goto LAB_03208d48;
    piVar11 = &(pIVar14->fields).FLDBGCIKMKA;
  }
  pUVar12 = (pEVar7->fields).MMENPDNBNHN;
  if (pUVar12 != (UnityEngine_Vector3_array_array *)0x0) {
    uVar1 = (uint)pUVar12->max_length;
    if (uVar5 < uVar1) {
      pUVar8 = pUVar12->m_Items[(int)uVar5];
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto LAB_03208e58;
      uVar5 = *piVar11;
      if ((uVar5 < (uint)pUVar8->max_length) && (uVar4 < uVar1)) {
        pUVar13 = pUVar12->m_Items[(int)uVar4];
        if (pUVar13 == (UnityEngine_Vector3_array *)0x0) goto LAB_03208e58;
        if (uVar5 < (uint)pUVar13->max_length) {
          fVar15 = pUVar8->m_Items[(int)uVar5].fields.x - pUVar13->m_Items[(int)uVar5].fields.x;
LAB_03208db8:
          fVar16 = fVar16 + fVar15 * (float)(__this->fields).DMJAJGGGHPF;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,fVar16,
                     (MethodInfo *)0x0);
          local_50.fakeValueActive = local_68.fakeValueActive;
          local_50.inited = local_68.inited;
          local_50._18_2_ = local_68._18_2_;
          local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
          local_50.fakeValue = local_68.fakeValue;
          local_50.currentCryptoKey = local_68.currentCryptoKey;
          local_50.hiddenValue = local_68.hiddenValue;
          bVar2 = (__this->fields).NGDBKCCKCKI;
          (__this->fields).DLGPCFMIHCC.fields.fakeValueActive = local_68.fakeValueActive;
          (__this->fields).DLGPCFMIHCC.fields.inited = local_68.inited;
          *(undefined2 *)&(__this->fields).DLGPCFMIHCC.fields.field_0x12 = local_68._18_2_;
          (__this->fields).DLGPCFMIHCC.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
          (__this->fields).DLGPCFMIHCC.fields.fakeValue = local_68.fakeValue;
          (__this->fields).DLGPCFMIHCC.fields.currentCryptoKey = local_68.currentCryptoKey;
          (__this->fields).DLGPCFMIHCC.fields.hiddenValue = local_68.hiddenValue;
          if (bVar2 == false) {
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,fVar16,
                       (MethodInfo *)0x0);
            local_50.fakeValueActive = local_68.fakeValueActive;
            local_50.inited = local_68.inited;
            local_50._18_2_ = local_68._18_2_;
            local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
            local_50.fakeValue = local_68.fakeValue;
            local_50.currentCryptoKey = local_68.currentCryptoKey;
            local_50.hiddenValue = local_68.hiddenValue;
            pEVar7 = (__this->fields).NDBPNFLAKDL;
            (__this->fields).DELOAPHGBBC.fields.fakeValueActive = local_68.fakeValueActive;
            (__this->fields).DELOAPHGBBC.fields.inited = local_68.inited;
            *(undefined2 *)&(__this->fields).DELOAPHGBBC.fields.field_0x12 = local_68._18_2_;
            (__this->fields).DELOAPHGBBC.fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
            (__this->fields).DELOAPHGBBC.fields.fakeValue = local_68.fakeValue;
            (__this->fields).DELOAPHGBBC.fields.currentCryptoKey = local_68.currentCryptoKey;
            (__this->fields).DELOAPHGBBC.fields.hiddenValue = local_68.hiddenValue;
            (__this->fields).NOAFGDFHHMN = pEVar7;
            thunk_FUN_01c20e04(&(__this->fields).NOAFGDFHHMN);
            (__this->fields).FBGLMJNEPOF = -4;
            (__this->fields).NGDBKCCKCKI = true;
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03208e58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

