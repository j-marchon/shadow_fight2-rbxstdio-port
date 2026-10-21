// JHJLHLANACF$$MAHFCKJGBPP @ RVA 0x301B700

void JHJLHLANACF__MAHFCKJGBPP(JHJLHLANACF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  JHJLHLANACF_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_04;
  OLKKAIFGGAK_o *__this_05;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  JHJLHLANACF_c *pJVar7;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar8;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar9;
  FCJBEKHDLAF_o *pFVar10;
  PBAKFOBIHEG_c *pPVar11;
  ACHLOMELAJE_o *pAVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar15;
  Nekki_SF2_GUI_ProgressButton_o *__this_06;
  LPAPAMPGDFN_o *__this_07;
  
  if ((DAT_04565c11 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_JHJLHLANACF_BBCAMJDDOII__);
    FUN_01bab630(&Method_JHJLHLANACF_POBKBBAGBJE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_6333);
    DAT_04565c11 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar15 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar15 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar15 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_0311bbb8;
    Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(pNVar15,false,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (JHJLHLANACF_o *)CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar5 = JHJLHLANACF__BPAFCAEDKCK(__this_00,method_00);
    if (__this_00 == (JHJLHLANACF_o *)0x0) goto LAB_0311bbb8;
    pJVar7 = __this_00->klass;
    uVar1._0_1_ = (pJVar7->_2).rank;
    uVar1._1_1_ = (pJVar7->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pJVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar6 = &(pJVar7->vtable)._0_Equals + *piVar14;
          goto LAB_0311b8b8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(__this_00,PBAKFOBIHEG_TypeInfo,0);
LAB_0311b8b8:
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*pVVar6->methodPtr)(__this_00,pSVar5,1,pVVar6->method);
    (__this->fields).HAIEFHDCIJI = pSVar5;
    thunk_FUN_01c20e04();
  }
  bVar3 = BOFEMGGNODC__EDMJCPEGFOC((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  if (bVar3) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
       (__this_01 = (pNVar8->fields)._Joystick,
       __this_01 == (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0)) goto LAB_0311bbb8;
    Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing(__this_01,true,(MethodInfo *)0x0);
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
        (pNVar9 = (pNVar8->fields)._ActionButtons,
        pNVar9 == (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) ||
       (__this_06 = (pNVar9->fields)._btnKick, __this_06 == (Nekki_SF2_GUI_ProgressButton_o *)0x0))
    goto LAB_0311bbb8;
    SFButton__AddFlashImage((SFButton_o *)__this_06,StringLiteral_6333,(MethodInfo *)0x0);
    __this_02 = (__this_06->fields).super.super.FlashingImage;
    if ((__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (__this_03 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this_02,(MethodInfo *)0x0),
       __this_03 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0311bbb8;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)__this_03,
               (UnityEngine_Vector3_o)ZEXT812(0x3faa3d713faa3d71),(MethodInfo *)0x0);
    SFButton__set_IsFlashing((SFButton_o *)__this_06,true,(MethodInfo *)0x0);
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
       (__this_04 = (pFVar10->fields).IILLHHPGGKA,
       __this_04 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_0311bbb8;
    __this_05 = (OLKKAIFGGAK_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_04,0,
                           Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_05 == (OLKKAIFGGAK_o *)0x0) goto LAB_0311bbb8;
    OLKKAIFGGAK__LONDOHOBJIK(__this_05,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar5 = JHJLHLANACF__GBCDHIOCFJJ(__this,method_01);
  if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
    pPVar11 = pPVar4->klass;
    uVar2._0_1_ = (pPVar11->_2).rank;
    uVar2._1_1_ = (pPVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar2;
    if (uVar13 != 0) {
      piVar14 = &((pPVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0311baf0 to 0321bfcf has its CatchHandler @ 0311baf0
                       catch() { ... } // from try @ 0311baf0 with catch @ 0311baf0
                       catch() { ... } // from try @ 0311c1ec with catch @ 0311baf0
                       catch() { ... } // from try @ 0311c34c with catch @ 0311baf0
                       catch() { ... } // from try @ 0311c3ac with catch @ 0311baf0
                       catch() { ... } // from try @ 0311c6bc with catch @ 0311baf0
                       catch() { ... } // from try @ 0311c890 with catch @ 0311baf0
                       catch() { ... } // from try @ 0311cbf8 with catch @ 0311baf0
                       catch() { ... } // from try @ 0311cc9c with catch @ 0311baf0
                       catch() { ... } // from try @ 0311cd30 with catch @ 0311baf0
                       catch() { ... } // from try @ 0311cd44 with catch @ 0311baf0
                       catch() { ... } // from try @ 0311ce0c with catch @ 0311baf0 */
          pVVar6 = pPVar11->vtable + *piVar14;
          goto LAB_0311baf4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_0311baf4:
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
    (__this->fields).AMFDKDCIJLE = pSVar5;
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
      __this_07 = (pAVar12->fields).LMCDOMHENMC;
      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_07 != (LPAPAMPGDFN_o *)0x0) {
        LPAPAMPGDFN__OAFIHCDEOAD(__this_07,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0311bbb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

