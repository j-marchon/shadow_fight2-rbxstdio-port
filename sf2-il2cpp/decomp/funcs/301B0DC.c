// JHJLHLANACF$$POBKBBAGBJE @ RVA 0x301B0DC

void JHJLHLANACF__POBKBBAGBJE(JHJLHLANACF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  System_Action_o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_01;
  Nekki_SF2_GUI_ProgressButton_o *__this_02;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_03;
  OLKKAIFGGAK_o *__this_04;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar6;
  PBAKFOBIHEG_c *pPVar7;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar8;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar9;
  FCJBEKHDLAF_o *pFVar10;
  ulong uVar11;
  int32_t *piVar12;
  LPAPAMPGDFN_o *pLVar13;
  System_Collections_IEnumerator_o **ppSVar14;
  System_Collections_IEnumerator_o *pSVar15;
  
  if ((DAT_04565c10 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_JHJLHLANACF_BBCAMJDDOII__);
    FUN_01bab630(&Method_JHJLHLANACF_POBKBBAGBJE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565c10 = 1;
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
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar6 == (ACHLOMELAJE_o *)0x0) goto LAB_0311b5e8;
    pLVar13 = (pAVar6->fields).LMCDOMHENMC;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pLVar13 == (LPAPAMPGDFN_o *)0x0) goto LAB_0311b5e8;
    LPAPAMPGDFN__OJMMJBJOPKK(pLVar13,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  ppSVar14 = &(__this->fields).AMFDKDCIJLE;
  if (*ppSVar14 != (System_Collections_IEnumerator_o *)0x0) {
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if (pPVar4 == (PBAKFOBIHEG_o *)0x0) goto LAB_0311b5e8;
    pPVar7 = pPVar4->klass;
    pSVar15 = *ppSVar14;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar7->vtable + (*piVar12 + 1);
          goto LAB_0311b2c0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_0311b2c0:
    (*pVVar5->methodPtr)(pPVar4,pSVar15,pVVar5->method);
    *ppSVar14 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar14,0);
  }
  ppSVar14 = &(__this->fields).HAIEFHDCIJI;
  if (*ppSVar14 != (System_Collections_IEnumerator_o *)0x0) {
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if (pPVar4 == (PBAKFOBIHEG_o *)0x0) goto LAB_0311b5e8;
    pPVar7 = pPVar4->klass;
    pSVar15 = *ppSVar14;
    uVar2._0_1_ = (pPVar7->_2).rank;
    uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar7->vtable + (*piVar12 + 1);
          goto LAB_0311b350;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_0311b350:
    (*pVVar5->methodPtr)(pPVar4,pSVar15,pVVar5->method);
    *ppSVar14 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar14,0);
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_0311b5e8;
  Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,true,(MethodInfo *)0x0);
  bVar3 = BOFEMGGNODC__EDMJCPEGFOC((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  if (bVar3) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
       (__this_01 = (pNVar8->fields)._Joystick,
       __this_01 == (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0)) goto LAB_0311b5e8;
    Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing(__this_01,false,(MethodInfo *)0x0);
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
        (pNVar9 = (pNVar8->fields)._ActionButtons,
        pNVar9 == (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) ||
       (__this_02 = (pNVar9->fields)._btnKick, __this_02 == (Nekki_SF2_GUI_ProgressButton_o *)0x0))
    goto LAB_0311b5e8;
    SFButton__set_IsFlashing((SFButton_o *)__this_02,false,(MethodInfo *)0x0);
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar10 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar10 == (FCJBEKHDLAF_o *)0x0) ||
       (__this_03 = (pFVar10->fields).IILLHHPGGKA,
       __this_03 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_0311b5e8;
    __this_04 = (OLKKAIFGGAK_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_03,0,
                           Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    CJNHFNHJHPE_00 =
         (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
         thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_04 == (OLKKAIFGGAK_o *)0x0) goto LAB_0311b5e8;
    OLKKAIFGGAK__PLMIOLEFAEF(__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar6 == (ACHLOMELAJE_o *)0x0) ||
       (pLVar13 = (pAVar6->fields).LMCDOMHENMC, pLVar13 == (LPAPAMPGDFN_o *)0x0)) {
LAB_0311b5e8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar13->fields).HBFBGGBPLOB == false) {
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

