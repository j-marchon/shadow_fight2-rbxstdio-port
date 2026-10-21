// DCEFHLHFCFL$$POBKBBAGBJE @ RVA 0x315CA30

void DCEFHLHFCFL__POBKBBAGBJE(DCEFHLHFCFL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Action_o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_01;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_02;
  OLKKAIFGGAK_o *__this_03;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar5;
  PBAKFOBIHEG_c *pPVar6;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar7;
  FCJBEKHDLAF_o *pFVar8;
  ulong uVar9;
  int32_t *piVar10;
  LPAPAMPGDFN_o *pLVar11;
  System_Collections_IEnumerator_o **ppSVar12;
  System_Collections_IEnumerator_o *pSVar13;
  
  if ((DAT_0456686f & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DCEFHLHFCFL_BBCAMJDDOII__);
    FUN_01bab630(&Method_DCEFHLHFCFL_POBKBBAGBJE__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456686f = 1;
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
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    pLVar11 = (pAVar5->fields).LMCDOMHENMC;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pLVar11 != (LPAPAMPGDFN_o *)0x0) {
      LPAPAMPGDFN__OJMMJBJOPKK(pLVar11,CJNHFNHJHPE,(MethodInfo *)0x0);
      ppSVar12 = &(__this->fields).AMFDKDCIJLE;
      if (*ppSVar12 != (System_Collections_IEnumerator_o *)0x0) {
        pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pPVar3 == (PBAKFOBIHEG_o *)0x0) goto LAB_0325cdd4;
        pPVar6 = pPVar3->klass;
        pSVar13 = *ppSVar12;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + (*piVar10 + 1);
              goto LAB_0325cbcc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_0325cbcc:
        (*pVVar4->methodPtr)(pPVar3,pSVar13,pVVar4->method);
        *ppSVar12 = (System_Collections_IEnumerator_o *)0x0;
        thunk_FUN_01c20e04(ppSVar12,0);
      }
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,true,(MethodInfo *)0x0);
        bVar2 = BOFEMGGNODC__EDMJCPEGFOC((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        if (bVar2) {
          if (DAT_04565c84 == '\0') {
            FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
            DAT_04565c84 = '\x01';
          }
          pNVar7 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->
                   CNMHHKAMGPI;
          if ((pNVar7 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
             (__this_01 = (pNVar7->fields)._Joystick,
             __this_01 == (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0)) goto LAB_0325cdd4;
          Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing(__this_01,false,(MethodInfo *)0x0);
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
          pFVar8 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
          if ((pFVar8 == (FCJBEKHDLAF_o *)0x0) ||
             (__this_02 = (pFVar8->fields).IILLHHPGGKA,
             __this_02 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_0325cdd4;
          __this_03 = (OLKKAIFGGAK_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,0,
                                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
          CJNHFNHJHPE_00 =
               (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_03 == (OLKKAIFGGAK_o *)0x0) goto LAB_0325cdd4;
          OLKKAIFGGAK__PLMIOLEFAEF(__this_03,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
           (pLVar11 = (pAVar5->fields).LMCDOMHENMC, pLVar11 != (LPAPAMPGDFN_o *)0x0)) {
          if ((pLVar11->fields).HBFBGGBPLOB != false) {
            return;
          }
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0325cdd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

