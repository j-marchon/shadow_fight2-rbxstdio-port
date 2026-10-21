// MGNPHCAAEIO$$IAGKBFCKFKB @ RVA 0x340B168

bool MGNPHCAAEIO__IAGKBFCKFKB
               (HOOAAGABMBL_o *IKKAMAMLIKA,IGFGDDANEPE_o *ENHJPOHLMCL,int32_t ACCIHBHMFPN,
               int32_t DFIBGGDJPLM,System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,bool ADGOHBFJIKC,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  uint uVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar7;
  PKHMIGFEJCL_o *pPVar8;
  NLPJLHOEAOE_GDACPHIBKME_o *__this;
  NLPJLHOEAOE_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  MGNPHCAAEIO_c *pMVar9;
  FEPPOONJCGI_o *__this_02;
  MethodInfo *method_00;
  HEFOANCOHDC_o *pHVar10;
  GGHCLMEFIGO_o *__this_03;
  int64_t iVar11;
  DEKKGJNMFEB_o *__this_04;
  int32_t extraout_w1;
  int32_t extraout_w1_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar12;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar13;
  System_String_o *pSVar14;
  System_String_o *FPDIHDDPOKM;
  
  method_01 = (MethodInfo *)(ulong)(uint)DFIBGGDJPLM;
  pMVar12 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_0456804f & 1) == 0) {
    FUN_01bab630(&AMJMGFCCAKN_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_GDACPHIBKME_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18031);
    FUN_01bab630(&StringLiteral_19217);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456804f = 1;
  }
  pNVar7 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar7 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (pPVar8 = (pNVar7->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0)) goto LAB_0350b960;
  (pPVar8->fields).LPFMHPBACOJ = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this = (NLPJLHOEAOE_GDACPHIBKME_o *)thunk_FUN_01bda818(NLPJLHOEAOE_GDACPHIBKME_TypeInfo);
  NLPJLHOEAOE_GDACPHIBKME___ctor(__this,(MethodInfo *)0x0);
  if (((uint)ACCIHBHMFPN < 0x15) && ((1 << (ulong)(ACCIHBHMFPN & 0x1f) & 0x1d0b0eU) != 0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NLPJLHOEAOE__JCBIELDFDFN(IKKAMAMLIKA,ACCIHBHMFPN,DFIBGGDJPLM,(MethodInfo *)0x0);
    if (__this == (NLPJLHOEAOE_GDACPHIBKME_o *)0x0) goto LAB_0350b960;
    pMVar12 = method_01;
    if ((__this->fields).JAICMIMBIOA == -1) {
      if (ACCIHBHMFPN == 0x10) {
        iVar5 = extraout_w1;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          iVar5 = extraout_w1_00;
        }
        MGNPHCAAEIO__MCEHGCJIMGJ(IKKAMAMLIKA,iVar5,method_01);
      }
      else {
        iVar5 = (__this->fields).BGHFADDGPAD;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,iVar5,method_01);
      }
      return false;
    }
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_0350b960;
  if (((IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField == 0) &&
     ((ACCIHBHMFPN == 1 || (ACCIHBHMFPN == 8)))) {
LAB_0350b350:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE__DKAIOJJLNGL(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
      bVar2 = true;
      goto LAB_0350b3d0;
    }
LAB_0350b370:
    if ((ENHJPOHLMCL->fields).OFIKEBGDMBE == false) {
LAB_0350b3c4:
      bVar2 = false;
      goto LAB_0350b3d0;
    }
    if (ACCIHBHMFPN == 6) {
LAB_0350b39c:
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (NLPJLHOEAOE_o *)0x0) goto LAB_0350b960;
      pMVar12 = (MethodInfo *)0x0;
      NLPJLHOEAOE__KOODBJEMOCC(__this_00,IKKAMAMLIKA,(MethodInfo *)0x0);
      goto LAB_0350b3c4;
    }
    if (ACCIHBHMFPN != 7) goto LAB_0350b3c4;
    iVar5 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if (0 < iVar5) goto LAB_0350b39c;
    bVar2 = false;
switchD_0350b404_caseD_7:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar3 = NLPJLHOEAOE__MKBDFHFJIPN(IKKAMAMLIKA,1,(MethodInfo *)0x0);
    goto LAB_0350b44c;
  }
  if (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) {
    bVar2 = IGFGDDANEPE__NJEADKGGIJH(ENHJPOHLMCL,(MethodInfo *)0x0);
    if ((bVar2) || (((uint)ACCIHBHMFPN < 0xc && ((1 << (ulong)(ACCIHBHMFPN & 0x1f) & 0xa24U) != 0)))
       ) goto LAB_0350b350;
    goto LAB_0350b370;
  }
  bVar2 = true;
  if (((uint)ACCIHBHMFPN < 0xc) && ((1 << (ulong)(ACCIHBHMFPN & 0x1f) & 0xa24U) != 0))
  goto LAB_0350b350;
