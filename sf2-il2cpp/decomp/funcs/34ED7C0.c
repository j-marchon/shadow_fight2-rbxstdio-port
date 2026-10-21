// OLKKAIFGGAK$$LMGIFKHIHJD @ RVA 0x34ED7C0

bool OLKKAIFGGAK__LMGIFKHIHJD
               (OLKKAIFGGAK_o *__this,OLKKAIFGGAK_OGCKCABMHLC_o *OADIPDDBIDH,
               OLKKAIFGGAK_o *JALKELIHLPC,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  FPLCEOJCPOD_o *pFVar7;
  MethodInfo *method_00;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar8;
  PFOFJCIOLOG_o *pPVar9;
  PJKHAJKEHEL_o *pPVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  undefined8 local_78;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  
  if ((DAT_045687aa & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OLKKAIFGGAK_TypeInfo);
    DAT_045687aa = 1;
  }
  local_78 = 0;
  if (OLKKAIFGGAK_TypeInfo->static_fields->PCECHCGMNBH == false) {
    bVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).FJHAMMNKBPN.fields,(MethodInfo *)0x0);
    if (!bVar6) {
      pOVar8 = (__this->fields).MMIDFMEOACB;
      if ((pOVar8 != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) && (JALKELIHLPC != (OLKKAIFGGAK_o *)0x0)) {
        local_70.fakeValueActive = (JALKELIHLPC->fields).DMMGOFAPLNK.fields.fakeValueActive;
        local_70.inited = (JALKELIHLPC->fields).DMMGOFAPLNK.fields.inited;
        local_70._18_2_ = *(undefined2 *)&(JALKELIHLPC->fields).DMMGOFAPLNK.fields.field_0x12;
        local_70.hiddenValueOldByte4.fields =
             (JALKELIHLPC->fields).DMMGOFAPLNK.fields.hiddenValueOldByte4.fields;
        local_70.fakeValue = (JALKELIHLPC->fields).DMMGOFAPLNK.fields.fakeValue;
        local_70.currentCryptoKey = (JALKELIHLPC->fields).DMMGOFAPLNK.fields.currentCryptoKey;
        local_70.hiddenValue = (JALKELIHLPC->fields).DMMGOFAPLNK.fields.hiddenValue;
        fVar14 = (pOVar8->fields).CEMEJDHDPLL;
        fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                            (MethodInfo *)0x0);
        fVar14 = fVar14 / fVar11;
        bVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (__this->fields).LDJLHMHDJLC.fields,(MethodInfo *)0x0);
        fVar11 = 0.0;
        if (!bVar6) {
          fVar11 = fVar14;
        }
        bVar6 = OLKKAIFGGAK__HCOPGAIEFDB(__this,fVar11,method_00);
        pPVar10 = (JALKELIHLPC->fields).FAPMJJBOFEF;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        }
        pPVar9 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
        if (pPVar9 != (PFOFJCIOLOG_o *)0x0) {
          local_90.fakeValueActive = (pPVar9->fields).OLKKIOMIEOF.fields.fakeValueActive;
          local_90.inited = (pPVar9->fields).OLKKIOMIEOF.fields.inited;
          local_90._18_2_ = *(undefined2 *)&(pPVar9->fields).OLKKIOMIEOF.fields.field_0x12;
          local_90.hiddenValueOldByte4.fields =
               (pPVar9->fields).OLKKIOMIEOF.fields.hiddenValueOldByte4.fields;
          local_90.fakeValue = (pPVar9->fields).OLKKIOMIEOF.fields.fakeValue;
          local_90.currentCryptoKey = (pPVar9->fields).OLKKIOMIEOF.fields.currentCryptoKey;
          local_90.hiddenValue = (pPVar9->fields).OLKKIOMIEOF.fields.hiddenValue;
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                              (MethodInfo *)0x0);
          pPVar9 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
          if (pPVar9 != (PFOFJCIOLOG_o *)0x0) {
            local_78 = local_78 & 0xffffffff;
            if ((pPVar10 != (PJKHAJKEHEL_o *)0x0) &&
               (pFVar7 = (pPVar10->fields).ACHJNNOKEDK, pFVar7 != (FPLCEOJCPOD_o *)0x0)) {
              FPLCEOJCPOD__KNMENIBLFGF
                        (pFVar7,(pPVar9->fields).KKMLMEOCFFP,(int32_t *)((long)&local_78 + 4),true,
                         false,(MethodInfo *)0x0);
              pPVar9 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
              if (pPVar9 != (PFOFJCIOLOG_o *)0x0) {
                local_b0.fakeValueActive = (pPVar9->fields).ILJNIDDODBI.fields.fakeValueActive;
                local_b0.inited = (pPVar9->fields).ILJNIDDODBI.fields.inited;
                local_b0._18_2_ = *(undefined2 *)&(pPVar9->fields).ILJNIDDODBI.fields.field_0x12;
                local_b0.hiddenValueOldByte4.fields =
                     (pPVar9->fields).ILJNIDDODBI.fields.hiddenValueOldByte4.fields;
                local_b0.fakeValue = (pPVar9->fields).ILJNIDDODBI.fields.fakeValue;
                local_b0.currentCryptoKey = (pPVar9->fields).ILJNIDDODBI.fields.currentCryptoKey;
                local_b0.hiddenValue = (pPVar9->fields).ILJNIDDODBI.fields.hiddenValue;
                iVar5 = local_78._4_4_;
                fVar12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                   ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,
                                    (MethodInfo *)0x0);
                pPVar9 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
                if (pPVar9 != (PFOFJCIOLOG_o *)0x0) {
                  local_78 = local_78 & 0xffffffff00000000;
                  pFVar7 = (pPVar10->fields).ACHJNNOKEDK;
                  if (pFVar7 != (FPLCEOJCPOD_o *)0x0) {
                    FPLCEOJCPOD__KNMENIBLFGF
                              (pFVar7,(pPVar9->fields).OEIPHLBBKIK,(int32_t *)&local_78,true,false,
                               (MethodInfo *)0x0);
                    pOVar8 = (__this->fields).MMIDFMEOACB;
                    if (pOVar8 != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) {
                      iVar4 = (int)local_78;
                      if ((pOVar8->fields).EPPIJIGMFFJ == false) {
                        bVar1 = false;
                      }
                      else {
                        fVar13 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
                        pOVar8 = (__this->fields).MMIDFMEOACB;
                        bVar1 = fVar13 < fVar14 * fVar11 * (float)iVar5;
                        if (pOVar8 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_035ed9dc;
                      }
                      bVar3 = (pOVar8->fields).FPKMILDKMHH;
                      if ((bVar3 == false) ||
                         (bVar6 = bVar6 && bVar3 != false, (pOVar8->fields).BBFPCBEFOLN != false)) {
                        bVar2 = false;
                      }
                      else {
                        fVar11 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
                        bVar2 = fVar11 < fVar14 * fVar12 * (float)iVar4;
                      }
                      return (bVar1 || bVar6 != false) || bVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_035ed9dc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}

