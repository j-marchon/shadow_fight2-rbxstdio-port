// JIALPJBDBEE$$MAHFCKJGBPP @ RVA 0x31B2758

void JIALPJBDBEE__MAHFCKJGBPP(JIALPJBDBEE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  OLKKAIFGGAK_o *__this_02;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar8;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar9;
  FCJBEKHDLAF_o *pFVar10;
  PBAKFOBIHEG_c *pPVar11;
  ACHLOMELAJE_o *pAVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_ProgressButton_o *pNVar15;
  LPAPAMPGDFN_o *__this_03;
  
  if ((DAT_04566b89 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_JIALPJBDBEE_BBCAMJDDOII__);
    FUN_01bab630(&Method_JIALPJBDBEE_POBKBBAGBJE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_6333);
    DAT_04566b89 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_032b2b7c;
  Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,false,(MethodInfo *)0x0);
  bVar2 = BOFEMGGNODC__EDMJCPEGFOC((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
        (pNVar9 = (pNVar8->fields)._ActionButtons,
        pNVar9 == (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) ||
       (pNVar15 = (pNVar9->fields)._btnPunch, pNVar15 == (Nekki_SF2_GUI_ProgressButton_o *)0x0))
    goto LAB_032b2b7c;
    SFButton__AddFlashImage((SFButton_o *)pNVar15,StringLiteral_6333,(MethodInfo *)0x0);
    pNVar3 = (pNVar15->fields).super.super.FlashingImage;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_032b2b7c;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)pUVar4,(UnityEngine_Vector3_o)ZEXT812(0x3faa3d713faa3d71),
               (MethodInfo *)0x0);
    SFButton__set_IsFlashing((SFButton_o *)pNVar15,true,(MethodInfo *)0x0);
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
        (pNVar9 = (pNVar8->fields)._ActionButtons,
        pNVar9 == (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) ||
       (pNVar15 = (pNVar9->fields)._btnKick, pNVar15 == (Nekki_SF2_GUI_ProgressButton_o *)0x0))
    goto LAB_032b2b7c;
    SFButton__AddFlashImage((SFButton_o *)pNVar15,StringLiteral_6333,(MethodInfo *)0x0);
    pNVar3 = (pNVar15->fields).super.super.FlashingImage;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_032b2b7c;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)pUVar4,(UnityEngine_Vector3_o)ZEXT812(0x3faa3d713faa3d71),
               (MethodInfo *)0x0);
    SFButton__set_IsFlashing((SFButton_o *)pNVar15,true,(MethodInfo *)0x0);
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
       (__this_01 = (pFVar10->fields).IILLHHPGGKA,
       __this_01 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_032b2b7c;
    __this_02 = (OLKKAIFGGAK_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,0,
                           Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_02 == (OLKKAIFGGAK_o *)0x0) goto LAB_032b2b7c;
    OLKKAIFGGAK__LONDOHOBJIK(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar6 = JIALPJBDBEE__GBCDHIOCFJJ(__this,method_00);
  if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
    pPVar11 = pPVar5->klass;
    uVar1._0_1_ = (pPVar11->_2).rank;
    uVar1._1_1_ = (pPVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pPVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar7 = pPVar11->vtable + *piVar14;
          goto LAB_032b2ab0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_032b2ab0:
    pSVar6 = (System_Collections_IEnumerator_o *)
             (*pVVar7->methodPtr)(pPVar5,pSVar6,1,pVVar7->method);
    (__this->fields).AMFDKDCIJLE = pSVar6;
    thunk_FUN_01c20e04();
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
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar12 != (ACHLOMELAJE_o *)0x0) {
      __this_03 = (pAVar12->fields).LMCDOMHENMC;
      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_03 != (LPAPAMPGDFN_o *)0x0) {
        LPAPAMPGDFN__OAFIHCDEOAD(__this_03,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_032b2b7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

