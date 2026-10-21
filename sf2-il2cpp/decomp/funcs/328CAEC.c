// Nekki.SF2.GUI.Dialogs.LotteryDialog$$AINGLMJIPKH @ RVA 0x328CAEC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t JEGMMDPFNIL;
  int32_t KMOHFJKJBMK;
  CloseButton_o *pCVar2;
  UnityEngine_GameObject_o *pUVar3;
  LabelButton_o *pLVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KKJPPDNKGAI;
  PCKJEMMFMKL_o *pPVar5;
  UnityEngine_CanvasGroup_o *pUVar6;
  MethodInfo *method_00;
  byte bVar7;
  undefined1 uVar8;
  LPGLKMNHELJ_o *pLVar9;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar10;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *pSVar11;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar12;
  IIHMKHNLJKD_o *__this_00;
  float fVar13;
  float value;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = method;
  auVar14._0_8_ = __this;
  if ((DAT_045672e6 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1623);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1624);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    auVar14 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672e6 = 1;
  }
  pLVar9 = (__this->fields).DKMMBMBMJBO;
  if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar14._0_8_,auVar14._8_8_);
  }
  if ((pLVar9->fields).BGHFADDGPAD == 0) {
    pCVar2 = (__this->fields).BtnQuit;
    if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,auVar14._8_8_);
    }
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    pLVar9 = (__this->fields).DKMMBMBMJBO;
    if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar3,0 < (pLVar9->fields).PJBADHPBBAF,(MethodInfo *)0x0);
    pLVar4 = (__this->fields).BtnSpin;
    if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar12 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
  }
  pLVar4 = (__this->fields).BtnSpinCurrency;
  if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
  pLVar9 = (__this->fields).DKMMBMBMJBO;
  if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pLVar9->fields).BGHFADDGPAD == 1) {
    pJVar10 = (pLVar9->fields).FIJPJBGCODO;
    if (pJVar10 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = (pJVar10->fields).LIJCIBIOOOH;
    if (pSVar11 == (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = 0 < (pSVar11->fields)._size;
  }
  else {
    bVar1 = false;
  }
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
  pLVar4 = (__this->fields).BtnSpinAD;
  if (pLVar4 != (LabelButton_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
    pLVar9 = (__this->fields).DKMMBMBMJBO;
    if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar9->fields).BGHFADDGPAD == 1) {
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b86 == '\0') {
        FUN_01bab630(&ACHLOMELAJE_TypeInfo);
        DAT_04565b86 = '\x01';
      }
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 0338cd0c to 0348ce2b has its CatchHandler @ 0338cd0c
                       catch() { ... } // from try @ 0338cd0c with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338ce90 with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338ced0 with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338cf08 with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338cf38 with catch @ 0338cd0c */
      }
      __this_00 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1623,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1624,
                 (MethodInfo *)0x0);
      KKJPPDNKGAI = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if (__this_00 == (IIHMKHNLJKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = IIHMKHNLJKD__LCLIGIJPCOD(__this_00,KKJPPDNKGAI,(MethodInfo *)0x0);
    }
    else {
      bVar1 = false;
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    pLVar4 = (__this->fields).BtnSpinAD;
    if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)pLVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pPVar5 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar5 == (PCKJEMMFMKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      JEGMMDPFNIL = PCKJEMMFMKL__OMLNCFNPAMJ(pPVar5,0xc,0,(MethodInfo *)0x0);
      pPVar5 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar5 == (PCKJEMMFMKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method_00 = (MethodInfo *)0x0;
      KMOHFJKJBMK = PCKJEMMFMKL__LAPHEMPOHMP(pPVar5,0xc,1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF(__this,JEGMMDPFNIL,KMOHFJKJBMK,method_00);
    }
    pCVar2 = (__this->fields).BtnQuit;
    if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pCVar2,(__this->fields).OIKLOAGFFGO == 0,
               (MethodInfo *)0x0);
                    /* try { // try from 0338ce2c to 0348ce33 has its CatchHandler @ 0338ceec */
    pCVar2 = (__this->fields).BtnQuit;
    if (pCVar2 != (CloseButton_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
        pCVar2 = (__this->fields).BtnQuit;
        if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0338ce54 to 0348ce5f has its CatchHandler @ 0338ced8 */
        bVar7 = (pCVar2->fields).super.super.super.super.m_Interactable ^ 1;
      }
      else {
        bVar7 = true;
      }
      (__this->fields).super.IsIgnoreBack = (bool_conflict)bVar7;
                    /* try { // try from 0338ce70 to 0348ce73 has its CatchHandler @ 0338ced4 */
      pLVar4 = (__this->fields).BtnSpin;
                    /* try { // try from 0338ce74 to 0348ce83 has its CatchHandler @ 0338cee4 */
      if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0338ce84 to 0348ce8f has its CatchHandler @ 0338cee8 */
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pLVar4,(__this->fields).OIKLOAGFFGO == 0,
                 (MethodInfo *)0x0);
      pLVar4 = (__this->fields).BtnSpin;
                    /* try { // try from 0338ce90 to 0348cec7 has its CatchHandler @ 0338cd0c */
      if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar6 = (__this->fields).BtnSpinContent;
      if (pUVar6 != (UnityEngine_CanvasGroup_o *)0x0) {
        value = 0.6;
        fVar13 = value;
        if ((pLVar4->fields).super.super.super.super.m_Interactable != false) {
          fVar13 = 1.0;
        }
        UnityEngine_CanvasGroup__set_alpha(pUVar6,fVar13,(MethodInfo *)0x0);
        pLVar4 = (__this->fields).BtnSpinCurrency;
                    /* try { // try from 0338cec8 to 0348cecb has its CatchHandler @ 0338cee0 */
        if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0338cecc to 0348cecf has its CatchHandler @ 0338cedc */
                    /* try { // try from 0338ced0 to 0348cf03 has its CatchHandler @ 0338cd0c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce70 with catch @ 0338ced4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce54 with catch @ 0338ced8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338cecc with catch @ 0338cedc
                        */
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pLVar4,(__this->fields).OIKLOAGFFGO == 0,
                   (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338cec8 with catch @ 0338cee0
                        */
        pLVar4 = (__this->fields).BtnSpinCurrency;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce74 with catch @ 0338cee4
                        */
        if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce84 with catch @ 0338cee8
                        */
        pUVar6 = (__this->fields).BtnSpinCurrencyContent;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce2c with catch @ 0338ceec
                        */
        if (pUVar6 != (UnityEngine_CanvasGroup_o *)0x0) {
          fVar13 = value;
          if ((pLVar4->fields).super.super.super.super.m_Interactable != false) {
            fVar13 = 1.0;
          }
                    /* try { // try from 0338cf04 to 0348cf07 has its CatchHandler @ 0338cf28 */
          UnityEngine_CanvasGroup__set_alpha(pUVar6,fVar13,(MethodInfo *)0x0);
                    /* try { // try from 0338cf08 to 0348cf2f has its CatchHandler @ 0338cd0c */
          pLVar4 = (__this->fields).BtnSpinAD;
          if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 0338cf04 with catch @ 0338cf28 */
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pLVar4,(__this->fields).OIKLOAGFFGO == 0,
                     (MethodInfo *)0x0);
          pLVar4 = (__this->fields).BtnSpinAD;
                    /* try { // try from 0338cf30 to 0348cf37 has its CatchHandler @ 0338cf4c */
          if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar6 = (__this->fields).BtnSpinADContent;
                    /* try { // try from 0338cf38 to 0348cf43 has its CatchHandler @ 0338cd0c */
          if (pUVar6 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0338cf44 to 0348cf4b has its CatchHandler @ 0338cf4c */
          if ((pLVar4->fields).super.super.super.super.m_Interactable != false) {
            value = 1.0;
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338cf30 with catch @ 0338cf4c
                       catch(type#2 @ 00000000) { ... } // from try @ 0338cf44 with catch @ 0338cf4c
                        */
                    /* try { // try from 0338cf50 to 0348d103 has its CatchHandler @ 0338cf50
                       catch() { ... } // from try @ 0338cf50 with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d2c0 with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d37c with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d384 with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d470 with catch @ 0338cf50 */
          UnityEngine_CanvasGroup__set_alpha(pUVar6,value,(MethodInfo *)0x0);
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar12 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar1) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pCVar2 = (__this->fields).BtnQuit;
            if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar12 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
            if (bVar1) {
              pCVar2 = (__this->fields).BtnQuit;
              if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar8 = (pCVar2->fields).super.super.super.super.m_Interactable;
            }
            else {
              uVar8 = 0;
            }
            if (pNVar12 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            *(undefined1 *)&(pNVar12->fields)._money = uVar8;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

