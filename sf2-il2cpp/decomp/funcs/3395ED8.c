// Nekki.SF2.GUI.Profile.ProfileScene$$GIENGNEGHPJ @ RVA 0x3395ED8

void Nekki_SF2_GUI_Profile_ProfileScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar4;
  SFButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  HJNDPNIMBBG_o *__this_02;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_03;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *pNVar5;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar6;
  Nekki_SF2_GUI_Profile_TricksController_o *pNVar7;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar8;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar9;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this_06;
  UnityEngine_Events_UnityAction_o *call_00;
  int32_t CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  LabelButton_o *pLVar10;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_07;
  UnityEngine_Events_UnityEvent_o *__this_08;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Vector3_o UVar13;
  
  if ((DAT_04567c53 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MainMenu>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ProfileBottomPanel>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_HFBCLPBICGN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_HKKFPJJNMCE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_GIENGNEGHPJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SealsTableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_AddListener__);
    DAT_04567c53 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<ProfileScene>_GIENGNEGHPJ__);
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_03495fec:
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  else {
    bVar1 = (MJHMHBEJFBH_TypeInfo->_2).naturalAligment;
    if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) goto LAB_03495fec;
    if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)MJHMHBEJFBH_TypeInfo) {
      IMMNELPBGIF = (Il2CppObject *)0x0;
    }
  }
  pNVar3 = (Nekki_SF2_GUI_Menu_MainMenu_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MainMenu>__);
  (__this->fields).CCKIFMALFBA = pNVar3;
  thunk_FUN_01c20e04(&(__this->fields).CCKIFMALFBA);
  pNVar4 = (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ProfileBottomPanel>__);
  (__this->fields).GJIPOBCNEPG = pNVar4;
  thunk_FUN_01c20e04(&(__this->fields).GJIPOBCNEPG);
  pNVar4 = (__this->fields).GJIPOBCNEPG;
  if (pNVar4 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar4,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    __this_00 = (__this->fields)._PerksResetButton;
    if ((__this_00 != (SFButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_ProfileScene__LOCGOCHBNFM(__this,method_00);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7e == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7e = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
      if (__this_02 != (HJNDPNIMBBG_o *)0x0) {
        exists = (UnityEngine_Object_o *)HJNDPNIMBBG__JDHIIDFJMBM(__this_02,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
        if (bVar2) {
          __this_03 = (__this->fields)._Background;
          if (__this_03 == (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) goto LAB_034962f4;
          Nekki_SF2_GUI_SpriteRendererQuality__ChangeSprite
                    (__this_03,(UnityEngine_Sprite_o *)exists,(MethodInfo *)0x0);
        }
        pNVar5 = (__this->fields)._LeftPanel;
        if (pNVar5 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
          Nekki_SF2_GUI_Profile_UserPerksPanel__Init(pNVar5,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._LeftPanel;
          if ((pNVar5 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
             (__this_04 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_Transform_o *)0x0)) {
            UVar13 = UnityEngine_Transform__get_localPosition(__this_04,(MethodInfo *)0x0);
            pNVar5 = (__this->fields)._LeftPanel;
            (__this->fields).DIADJHEAPCA = UVar13.fields.x;
            if ((pNVar5 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
               (__this_05 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pNVar5,
                                       Method_UnityEngine_Component_GetComponent<RectTransform>__),
               __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar12 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
              pNVar6 = (__this->fields)._PerksController;
              fVar11 = UVar13.fields.x + UVar12.fields.m_Width;
              (__this->fields).EJPDLDOMICI = fVar11;
              if (pNVar6 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
                (*(pNVar6->klass->vtable)._37_Init.methodPtr)
                          (fVar11,UVar12.fields.m_YMin,UVar12.fields.m_Width,UVar12.fields.m_Height,
                           pNVar6,(pNVar6->klass->vtable)._37_Init.method);
                pNVar6 = (__this->fields)._PerksController;
                if (pNVar6 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
                  Nekki_SF2_GUI_Profile_PerksController__ScrollToLastOpenItem
                            (pNVar6,0.0,(MethodInfo *)0x0);
                  pNVar7 = (__this->fields)._TricksController;
                  if (pNVar7 != (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) {
                    (*(pNVar7->klass->vtable)._37_Init.methodPtr)
                              (pNVar7,(pNVar7->klass->vtable)._37_Init.method);
                    pNVar8 = (__this->fields)._AchievementsController;
                    if (pNVar8 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) {
                      (*(pNVar8->klass->vtable)._37_Init.methodPtr)
                                (pNVar8,(pNVar8->klass->vtable)._37_Init.method);
                      pNVar9 = (__this->fields)._SealsController;
                      if (pNVar9 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                        (*(pNVar9->klass->vtable)._37_Init.methodPtr)
                                  (pNVar9,(pNVar9->klass->vtable)._37_Init.method);
                        pNVar9 = (__this->fields)._SealsController;
                        if (pNVar9 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                          __this_07 = (pNVar9->fields)._OnCellSelected;
                          call = (UnityEngine_Events_UnityAction_T0__o *)
                                 thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<SealsTableViewCell>_TypeInfo
                                                  );
                          UnityEngine_Events_UnityAction<object>___ctor();
                          if (__this_07 !=
                              (Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *)0x0) {
                            UnityEngine_Events_UnityEvent<object>__AddListener
                                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_07,call,
                                       Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_AddListener__
                                      );
                            pNVar9 = (__this->fields)._SealsController;
                            if (pNVar9 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                              Nekki_SF2_GUI_Profile_ItemsController__ScrollToLastCell
                                        ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar9,0.0,
                                         (MethodInfo *)0x0);
                              __this_06 = (__this->fields)._battlePassPanel;
                              if (__this_06 != (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) {
                                Nekki_SF2_GUI_Profile_BattlePassPanel__Init
                                          (__this_06,(MethodInfo *)0x0);
                                pLVar10 = (__this->fields)._ShowAchievementButton;
                                if (pLVar10 != (LabelButton_o *)0x0) {
                                  __this_08 = (UnityEngine_Events_UnityEvent_o *)
                                              (pLVar10->fields).super.super.super.m_OnClick;
                                  call_00 = (UnityEngine_Events_UnityAction_o *)
                                            thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                  UnityEngine_Events_UnityAction___ctor();
                                  if (__this_08 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    method_02 = (MethodInfo *)0x0;
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (__this_08,call_00,(MethodInfo *)0x0);
                                    Nekki_SF2_GUI_Profile_ProfileScene__HDMIBCGPDPL
                                              (__this,method_01);
                                    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                                      CJNHFNHJHPE = 0;
                                    }
                                    else {
                                      CJNHFNHJHPE = 0;
                                      if (*(int *)&IMMNELPBGIF[1].klass != 5) {
                                        CJNHFNHJHPE = *(int *)&IMMNELPBGIF[1].klass;
                                      }
                                    }
                                    Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
                                              (__this,CJNHFNHJHPE,method_02);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034962f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

