// MGNPHCAAEIO$$NOIIBMIKOHL @ RVA 0x3401E70

void MGNPHCAAEIO__NOIIBMIKOHL(IGFGDDANEPE_o *IKKAMAMLIKA,bool HFJDDNBBENI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  MethodInfo *pMVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  HOOAAGABMBL_o *pHVar5;
  MGNPHCAAEIO_StaticFields *pMVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Il2CppObject *arg0;
  int32_t local_44;
  int32_t local_38;
  int32_t local_34;
  
  pMVar4 = (MethodInfo *)(ulong)HFJDDNBBENI;
  if ((DAT_04567ffc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_StackTraceUtility_TypeInfo);
    FUN_01bab630(&StringLiteral_2764);
    FUN_01bab630(&StringLiteral_11522);
    FUN_01bab630(&StringLiteral_9401);
    FUN_01bab630(&StringLiteral_15638);
    FUN_01bab630(&StringLiteral_14643);
    DAT_04567ffc = 1;
    pMVar4 = extraout_x1;
  }
  if (IKKAMAMLIKA == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pHVar5 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
  if (pHVar5 == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pSVar8 = (pHVar5->fields)._COIPKAKHDFP_k__BackingField;
  pSVar9 = (pHVar5->fields)._GMPAEDFIIHF_k__BackingField;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_00;
  }
  pSVar9 = MGNPHCAAEIO__OKOJOGAHMFP(pSVar9,pMVar4);
  bVar1 = System_String__op_Inequality(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pHVar5 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
  pMVar4 = extraout_x1_01;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_02;
  }
  bVar1 = MGNPHCAAEIO__GJFJEHANLBD(pHVar5,pMVar4);
  if (!bVar1) {
    return;
  }
  iVar2 = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
  if (iVar2 < 2) {
    return;
  }
  if (HFJDDNBBENI) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields;
    if (pMVar6->INAJMOOFPLG == false) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields;
      }
      if (pMVar6->KAFIAMOFNCM == false) {
        pSVar8 = (IKKAMAMLIKA->fields).NPFMOEOIEKM;
        local_44 = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
        puVar7 = &StringLiteral_9401;
        goto LAB_035020b0;
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = StringLiteral_15638;
    pSVar9 = (IKKAMAMLIKA->fields).NPFMOEOIEKM;
    puVar7 = &StringLiteral_11522;
    if (MGNPHCAAEIO_TypeInfo->static_fields->INAJMOOFPLG != false) {
      puVar7 = &StringLiteral_14643;
    }
    arg0 = (Il2CppObject *)*puVar7;
    local_34 = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar8 = System_String__Format(pSVar8,arg0,(Il2CppObject *)pSVar9,pIVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    pMVar4 = extraout_x1_03;
  }
  else {
    pSVar8 = (IKKAMAMLIKA->fields).NPFMOEOIEKM;
    local_38 = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
    puVar7 = &StringLiteral_2764;
LAB_035020b0:
    pSVar8 = System_String__Format
                       ((System_String_o *)*puVar7,(Il2CppObject *)pSVar8,pIVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    if ((UnityEngine_StackTraceUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = UnityEngine_StackTraceUtility__ExtractStackTrace((MethodInfo *)0x0);
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    pMVar4 = extraout_x1_04;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_05;
  }
  MGNPHCAAEIO__EBPPLEEDNPD(HFJDDNBBENI,pMVar4);
  return;
}

