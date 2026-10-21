// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$ShowRewardPlate @ RVA 0x3553F3C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__ShowRewardPlate
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,int32_t NOBEFHEECKJ,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_Action_LabelAlias__o **ppSVar5;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_02;
  System_String_o *pSVar6;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  int32_t MEHNIFHLHOM;
  int32_t IHEPHBIPLPM;
  int32_t iVar7;
  JMDPBFOCHHP_HKDMLOKOJPH_o *pJVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_StaticFields *pNVar9;
  System_Collections_Generic_List_LabelAlias__o *__this_04;
  System_String_o *pSVar10;
  SFButton_o *pSVar11;
  UnityEngine_Events_UnityEvent_o *__this_05;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar12;
  System_Action_LabelAlias__o *action;
  UnityEngine_Vector2_o UVar13;
  UnityEngine_Color_o UVar14;
  int32_t local_34;
  
  if ((DAT_04568b59 & 1) == 0) {
    FUN_01bab630(&System_Action<LabelAlias>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>_ForEach__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_FMFBGOKFDJE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_MFDJBIIKNJI__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_16988);
    FUN_01bab630(&StringLiteral_16991);
    FUN_01bab630(&StringLiteral_16990);
    FUN_01bab630(&StringLiteral_10886);
    FUN_01bab630(&StringLiteral_19380);
    FUN_01bab630(&StringLiteral_19368);
    FUN_01bab630(&StringLiteral_16989);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b59 = 1;
  }
  local_34 = 0;
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  if ((__this->fields).LDBJGDMBCKM != (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0) {
    pNVar12 = (__this->fields)._bgRewardPic;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pUVar2 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                         ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03654548;
      UVar13 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03654548;
      UVar13.fields.y = (__this->fields)._heightWithPlate;
      UnityEngine_RectTransform__set_sizeDelta(pUVar2,UVar13,(MethodInfo *)0x0);
      pSVar10 = StringLiteral_10886;
      if (NOBEFHEECKJ == 0) {
        iVar7 = 4;
LAB_036540dc:
        local_34 = iVar7;
        pSVar6 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat(pSVar10,StringLiteral_19380,pSVar6,(MethodInfo *)0x0);
      }
      else {
        iVar7 = NOBEFHEECKJ;
        if (NOBEFHEECKJ - 1U < 4) goto LAB_036540dc;
      }
      pNVar12 = (__this->fields)._bgRewardPic;
      if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._bgRewardPic;
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar12,pSVar10,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._bgRewardPic;
      if (NOBEFHEECKJ == 0) {
        iVar7 = 0xdc;
        MEHNIFHLHOM = 0xa0;
        IHEPHBIPLPM = 0x8c;
      }
      else {
        iVar7 = 0xff;
        MEHNIFHLHOM = 0xff;
        IHEPHBIPLPM = 0xff;
      }
      UVar14 = CFBGPBCDAGA__NFFPCFGDOKG(iVar7,MEHNIFHLHOM,IHEPHBIPLPM,0xff,(MethodInfo *)0x0);
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      (*(pNVar12->klass->vtable)._23_set_color.methodPtr)
                (UVar14.fields.r,UVar14.fields.g,UVar14.fields.b,UVar14.fields.a,pNVar12,
                 (pNVar12->klass->vtable)._23_set_color.method);
      pNVar4 = (__this->fields)._noRewardLabel;
      if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
      if (NOBEFHEECKJ == 0) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._noRewardLabel;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,StringLiteral_19368,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._noRewardLabel;
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pNVar9 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->static_fields;
            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                      ((pNVar9->AGNLHPGIGLA).fields.r,(pNVar9->AGNLHPGIGLA).fields.g,
                       (pNVar9->AGNLHPGIGLA).fields.b,(pNVar9->AGNLHPGIGLA).fields.a,pNVar4,
                       (pNVar4->klass->vtable)._23_set_color.method);
            return;
          }
        }
        goto LAB_03654548;
      }
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      __this_04 = (__this->fields)._danP1Labels;
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->static_fields->__9__33_0;
      if (action == (System_Action_LabelAlias__o *)0x0) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_LabelAlias__o *)
                 thunk_FUN_01bda818(System_Action<LabelAlias>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar5 = &Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->static_fields->
                   __9__33_0;
        *ppSVar5 = action;
        thunk_FUN_01c20e04(ppSVar5,action);
      }
      if (__this_04 == (System_Collections_Generic_List_LabelAlias__o *)0x0) goto LAB_03654548;
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_04,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<LabelAlias>_ForEach__);
      pSVar10 = StringLiteral_1;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pJVar8 = (__this->fields).LDBJGDMBCKM;
      if ((pJVar8 == (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0) || (__this_01 == (JMDPBFOCHHP_o *)0x0))
      goto LAB_03654548;
      __this_02 = JMDPBFOCHHP__OJOIAONADNG(__this_01,(pJVar8->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
      ;
      pSVar6 = pSVar10;
      if (__this_02 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
        pSVar6 = JMDPBFOCHHP_FNILDHLJBBJ__PCPJDHIAAHO(__this_02,false,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar10,pSVar6,(MethodInfo *)0x0);
        pSVar10 = (__this_02->fields).HILNENCJHMI;
      }
      pJVar8 = (__this->fields).LDBJGDMBCKM;
      if ((pJVar8 == (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0) ||
         (pUVar3 = (__this->fields)._danP1Root, pUVar3 == (UnityEngine_GameObject_o *)0x0))
      goto LAB_03654548;
      if ((pJVar8->fields).PONPLEPGJNA == false) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar12 = (__this->fields)._chestImage;
        if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
        pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar12,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetAnchoredPositionX(pUVar2,0.0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      }
      pNVar12 = (__this->fields)._chestImage;
      if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._chestImage;
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar12,pSVar6,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._chestImage;
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      (*(pNVar12->klass->vtable)._45_SetNativeSize.methodPtr)
                (pNVar12,(pNVar12->klass->vtable)._45_SetNativeSize.method);
      bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16989,(MethodInfo *)0x0);
      if (bVar1) {
        iVar7 = 1;
LAB_0365445c:
        (__this->fields).FNDKDKKMFGN = iVar7;
      }
      else {
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16991,(MethodInfo *)0x0);
        if (bVar1) {
          iVar7 = 2;
          goto LAB_0365445c;
        }
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16988,(MethodInfo *)0x0);
        if (bVar1) {
          iVar7 = 3;
          goto LAB_0365445c;
        }
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16990,(MethodInfo *)0x0);
        if (bVar1) {
          iVar7 = 4;
          goto LAB_0365445c;
        }
      }
      pSVar11 = (__this->fields)._chestHintButton;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pSVar11 = (__this->fields)._chestHintButton;
        if ((pSVar11 == (SFButton_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      }
    }
  }
  pSVar11 = (__this->fields)._chestHintButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar11 = (__this->fields)._chestHintButton;
  if ((pSVar11 != (SFButton_o *)0x0) &&
     (__this_03 = (pSVar11->fields).super.m_OnClick,
     __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
    pSVar11 = (__this->fields)._chestHintButton;
    if (pSVar11 != (SFButton_o *)0x0) {
      __this_05 = (UnityEngine_Events_UnityEvent_o *)(pSVar11->fields).super.m_OnClick;
                    /* try { // try from 03654500 to 03754573 has its CatchHandler @ 03654500
                       catch() { ... } // from try @ 03654500 with catch @ 03654500
                       catch() { ... } // from try @ 036545b8 with catch @ 03654500
                       catch() { ... } // from try @ 0365461c with catch @ 03654500
                       catch() { ... } // from try @ 03654664 with catch @ 03654500 */
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03654548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