LAB_0350b3d0:
  uVar6 = 0;
  FPDIHDDPOKM = (System_String_o *)0x0;
  bVar4 = false;
  bVar3 = true;
  switch(ACCIHBHMFPN) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 0xb:
  case 0xe:
  case 0x13:
  case 0x14:
    if (__this == (NLPJLHOEAOE_GDACPHIBKME_o *)0x0) goto LAB_0350b960;
    pMVar12 = (MethodInfo *)(__this->fields).JAICMIMBIOA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = NLPJLHOEAOE__KMJPPCLIEDG
                      (IKKAMAMLIKA,ACCIHBHMFPN,(int64_t)pMVar12,DFIBGGDJPLM,BLMFLPJJMPF,ADGOHBFJIKC,
                       (MethodInfo *)0x0);
    break;
  default:
    bVar3 = false;
    break;
  case 5:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = true;
    goto LAB_0350b770;
  case 6:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = false;
LAB_0350b770:
    pMVar12 = (MethodInfo *)0x1;
    bVar3 = NLPJLHOEAOE__CCPLLOAKNIL(ENHJPOHLMCL,bVar4,true,(MethodInfo *)0x0);
    break;
  case 7:
    goto switchD_0350b404_caseD_7;
  case 0xd:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar3 = NLPJLHOEAOE__JMHCGBFHHBB(IKKAMAMLIKA,1,(MethodInfo *)0x0);
    break;
  case 0xf:
    goto switchD_0350b404_caseD_f;
  case 0x10:
    bVar1 = (AMJMGFCCAKN_TypeInfo->_2).naturalAligment;
    if (((IKKAMAMLIKA->klass->_2).naturalAligment < bVar1) ||
       ((IKKAMAMLIKA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)AMJMGFCCAKN_TypeInfo)) {
LAB_0350b964:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IKKAMAMLIKA);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = NLPJLHOEAOE__PNFNAGCGFHO((AMJMGFCCAKN_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    MGNPHCAAEIO__NFHIFPECBOI(StringLiteral_18031,(AMJMGFCCAKN_o *)IKKAMAMLIKA,pMVar12);
    break;
  case 0x11:
    if ((bVar2) ||
       (pHVar10 = IGFGDDANEPE__MNKGCEAHBBI(ENHJPOHLMCL,(MethodInfo *)0x0),
       pHVar10 == (HEFOANCOHDC_o *)0x0)) {
      uVar6 = 0;
      FPDIHDDPOKM = (System_String_o *)0x0;
    }
    else {
      FPDIHDDPOKM = (pHVar10->fields).JIJLBFGKNJK;
      pMVar12 = extraout_x1_01;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar12 = extraout_x1_02;
      }
      bVar4 = MGNPHCAAEIO__DODJBGHCIHD(pHVar10,pMVar12);
      uVar6 = (uint)bVar4;
    }
    bVar1 = (AMJMGFCCAKN_TypeInfo->_2).naturalAligment;
    if (((IKKAMAMLIKA->klass->_2).naturalAligment < bVar1) ||
       ((IKKAMAMLIKA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)AMJMGFCCAKN_TypeInfo)) goto LAB_0350b964;
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_04 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_04 == (DEKKGJNMFEB_o *)0x0) goto LAB_0350b960;
    pMVar12 = (MethodInfo *)0x0;
    bVar3 = DEKKGJNMFEB__IKBILKIMBCB(__this_04,(AMJMGFCCAKN_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
    pSVar14 = (System_String_o *)(ulong)bVar3;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      pSVar14 = (System_String_o *)thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    MGNPHCAAEIO__KKJLFPHPGKP(pSVar14,(AMJMGFCCAKN_o *)IKKAMAMLIKA,pMVar12);
    goto LAB_0350b958;
  case 0x12:
    if ((bVar2) ||
       (pHVar10 = IGFGDDANEPE__MNKGCEAHBBI(ENHJPOHLMCL,(MethodInfo *)0x0),
       pHVar10 == (HEFOANCOHDC_o *)0x0)) {
      uVar6 = 0;
      FPDIHDDPOKM = (System_String_o *)0x0;
    }
    else {
      FPDIHDDPOKM = (pHVar10->fields).JIJLBFGKNJK;
      pMVar12 = extraout_x1_03;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar12 = extraout_x1_04;
      }
      bVar4 = MGNPHCAAEIO__DODJBGHCIHD(pHVar10,pMVar12);
      uVar6 = (uint)bVar4;
    }
    if (__this == (NLPJLHOEAOE_GDACPHIBKME_o *)0x0) goto LAB_0350b960;
    pMVar12 = (MethodInfo *)(__this->fields).JAICMIMBIOA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = NLPJLHOEAOE__KMJPPCLIEDG
                      (IKKAMAMLIKA,0x12,(int64_t)pMVar12,DFIBGGDJPLM,BLMFLPJJMPF,ADGOHBFJIKC,
                       (MethodInfo *)0x0);
LAB_0350b958:
    bVar4 = true;
    goto switchD_0350b404_caseD_f;
  }
