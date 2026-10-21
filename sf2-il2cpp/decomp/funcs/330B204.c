// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$Init @ RVA 0x330B204

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__Init
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,CBLABOPKBKD_o *OOKMPCPEAAD,
               CBLABOPKBKD_o *DLKMEONGJEO,MethodInfo *method)

{
  bool bVar1;
  CBLABOPKBKD_o **ppCVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_object__o *pSVar6;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *pHVar7;
  System_String_o *pSVar8;
  KKLJIDJBFEI_o *pKVar9;
  FKDLCJJOGIP_o *__this_02;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar10;
  ACHLOMELAJE_o *pAVar11;
  UnityEngine_Events_UnityEvent_o *__this_03;
  CBLABOPKBKD_o **ppCVar12;
  System_String_o *pSVar13;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567780 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_FKILEAIPNCP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_GHDNMPGNLOK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_IFPBLGAHOML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_OnClick__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14104);
    FUN_01bab630(&StringLiteral_13773);
    FUN_01bab630(&StringLiteral_14103);
    FUN_01bab630(&StringLiteral_11520);
    FUN_01bab630(&StringLiteral_14110);
    FUN_01bab630(&StringLiteral_11519);
    FUN_01bab630(&StringLiteral_14109);
    FUN_01bab630(&StringLiteral_14107);
    FUN_01bab630(&StringLiteral_3559);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_14108);
    FUN_01bab630(&StringLiteral_15552);
    FUN_01bab630(&StringLiteral_11430);
    FUN_01bab630(&StringLiteral_3315);
    FUN_01bab630(&StringLiteral_11518);
    FUN_01bab630(&StringLiteral_14111);
    FUN_01bab630(&StringLiteral_3560);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11517);
    FUN_01bab630(&StringLiteral_15791);
    FUN_01bab630(&StringLiteral_14105);
    DAT_04567780 = 1;
  }
  ppCVar12 = &(__this->fields)._FONGIJNHBLK_k__BackingField;
  *ppCVar12 = OOKMPCPEAAD;
  thunk_FUN_01c20e04(ppCVar12,OOKMPCPEAAD);
  ppCVar2 = &(__this->fields).COHMICDNKCB;
  *ppCVar2 = DLKMEONGJEO;
  thunk_FUN_01c20e04(ppCVar2,DLKMEONGJEO);
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0340ba3c;
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar3,(MethodInfo *)0x0);
  (__this->fields)._NNCECFJGBFF_k__BackingField = bVar1;
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO(__this,method_00);
  pSVar8 = StringLiteral_1;
  pNVar4 = (__this->fields)._advButton;
  if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
  Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
            (pNVar4,StringLiteral_14107,StringLiteral_11519,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._advButton;
  if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
  Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
            (pNVar4,StringLiteral_14107,StringLiteral_11519,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._advButton;
  if ((pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
     (Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (pNVar4,StringLiteral_14107,StringLiteral_11518,(MethodInfo *)0x0),
     OOKMPCPEAAD == (CBLABOPKBKD_o *)0x0)) goto LAB_0340ba3c;
  if ((OOKMPCPEAAD->fields).NMDOMADFIOI != false) {
    pNVar5 = (__this->fields)._shineBorder;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_14108,(MethodInfo *)0x0);
  }
  if (*ppCVar12 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ba3c;
  pSVar13 = ((*ppCVar12)->fields).BGHFADDGPAD;
  bVar1 = System_String__op_Equality(pSVar13,StringLiteral_11517,(MethodInfo *)0x0);
  if (bVar1) {
    puVar10 = &StringLiteral_14109;
LAB_0340b5cc:
    pSVar13 = (System_String_o *)*puVar10;
  }
  else {
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_11520,(MethodInfo *)0x0);
    if (bVar1) {
      puVar10 = &StringLiteral_14110;
      goto LAB_0340b5cc;
    }
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_13773,(MethodInfo *)0x0);
    if (bVar1) {
      puVar10 = &StringLiteral_14111;
      goto LAB_0340b5cc;
    }
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_3315,(MethodInfo *)0x0);
                    /* try { // try from 0340b53c to 0350b543 has its CatchHandler @ 0340b660 */
    if (bVar1) {
      pNVar4 = (__this->fields)._advButton;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
      Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                (pNVar4,StringLiteral_14103,StringLiteral_3560,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._advButton;
                    /* try { // try from 0340b56c to 0350b56f has its CatchHandler @ 0340b654 */
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
                    /* try { // try from 0340b570 to 0350b57b has its CatchHandler @ 0340b658 */
                    /* try { // try from 0340b57c to 0350b64b has its CatchHandler @ 0340ac98 */
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (pNVar4,StringLiteral_14103,StringLiteral_3560,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._advButton;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (pNVar4,StringLiteral_14103,StringLiteral_3559,(MethodInfo *)0x0);
      if ((OOKMPCPEAAD->fields).NMDOMADFIOI != false) {
        pNVar5 = (__this->fields)._shineBorder;
        if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_14104,(MethodInfo *)0x0);
      }
      puVar10 = &StringLiteral_14105;
      goto LAB_0340b5cc;
    }
                    /* try { // try from 0340b894 to 0350b89f has its CatchHandler @ 0340ba10 */
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_11430,(MethodInfo *)0x0);
    pSVar13 = StringLiteral_14111;
                    /* try { // try from 0340b8b8 to 0350b8bf has its CatchHandler @ 0340b95c */
    if (!bVar1) {
      pSVar13 = pSVar8;
    }
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)(OOKMPCPEAAD->fields).super.CPJFEHFANBC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._buttonIcon;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
    UnityEngine_UI_Image__set_sprite
              ((UnityEngine_UI_Image_o *)pNVar5,(OOKMPCPEAAD->fields).super.CPJFEHFANBC,
               (MethodInfo *)0x0);
  }
  else {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((OOKMPCPEAAD->fields).MEONABNPAPF,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 0340b64c to 0350b64f has its CatchHandler @ 0340b65c */
      if (*ppCVar12 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ba3c;
                    /* try { // try from 0340b650 to 0350b677 has its CatchHandler @ 0340ac98 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b56c with catch @ 0340b654
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b570 with catch @ 0340b658
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b64c with catch @ 0340b65c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b53c with catch @ 0340b660
                        */
      bVar1 = System_String__op_Equality
                        (((*ppCVar12)->fields).BGHFADDGPAD,StringLiteral_11430,(MethodInfo *)0x0);
                    /* try { // try from 0340b678 to 0350b67b has its CatchHandler @ 0340b6a4 */
      if ((bVar1) &&
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((OOKMPCPEAAD->fields).BMGMGAAPFGO,(MethodInfo *)0x0),
         !bVar1)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0340b8d8 to 0350b8db has its CatchHandler @ 0340b954 */
                    /* try { // try from 0340b8dc to 0350b903 has its CatchHandler @ 0340b960 */
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0340b914 to 0350b91b has its CatchHandler @ 0340ba08 */
        if ((pAVar11 == (ACHLOMELAJE_o *)0x0) || ((pAVar11->fields).FCEBIJCGJOL == false)) {
LAB_0340b990:
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0340ba3c;
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        }
        else {
          pKVar9 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar9 == (KKLJIDJBFEI_o *)0x0) goto LAB_0340ba3c;
          if ((pKVar9->fields).super._MGGBEPKMPCF_k__BackingField == false) {
                    /* try { // try from 0340b9ec to 0350b9ef has its CatchHandler @ 0340ba00 */
            __this_02 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0340b9f0 to 0350ba2b has its CatchHandler @ 0340b6d4 */
                    /* catch() { ... } // from try @ 0340b970 with catch @ 0340b9f4 */
                    /* catch() { ... } // from try @ 0340b9ec with catch @ 0340ba00 */
                    /* catch() { ... } // from try @ 0340b938 with catch @ 0340ba04 */
            CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 0340b914 with catch @ 0340ba08 */
                    /* catch() { ... } // from try @ 0340b9e4 with catch @ 0340ba0c */
                    /* catch() { ... } // from try @ 0340b894 with catch @ 0340ba10 */
                    /* catch() { ... } // from try @ 0340b9e0 with catch @ 0340ba14 */
                    /* catch() { ... } // from try @ 0340b868 with catch @ 0340ba18 */
                    /* catch() { ... } // from try @ 0340b87c with catch @ 0340ba1c */
            System_Action___ctor();
            if (__this_02 == (FKDLCJJOGIP_o *)0x0) goto LAB_0340ba3c;
                    /* try { // try from 0340ba2c to 0350ba2f has its CatchHandler @ 0340ba5c */
                    /* try { // try from 0340ba30 to 0350ba6b has its CatchHandler @ 0340b6d4 */
            FKDLCJJOGIP__AJLLLOFFOHF(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 0340b938 to 0350b947 has its CatchHandler @ 0340ba04 */
            Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GHDNMPGNLOK(__this,method_02);
          }
        }
        goto LAB_0340b6b0;
      }
                    /* try { // try from 0340b67c to 0350b6b3 has its CatchHandler @ 0340ac98 */
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((OOKMPCPEAAD->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._buttonIcon;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_01 == (DOPEEDABNEK_o *)0x0) goto LAB_0340ba3c;
        pHVar7 = DOPEEDABNEK__CKKIPBAIEMN
                           (__this_01,(OOKMPCPEAAD->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0340b94c to 0350b94f has its CatchHandler @ 0340b958 */
                    /* try { // try from 0340b950 to 0350b96f has its CatchHandler @ 0340b6d4 */
                    /* catch() { ... } // from try @ 0340b8d8 with catch @ 0340b954 */
                    /* catch() { ... } // from try @ 0340b94c with catch @ 0340b958 */
                    /* catch() { ... } // from try @ 0340b8b8 with catch @ 0340b95c */
                    /* catch() { ... } // from try @ 0340b8dc with catch @ 0340b960 */
          pSVar8 = System_String__Concat
                             (StringLiteral_15552,(OOKMPCPEAAD->fields).BMGMGAAPFGO,
                              StringLiteral_15791,(MethodInfo *)0x0);
                    /* try { // try from 0340b970 to 0350b973 has its CatchHandler @ 0340b9f4 */
                    /* try { // try from 0340b974 to 0350b9c3 has its CatchHandler @ 0340b6d4 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          goto LAB_0340b990;
        }
        pNVar5 = (__this->fields)._buttonIcon;
        bVar1 = System_String__op_Equality
                          ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11751,
                           (MethodInfo *)0x0);
                    /* try { // try from 0340b868 to 0350b86f has its CatchHandler @ 0340ba18 */
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340b87c to 0350b88b has its CatchHandler @ 0340ba1c */
          thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
        }
        if (bVar1) {
          pSVar8 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
        }
        else {
          pSVar8 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
        }
        if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
        *(System_String_o **)&(pNVar5->fields).super.m_PixelsPerUnitMultiplier = pSVar8;
                    /* try { // try from 0340b9c4 to 0350b9df has its CatchHandler @ 0340ba88 */
        thunk_FUN_01c20e04(&(pNVar5->fields).super.m_PixelsPerUnitMultiplier);
        pNVar5 = (__this->fields)._buttonIcon;
        pSVar13 = OFFIONDOEPM__CNLBHLNMCCI
                            ((pHVar7->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      }
      if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
    }
    else {
      pNVar5 = (__this->fields)._buttonIcon;
      if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
                    /* catch() { ... } // from try @ 0340b678 with catch @ 0340b6a4 */
      pSVar13 = (OOKMPCPEAAD->fields).MEONABNPAPF;
    }
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,pSVar13,(MethodInfo *)0x0);
  }
LAB_0340b6b0:
  pNVar4 = (__this->fields)._advButton;
                    /* try { // try from 0340b6b4 to 0350b6bb has its CatchHandler @ 0340b6d0 */
                    /* try { // try from 0340b6bc to 0350b6c7 has its CatchHandler @ 0340ac98 */
  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = (pNVar4->fields).super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0340b6c8 to 0350b6cf has its CatchHandler @ 0340b6d0 */
    pNVar4 = (__this->fields)._advButton;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0340b6b4 with catch @ 0340b6d0
                       catch(type#2 @ 00000000) { ... } // from try @ 0340b6c8 with catch @ 0340b6d0
                        */
                    /* try { // try from 0340b6d4 to 0350b867 has its CatchHandler @ 0340b6d4
                       catch() { ... } // from try @ 0340b6d4 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340b950 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340b974 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340b9f0 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340ba30 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340ba74 with catch @ 0340b6d4 */
      SFButton__RemoveAllEventListener((SFButton_o *)pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._advButton;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        __this_03 = (UnityEngine_Events_UnityEvent_o *)(pNVar4->fields).super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._advButton;
          pSVar6 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            SFButton__AddEventListener((SFButton_o *)pNVar4,0,pSVar6,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._advButton;
            pSVar6 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              SFButton__AddEventListener((SFButton_o *)pNVar4,1,pSVar6,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._advButton;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                SFButton__set_IsFlashing((SFButton_o *)pNVar4,true,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GFAPFHOKBCB(__this,method_01);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0340ba3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

