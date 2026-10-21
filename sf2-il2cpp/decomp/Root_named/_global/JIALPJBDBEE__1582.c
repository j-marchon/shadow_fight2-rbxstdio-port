// TypeDefIndex 1582
// Namespace: 
// public class JIALPJBDBEE : QuestAction
// Fields:
//   private int JHBOEEJBJLA; // 0x64
//   private int PACOBPPADKB; // 0x68
//   private IEnumerator AMFDKDCIJLE; // 0x70
//   private bool PKIHKALFJJI; // 0x78

// ===== private void POBKBBAGBJE()  [RVA 0x31B2350]
// JIALPJBDBEE$$POBKBBAGBJE @ RVA 0x31B2350

void JIALPJBDBEE__POBKBBAGBJE(JIALPJBDBEE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Action_o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_ProgressButton_o *pNVar5;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  Model_o *__this_02;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar6;
  PBAKFOBIHEG_c *pPVar7;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar8;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar9;
  Fight_o *pFVar10;
  ulong uVar11;
  int32_t *piVar12;
  LPAPAMPGDFN_o *pLVar13;
  System_Collections_IEnumerator_o **ppSVar14;
  System_Collections_IEnumerator_o *pSVar15;
  
                    /* try { // try from 032b2350 to 033b2357 has its CatchHandler @ 032b237c */
                    /* try { // try from 032b2358 to 033b2393 has its CatchHandler @ 032b202c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b2260 with catch @ 032b235c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b2248 with catch @ 032b2360
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b222c with catch @ 032b2364
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b21ec with catch @ 032b2368
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b220c with catch @ 032b236c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b234c with catch @ 032b2370
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b226c with catch @ 032b2374
                        */
  if ((DAT_04566b88 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b218c with catch @ 032b2378
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b2350 with catch @ 032b237c
                        */
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 032b2394 to 033b2397 has its CatchHandler @ 032b23c0 */
                    /* try { // try from 032b2398 to 033b23cf has its CatchHandler @ 032b202c */
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_JIALPJBDBEE_BBCAMJDDOII__);
    FUN_01bab630(&Method_JIALPJBDBEE_POBKBBAGBJE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Item__);
                    /* catch() { ... } // from try @ 032b2394 with catch @ 032b23c0 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032b23d0 to 033b23d7 has its CatchHandler @ 032b23ec */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 032b23d8 to 033b23e3 has its CatchHandler @ 032b202c */
    DAT_04566b88 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032b23e4 to 033b23eb has its CatchHandler @ 032b23ec */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b23d0 with catch @ 032b23ec
                       catch(type#2 @ 00000000) { ... } // from try @ 032b23e4 with catch @ 032b23ec
                        */
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar6 != (Roster_o *)0x0) {
    pLVar13 = (pAVar6->fields).LMCDOMHENMC;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pLVar13 != (LPAPAMPGDFN_o *)0x0) {
      LPAPAMPGDFN__OJMMJBJOPKK(pLVar13,CJNHFNHJHPE,(MethodInfo *)0x0);
      ppSVar14 = &(__this->fields).AMFDKDCIJLE;
      if (*ppSVar14 != (System_Collections_IEnumerator_o *)0x0) {
        pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pPVar3 == (PBAKFOBIHEG_o *)0x0) goto LAB_032b2744;
        pPVar7 = pPVar3->klass;
        pSVar15 = *ppSVar14;
        uVar1._0_1_ = (pPVar7->_2).rank;
        uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
        if (uVar11 != 0) {
          piVar12 = &((pPVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar7->vtable + (*piVar12 + 1);
              goto LAB_032b24ec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_032b24ec:
        (*pVVar4->methodPtr)(pPVar3,pSVar15,pVVar4->method);
        *ppSVar14 = (System_Collections_IEnumerator_o *)0x0;
        thunk_FUN_01c20e04(ppSVar14,0);
      }
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,true,(MethodInfo *)0x0);
        bVar2 = QuestAction__EDMJCPEGFOC((QuestAction_o *)__this,(MethodInfo *)0x0);
        if (bVar2) {
          if (DAT_04565c84 == '\0') {
            FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
            DAT_04565c84 = '\x01';
          }
          pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->
                   CNMHHKAMGPI;
          if (((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
              (pNVar9 = (pNVar8->fields)._ActionButtons,
              pNVar9 == (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) ||
             (pNVar5 = (pNVar9->fields)._btnPunch, pNVar5 == (Nekki_SF2_GUI_ProgressButton_o *)0x0))
          goto LAB_032b2744;
          SFButton__set_IsFlashing((SFButton_o *)pNVar5,false,(MethodInfo *)0x0);
          if (DAT_04565c84 == '\0') {
            FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
            DAT_04565c84 = '\x01';
          }
          pNVar8 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->
                   CNMHHKAMGPI;
          if (((pNVar8 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
              (pNVar9 = (pNVar8->fields)._ActionButtons,
              pNVar9 == (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0)) ||
             (pNVar5 = (pNVar9->fields)._btnKick, pNVar5 == (Nekki_SF2_GUI_ProgressButton_o *)0x0))
          goto LAB_032b2744;
          SFButton__set_IsFlashing((SFButton_o *)pNVar5,false,(MethodInfo *)0x0);
          if ((Fight_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&Fight_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((Fight_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pFVar10 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
          if ((pFVar10 == (Fight_o *)0x0) ||
             (__this_01 = (pFVar10->fields).IILLHHPGGKA,
             __this_01 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_032b2744;
          __this_02 = (Model_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,0,
                                 Method_System_Collections_Generic_List<Model>_get_Item__);
          CJNHFNHJHPE_00 =
               (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<Model_EAOIGPODIAI>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_02 == (Model_o *)0x0) goto LAB_032b2744;
          Model__PLMIOLEFAEF(__this_02,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar6 != (Roster_o *)0x0) &&
           (pLVar13 = (pAVar6->fields).LMCDOMHENMC, pLVar13 != (LPAPAMPGDFN_o *)0x0)) {
          if ((pLVar13->fields).HBFBGGBPLOB != false) {
            return;
          }
          QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032b2744:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31B2748]
// JIALPJBDBEE$$.ctor @ RVA 0x31B2748

void JIALPJBDBEE___ctor(JIALPJBDBEE_o *__this,MethodInfo *method)

{
  (__this->fields).JHBOEEJBJLA = 3;
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31B2758]
// JIALPJBDBEE$$MAHFCKJGBPP @ RVA 0x31B2758

void JIALPJBDBEE__MAHFCKJGBPP(JIALPJBDBEE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  Model_o *__this_02;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar8;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar9;
  Fight_o *pFVar10;
  PBAKFOBIHEG_c *pPVar11;
  Roster_o *pAVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_ProgressButton_o *pNVar15;
  LPAPAMPGDFN_o *__this_03;
  
  if ((DAT_04566b89 & 1) == 0) {
    FUN_01bab630(&System_Action<Model_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_JIALPJBDBEE_BBCAMJDDOII__);
    FUN_01bab630(&Method_JIALPJBDBEE_POBKBBAGBJE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_6333/*"FightButtons.Kick_Highlight"*/);
    DAT_04566b89 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_032b2b7c;
  Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,false,(MethodInfo *)0x0);
  bVar2 = QuestAction__EDMJCPEGFOC((QuestAction_o *)__this,(MethodInfo *)0x0);
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
    SFButton__AddFlashImage((SFButton_o *)pNVar15,StringLiteral_6333/*"FightButtons.Kick_Highlight"*/,(MethodInfo *)0x0);
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
    SFButton__AddFlashImage((SFButton_o *)pNVar15,StringLiteral_6333/*"FightButtons.Kick_Highlight"*/,(MethodInfo *)0x0);
    pNVar3 = (pNVar15->fields).super.super.FlashingImage;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_032b2b7c;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)pUVar4,(UnityEngine_Vector3_o)ZEXT812(0x3faa3d713faa3d71),
               (MethodInfo *)0x0);
    SFButton__set_IsFlashing((SFButton_o *)pNVar15,true,(MethodInfo *)0x0);
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar10 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar10 == (Fight_o *)0x0) ||
       (__this_01 = (pFVar10->fields).IILLHHPGGKA,
       __this_01 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_032b2b7c;
    __this_02 = (Model_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,0,
                           Method_System_Collections_Generic_List<Model>_get_Item__);
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<Model_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_02 == (Model_o *)0x0) goto LAB_032b2b7c;
    Model__LONDOHOBJIK(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
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
    if (pAVar12 != (Roster_o *)0x0) {
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


// ===== private void BBCAMJDDOII(Model.EAOIGPODIAI PGPLLGEIFPI)  [RVA 0x31B2BEC]
// JIALPJBDBEE$$BBCAMJDDOII @ RVA 0x31B2BEC

void JIALPJBDBEE__BBCAMJDDOII
               (JIALPJBDBEE_o *__this,Model_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  Fight_o *pFVar4;
  
  if ((DAT_04566b8a & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Item__);
    DAT_04566b8a = 1;
    PGPLLGEIFPI = (Model_EAOIGPODIAI_o *)extraout_x1;
  }
  if ((__this->fields).PKIHKALFJJI != false) {
    iVar1 = *(int *)&(__this->fields).super.field_0x54;
    iVar2 = (__this->fields).JHBOEEJBJLA;
    (__this->fields).PKIHKALFJJI = false;
    iVar1 = iVar1 + 1;
    *(int *)&(__this->fields).super.field_0x54 = iVar1;
    if (iVar2 <= iVar1) {
      JIALPJBDBEE__POBKBBAGBJE(__this,(MethodInfo *)PGPLLGEIFPI);
    }
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar4 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (((pFVar4 != (Fight_o *)0x0) &&
      (__this_00 = (pFVar4->fields).IILLHHPGGKA,
      __this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) &&
     (pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<Model>_get_Item__),
     pIVar3 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar3[0x22].monitor == 2) {
      (__this->fields).PKIHKALFJJI = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator GBCDHIOCFJJ()  [RVA 0x31B2B80]
// JIALPJBDBEE$$GBCDHIOCFJJ @ RVA 0x31B2B80

System_Collections_IEnumerator_o *
JIALPJBDBEE__GBCDHIOCFJJ(JIALPJBDBEE_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b8b & 1) == 0) {
    FUN_01bab630(&JIALPJBDBEE_OKPAHMIMOPN_TypeInfo);
    DAT_04566b8b = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JIALPJBDBEE_OKPAHMIMOPN_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

