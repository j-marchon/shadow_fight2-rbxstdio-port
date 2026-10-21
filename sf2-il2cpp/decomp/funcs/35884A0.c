// Nekki.SF2.GUI.Map.MapScene$$GIENGNEGHPJ @ RVA 0x35884A0

void Nekki_SF2_GUI_Map_MapScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *pNVar5;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar6;
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *pNVar7;
  CHDGOFBHAFI_o *pCVar8;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar9;
  System_Action_o *pSVar10;
  NCNJEIBHGBH_o *pNVar11;
  System_Action_FKNCNNOOOIO__o *pSVar12;
  System_Action_Color__o *CJNHFNHJHPE;
  FKDLCJJOGIP_o *pFVar13;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar14;
  System_String_o *pSVar15;
  MethodInfo *pMVar16;
  System_Collections_IEnumerator_o *pSVar17;
  VirtualInvokeData *pVVar18;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *pMVar19;
  ACHLOMELAJE_o *pAVar20;
  PBAKFOBIHEG_c *pPVar21;
  ulong uVar22;
  int32_t *piVar23;
  Nekki_SF2_GUI_Map_MapButtonsPanel_o **ppNVar24;
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar25;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *exists;
  PKHMIGFEJCL_o *pPVar26;
  System_String_o **ppSVar27;
  
  if ((DAT_04568d14 & 1) == 0) {
    FUN_01bab630(&System_Action<Color>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_AIIOJJEPJMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_IIDMBPKLJME__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_MEDCMFMKLED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_NICMCKIBIAC__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<InfoBattle>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MapButtonsPanel>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RaidMapUIModule>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<StoryMapContainer>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_GIENGNEGHPJ__);
    FUN_01bab630(&StringLiteral_19657);
    DAT_04568d14 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<MapScene>_GIENGNEGHPJ__);
  if (MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG == false) {
    MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_19657,true,(MethodInfo *)0x0);
  }
  pNVar4 = (Nekki_SF2_GUI_RaidMapUIModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RaidMapUIModule>__);
  (__this->fields).FMIFNIIJJNK = pNVar4;
  thunk_FUN_01c20e04();
  pNVar5 = (Nekki_SF2_GUI_Map_StoryMapContainer_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<StoryMapContainer>__);
  ppNVar25 = &(__this->fields).DGPJKBMBBNN;
  *ppNVar25 = pNVar5;
  thunk_FUN_01c20e04(ppNVar25,pNVar5);
  pNVar6 = (Nekki_SF2_GUI_Map_InfoBattle_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<InfoBattle>__);
  (__this->fields).OCBDFDALFLL = pNVar6;
  thunk_FUN_01c20e04();
  pNVar7 = (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MapButtonsPanel>__);
  ppNVar24 = &(__this->fields).MGIJJGGPFJB;
  *ppNVar24 = pNVar7;
  thunk_FUN_01c20e04(ppNVar24,pNVar7);
  Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar8 == (CHDGOFBHAFI_o *)0x0) goto LAB_03688ca0;
  (__this->fields).KFKABLNIFDP = (pCVar8->fields).ANDOENDCBPM;
  Nekki_SF2_GUI_Map_MapScene__DPGDEMPNFLD(__this,method_01);
  Nekki_SF2_GUI_Map_MapScene__EMFECCBKKGD(__this,method_02);
  exists = (__this->fields).OPPIFBJOLBI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  pMVar19 = extraout_x1;
  if (bVar2) {
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar9,false,(MethodInfo *)0x0);
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__ShowUI(pNVar9,false,(MethodInfo *)0x0);
    pMVar19 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Map_MapScene__AFIFPAJFKAA(__this,pMVar19);
  Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM(__this,method_03);
  pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(pSVar10,(MethodInfo *)0x0);
  pNVar11 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar12 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar11 == (NCNJEIBHGBH_o *)0x0) goto LAB_03688ca0;
  NCNJEIBHGBH__GAOPCGKKBFH(pNVar11,pSVar12,(MethodInfo *)0x0);
  pNVar11 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar12 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar11 == (NCNJEIBHGBH_o *)0x0) goto LAB_03688ca0;
  NCNJEIBHGBH__GLDENAIADCG(pNVar11,pSVar12,(MethodInfo *)0x0);
  pNVar11 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar12 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar11 == (NCNJEIBHGBH_o *)0x0) goto LAB_03688ca0;
  NCNJEIBHGBH__OAOEHBBPHND(pNVar11,pSVar12,(MethodInfo *)0x0);
  pNVar5 = *ppNVar25;
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
  pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar20 == (ACHLOMELAJE_o *)0x0) || (pNVar5 == (Nekki_SF2_GUI_Map_StoryMapContainer_o *)0x0))
  goto LAB_03688ca0;
  (*(pNVar5->klass->vtable)._8_SetZonesBackgroundMask.methodPtr)
            ((pAVar20->fields).OAFCNHEOKBM.fields.r,(pAVar20->fields).OAFCNHEOKBM.fields.g,
             (pAVar20->fields).OAFCNHEOKBM.fields.b,(pAVar20->fields).OAFCNHEOKBM.fields.a,pNVar5,
             (pNVar5->klass->vtable)._8_SetZonesBackgroundMask.method);
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (__this->fields).OKNKKHGBECG = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  thunk_FUN_01c20e04(&(__this->fields).OKNKKHGBECG);
  pAVar20 = (__this->fields).OKNKKHGBECG;
  CJNHFNHJHPE = (System_Action_Color__o *)thunk_FUN_01bda818(System_Action<Color>_TypeInfo);
  System_Action<Color>___ctor();
  if (pAVar20 == (ACHLOMELAJE_o *)0x0) goto LAB_03688ca0;
  ACHLOMELAJE__APFNIJABLEJ(pAVar20,CJNHFNHJHPE,(MethodInfo *)0x0);
  pAVar20 = (__this->fields).OKNKKHGBECG;
  pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pAVar20 == (ACHLOMELAJE_o *)0x0) goto LAB_03688ca0;
  ACHLOMELAJE__CBBKFBLPJEI(pAVar20,pSVar10,(MethodInfo *)0x0);
  pFVar13 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pFVar13 == (FKDLCJJOGIP_o *)0x0) goto LAB_03688ca0;
  pMVar19 = (MethodInfo *)0x0;
  FKDLCJJOGIP__AJLLLOFFOHF(pFVar13,pSVar10,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_04);
  pNVar14 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar14 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03688ca0;
  pPVar26 = (pNVar14->fields).QuestParameters;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar8 == (CHDGOFBHAFI_o *)0x0) goto LAB_03688ca0;
  if ((pCVar8->fields).BLELLCNDBHN == false) {
LAB_03688af8:
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    (__this->fields).IAAABJBDEMK = 0;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__OpenRightNow(pNVar9,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP(__this,(__this->fields).JIPJNLEIIFC,pMVar19);
    pSVar15 = MMOGKBGEPGM__GKMAFGODLLG(0x10,(MethodInfo *)0x0);
    if (pPVar26 == (PKHMIGFEJCL_o *)0x0) goto LAB_03688ca0;
    ppSVar27 = &(pPVar26->fields).CHFDDNODLGP;
    *ppSVar27 = pSVar15;
    thunk_FUN_01c20e04(ppSVar27,pSVar15);
    Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ(__this,method_06);
    bVar2 = false;
  }
  else {
    pFVar13 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar13 == (FKDLCJJOGIP_o *)0x0) goto LAB_03688ca0;
    bVar2 = FKDLCJJOGIP__PMINMFLPJCB(pFVar13,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar8 == (CHDGOFBHAFI_o *)0x0) goto LAB_03688ca0;
      pMVar19 = (MethodInfo *)0x0;
      CHDGOFBHAFI__GJPOEDJOAAM(pCVar8,false,(MethodInfo *)0x0);
      goto LAB_03688af8;
    }
    (__this->fields).IAAABJBDEMK = 1;
    pFVar13 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar13 == (FKDLCJJOGIP_o *)0x0) goto LAB_03688ca0;
    FKDLCJJOGIP__LGBOGFICFPF(pFVar13,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar25 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)
    goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__CloseRightNow
              ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar25,(MethodInfo *)0x0);
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__OpenRightNow(pNVar9,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP(__this,(__this->fields).FLAMCGAKENN,pMVar19);
    pSVar15 = MMOGKBGEPGM__GKMAFGODLLG(0x11,(MethodInfo *)0x0);
    if (pPVar26 == (PKHMIGFEJCL_o *)0x0) goto LAB_03688ca0;
    ppSVar27 = &(pPVar26->fields).CHFDDNODLGP;
    *ppSVar27 = pSVar15;
    thunk_FUN_01c20e04(ppSVar27,pSVar15);
    Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC(__this,method_05);
    bVar2 = true;
  }
  pMVar16 = (MethodInfo *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pMVar19 = pMVar16;
  if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
    pMVar19 = (MethodInfo *)thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_TypeInfo);
  }
  pSVar17 = Nekki_SF2_GUI_Map_MapScene__CNPHOIBCCOD(pMVar19);
  if (pMVar16 != (MethodInfo *)0x0) {
    pPVar21 = (PBAKFOBIHEG_c *)pMVar16->methodPointer;
    uVar1._0_1_ = (pPVar21->_2).rank;
    uVar1._1_1_ = (pPVar21->_2).minimumAlignment;
    uVar22 = (ulong)uVar1;
    if (uVar22 != 0) {
      piVar23 = &((pPVar21->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar23 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar18 = pPVar21->vtable + *piVar23;
          goto LAB_03688bcc;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    pVVar18 = (VirtualInvokeData *)FUN_01b81914(pMVar16,PBAKFOBIHEG_TypeInfo,0);
LAB_03688bcc:
    pMVar19 = (MethodInfo *)0x1;
    pSVar17 = (System_Collections_IEnumerator_o *)
              (*pVVar18->methodPtr)(pMVar16,pSVar17,1,pVVar18->method);
    (__this->fields).JNMOCNBAIMC = pSVar17;
    thunk_FUN_01c20e04(&(__this->fields).JNMOCNBAIMC);
    Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,pMVar19);
    Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_07);
    Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_08);
    Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,method_09);
    if (!bVar2) {
      Nekki_SF2_GUI_Map_MapScene__COLOEPLHHMJ(__this,method_10);
    }
    if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN == -1) {
      if ((*ppNVar24 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppNVar24,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03688ca0;
      iVar3 = UnityEngine_Transform__GetSiblingIndex(__this_00,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_TypeInfo);
      }
      Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN = iVar3 + -1;
    }
    return;
  }
LAB_03688ca0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

