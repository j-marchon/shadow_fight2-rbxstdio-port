// TypeDefIndex 1493
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class GeneralPlayerInfoCell : BaseScrollItem
// Fields:
//   private ResolutionImage _image; // 0x130
//   private LabelAlias _label; // 0x138
//   private LabelAlias _value; // 0x140
//   private SFButton _hintButton; // 0x148
//   private RectTransform _hintButtonMount; // 0x150
//   private GameObject _hintPrefab; // 0x158
//   private GeneralPlayerInfoView.DLEOKEPCMEO JDNKKGPNHPB; // 0x160

// ===== private static string ELDJGIKPKKP(GeneralPlayerInfoView.DLEOKEPCMEO OGPGLGPMEPD)  [RVA 0x3199720]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$ELDJGIKPKKP @ RVA 0x3199720

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__ELDJGIKPKKP
          (int32_t OGPGLGPMEPD,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined8 *puVar1;
  
  if ((DAT_04566a95 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_14509/*"Unknown_boss"*/);
    FUN_01bab630(&StringLiteral_18779/*"hintInfoTotalRaids"*/);
    FUN_01bab630(&StringLiteral_18781/*"hintInfoWinRate"*/);
    FUN_01bab630(&StringLiteral_18778/*"hintInfoFirstPlaces"*/);
    FUN_01bab630(&StringLiteral_18783/*"hintInfoWonRaids"*/);
    FUN_01bab630(&StringLiteral_18776/*"hintInfoAvgDamage"*/);
    FUN_01bab630(&StringLiteral_18780/*"hintInfoWeakestLink"*/);
    FUN_01bab630(&StringLiteral_6732/*"GeneralPlayerInfoView::GetHintAlias: Error getting data"*/);
    FUN_01bab630(&StringLiteral_18777/*"hintInfoBestRating"*/);
    FUN_01bab630(&StringLiteral_18785/*"hintOnline"*/);
    DAT_04566a95 = 1;
    method = extraout_x1;
  }
  if ((uint)OGPGLGPMEPD < 9) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_18777/*"hintInfoBestRating"*/_03fc6480)[OGPGLGPMEPD];
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6732/*"GeneralPlayerInfoView::GetHintAlias: Error getting data"*/,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_14509/*"Unknown_boss"*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public void .ctor()  [RVA 0x3199820]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$.ctor @ RVA 0x3199820

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LHHLFBBBJLD()  [RVA 0x3199828]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$LHHLFBBBJLD @ RVA 0x3199828

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_00;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  System_String_o *DIHAKADKIKM;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  pNVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
     (__this_00 = (pNVar1->fields)._screen,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0)) {
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._hintButtonMount;
    if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      DIHAKADKIKM = Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__ELDJGIKPKKP
                              ((__this->fields).JDNKKGPNHPB,method_00);
      if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_01,DIHAKADKIKM,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string BLFMANONEBE(GeneralPlayerInfoView.DLEOKEPCMEO OGPGLGPMEPD)  [RVA 0x31998B8]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$BLFMANONEBE @ RVA 0x31998B8

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__BLFMANONEBE
          (int32_t OGPGLGPMEPD,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined8 *puVar1;
  
  if ((DAT_04566a96 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_14509/*"Unknown_boss"*/);
    FUN_01bab630(&StringLiteral_20112/*"pInfoBestRatingSeason"*/);
    FUN_01bab630(&StringLiteral_20116/*"pInfoWinRate"*/);
    FUN_01bab630(&StringLiteral_20111/*"pInfoAvgDamage"*/);
    FUN_01bab630(&StringLiteral_6734/*"GeneralPlayerInfoView::GetLabelAlias: Error getting data"*/);
    FUN_01bab630(&StringLiteral_20113/*"pInfoFirstPlaces"*/);
    FUN_01bab630(&StringLiteral_20115/*"pInfoTotalRaids"*/);
    FUN_01bab630(&StringLiteral_19373/*"lblLastOnline"*/);
    FUN_01bab630(&StringLiteral_20114/*"pInfoPoorRaids"*/);
    FUN_01bab630(&StringLiteral_20117/*"pInfoWins"*/);
    DAT_04566a96 = 1;
    method = extraout_x1;
  }
  if ((uint)OGPGLGPMEPD < 9) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_20112/*"pInfoBestRatingSeason"*/_03fc64c8)[OGPGLGPMEPD];
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6734/*"GeneralPlayerInfoView::GetLabelAlias: Error getting data"*/,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_14509/*"Unknown_boss"*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== private static string HHKGCCCAAAE(GeneralPlayerInfoView.DLEOKEPCMEO OGPGLGPMEPD)  [RVA 0x31999B8]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$HHKGCCCAAAE @ RVA 0x31999B8

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__HHKGCCCAAAE
          (int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04566a97 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20413/*"raid_last_online"*/);
    FUN_01bab630(&StringLiteral_20426/*"raid_win_rate"*/);
    FUN_01bab630(&StringLiteral_20423/*"raid_total"*/);
    FUN_01bab630(&StringLiteral_20425/*"raid_weak"*/);
    FUN_01bab630(&StringLiteral_20412/*"raid_first_place"*/);
    FUN_01bab630(&StringLiteral_20394/*"raid_avg_damage"*/);
    FUN_01bab630(&StringLiteral_20427/*"raid_wins"*/);
    FUN_01bab630(&StringLiteral_20407/*"raid_best_rating"*/);
    FUN_01bab630(&StringLiteral_6733/*"GeneralPlayerInfoView::GetImageName: Error getting data"*/);
    FUN_01bab630(&StringLiteral_10864/*"RaidInfoIcons."*/);
    DAT_04566a97 = 1;
    method = extraout_x1;
  }
  switch(OGPGLGPMEPD) {
  case 0:
    puVar2 = &StringLiteral_20407/*"raid_best_rating"*/;
    break;
  case 1:
    puVar2 = &StringLiteral_20394/*"raid_avg_damage"*/;
    break;
  case 2:
    puVar2 = &StringLiteral_20423/*"raid_total"*/;
    break;
  case 3:
    puVar2 = &StringLiteral_20427/*"raid_wins"*/;
    break;
  case 4:
    puVar2 = &StringLiteral_20425/*"raid_weak"*/;
    break;
  case 5:
    puVar2 = &StringLiteral_20412/*"raid_first_place"*/;
    break;
  case 6:
    puVar2 = &StringLiteral_20413/*"raid_last_online"*/;
    break;
  case 7:
  case 8:
    puVar2 = &StringLiteral_20426/*"raid_win_rate"*/;
    break;
  default:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6733/*"GeneralPlayerInfoView::GetImageName: Error getting data"*/,(MethodInfo *)0x0);
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    return (pAVar3->fields).FAAJGHKHEBI;
  }
  pSVar1 = System_String__Concat(StringLiteral_10864/*"RaidInfoIcons."*/,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void Init(GeneralPlayerInfoView.DLEOKEPCMEO ACCIHBHMFPN, string CJNHFNHJHPE, bool BDMNPNHEAEC)  [RVA 0x3199BA0]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$Init @ RVA 0x3199BA0

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this,int32_t ACCIHBHMFPN,
               System_String_o *CJNHFNHJHPE,bool BDMNPNHEAEC,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  System_String_o *pSVar3;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  SFButton_o *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566a98 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_LHHLFBBBJLD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04566a98 = 1;
  }
  pNVar2 = (__this->fields)._value;
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    if (BDMNPNHEAEC) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      method_00 = extraout_x1;
    }
    else {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      method_00 = extraout_x1_00;
    }
    pNVar2 = (__this->fields)._label;
    pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__BLFMANONEBE(ACCIHBHMFPN,method_00);
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,pSVar3,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._image;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        uVar1 = StringLiteral_14092/*"UI/Atlases/"*/._4_4_;
        (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092/*"UI/Atlases/"*/;
        (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
        thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
        pNVar4 = (__this->fields)._image;
        pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__HHKGCCCAAAE
                           (ACCIHBHMFPN,method_01);
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,pSVar3,(MethodInfo *)0x0);
          pSVar5 = (__this->fields)._hintButton;
          if ((pSVar5 != (SFButton_o *)0x0) &&
             (__this_00 = (pSVar5->fields).super.m_OnClick,
             __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
            pSVar5 = (__this->fields)._hintButton;
            if (pSVar5 != (SFButton_o *)0x0) {
              __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar5->fields).super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                pSVar5 = (__this->fields)._hintButton;
                if (pSVar5 != (SFButton_o *)0x0) {
                  UnityEngine_UI_Selectable__set_interactable
                            ((UnityEngine_UI_Selectable_o *)pSVar5,true,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