LAB_0350b44c:
  uVar6 = 0;
  FPDIHDDPOKM = (System_String_o *)0x0;
  bVar4 = false;
switchD_0350b404_caseD_f:
  pSVar14 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar14,(MethodInfo *)0x0);
  if (!bVar4) {
LAB_0350b5f0:
    if (__this_01 != (IGFGDDANEPE_o *)0x0) {
      iVar11 = IGFGDDANEPE__OMMIKNKEKJN(__this_01,(MethodInfo *)0x0);
      if (iVar11 < 1) {
        iVar11 = IGFGDDANEPE__OMMIKNKEKJN(__this_01,(MethodInfo *)0x0);
        if (iVar11 == 0) {
          pMVar9 = MGNPHCAAEIO_TypeInfo;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            pMVar9 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
          }
          MGNPHCAAEIO__BJMIFDKPEGD((System_String_o *)pMVar9,__this_01,pMVar12);
        }
      }
      else {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__IMMLLGHIPLE(StringLiteral_19217,__this_01,pMVar12);
      }
    }
    return bVar3;
  }
  pMVar9 = MGNPHCAAEIO_TypeInfo;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    pMVar9 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__BDJKCCDICGK((MethodInfo *)pMVar9);
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
  pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar13 != (ACHLOMELAJE_o *)0x0) &&
     (__this_02 = (pAVar13->fields).IMJJJJJMMHL, __this_02 != (FEPPOONJCGI_o *)0x0)) {
    FEPPOONJCGI__DOCPOJKODOE(__this_02,(MethodInfo *)0x0);
    MGNPHCAAEIO__HIJHHALPBNK(method_00);
    if ((bVar2) ||
       (pHVar10 = IGFGDDANEPE__MNKGCEAHBBI(ENHJPOHLMCL,(MethodInfo *)0x0),
       pHVar10 == (HEFOANCOHDC_o *)0x0)) {
      bVar2 = false;
      pSVar14 = (System_String_o *)0x0;
    }
    else {
      pSVar14 = (pHVar10->fields).JIJLBFGKNJK;
      pMVar12 = extraout_x1;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar12 = extraout_x1_00;
      }
      bVar2 = MGNPHCAAEIO__DODJBGHCIHD(pHVar10,pMVar12);
    }
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
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar13 != (ACHLOMELAJE_o *)0x0) &&
       (__this_03 = (pAVar13->fields).OIDPLCLELEN, __this_03 != (GGHCLMEFIGO_o *)0x0)) {
      pMVar12 = (MethodInfo *)(ulong)uVar6;
      GGHCLMEFIGO__HCGGFBAOINE(__this_03,FPDIHDDPOKM,SUB41(uVar6,0),pSVar14,bVar2,(MethodInfo *)0x0)
      ;
      goto LAB_0350b5f0;
    }
  }
LAB_0350b960:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

