// LevelPlaySample$$OnGUI @ RVA 0x322BED8

void LevelPlaySample__OnGUI(LevelPlaySample_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GUISkin_o *__this_00;
  UnityEngine_GUIStyle_o *__this_01;
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o *pUVar4;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *pUVar5;
  Unity_Services_LevelPlay_LevelPlayBannerAd_o *pUVar6;
  MethodInfo *extraout_x1;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Texture_o *image;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o position;
  UnityEngine_Rect_o position_00;
  UnityEngine_Rect_o position_01;
  UnityEngine_Rect_o position_02;
  UnityEngine_Rect_o position_03;
  UnityEngine_Rect_o position_04;
  
  if ((DAT_04566fad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_GUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15502);
    FUN_01bab630(&StringLiteral_8523);
    FUN_01bab630(&StringLiteral_8526);
    FUN_01bab630(&StringLiteral_12069);
    FUN_01bab630(&StringLiteral_15538);
    FUN_01bab630(&StringLiteral_8524);
    FUN_01bab630(&StringLiteral_15509);
    FUN_01bab630(&StringLiteral_7093);
    FUN_01bab630(&StringLiteral_15504);
    FUN_01bab630(&StringLiteral_15507);
    FUN_01bab630(&StringLiteral_15540);
    FUN_01bab630(&StringLiteral_15541);
    FUN_01bab630(&StringLiteral_12071);
    FUN_01bab630(&StringLiteral_15539);
    FUN_01bab630(&StringLiteral_15508);
    FUN_01bab630(&StringLiteral_15503);
    DAT_04566fad = 1;
    method = extraout_x1;
  }
  bVar1 = (__this->fields).PCCCPJKDLJC;
  if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_GUI_TypeInfo,method);
  }
  UnityEngine_GUI__set_enabled(bVar1 != false,(MethodInfo *)0x0);
  UVar11 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  position.fields.m_XMin = UVar11.fields.m_XMin;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar11 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  UVar12 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  position.fields.m_Width = UVar12.fields.m_Width;
  UVar12 = UnityEngine_Screen__get_safeArea((MethodInfo *)0x0);
  position.fields.m_Height = UVar12.fields.m_Height;
  UnityEngine_GUI__set_backgroundColor
            ((UnityEngine_Color_o)(ZEXT816(0x3f8000003f800000) << 0x40),(MethodInfo *)0x0);
  __this_00 = UnityEngine_GUI__get_skin((MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GUISkin_o *)0x0) &&
     (__this_01 = UnityEngine_GUISkin__get_button(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GUIStyle_o *)0x0)) {
    UnityEngine_GUIStyle__set_fontSize(__this_01,0x28,(MethodInfo *)0x0);
    position.fields.m_YMin = (float)iVar3 - (UVar11.fields.m_Height + UVar11.fields.m_YMin);
    UnityEngine_GUI__BeginGroup(position,(MethodInfo *)0x0);
    x = (__this->fields).lpLogo;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      image = (UnityEngine_Texture_o *)(__this->fields).lpLogo;
      if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UVar11.fields.m_YMin = 20.0;
      UVar11.fields.m_XMin = (position.fields.m_Width + -500.0) * 0.5;
      UVar11.fields.m_Width = 500.0;
      UVar11.fields.m_Height = 100.0;
      UnityEngine_GUI__DrawTexture(UVar11,image,2,(MethodInfo *)0x0);
    }
    fVar9 = position.fields.m_Width * 0.05;
    fVar8 = position.fields.m_Width * 0.4;
    fVar7 = position.fields.m_Height * 0.08;
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UVar12.fields.m_YMin = position.fields.m_Height * 0.15;
    UVar12.fields.m_XMin = fVar9;
    UVar12.fields.m_Height = fVar7;
    UVar12.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(UVar12,StringLiteral_8526,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15509,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).MHBAPJBAHKL;
      if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayRewardedAd__LoadAd(pUVar4,(MethodInfo *)0x0);
    }
    fVar10 = position.fields.m_Width * 0.55;
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_00.fields.m_YMin = position.fields.m_Height * 0.15;
    position_00.fields.m_XMin = fVar10;
    position_00.fields.m_Height = fVar7;
    position_00.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_00,StringLiteral_12071,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15539,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).MHBAPJBAHKL;
      if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) goto LAB_0332c540;
      bVar2 = Unity_Services_LevelPlay_LevelPlayRewardedAd__IsAdReady(pUVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      if (bVar2) {
        UnityEngine_Debug__Log(StringLiteral_15541,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).MHBAPJBAHKL;
        if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) goto LAB_0332c540;
        Unity_Services_LevelPlay_LevelPlayRewardedAd__ShowAd
                  (pUVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Debug__Log(StringLiteral_15504,(MethodInfo *)0x0);
      }
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_01.fields.m_YMin = position.fields.m_Height * 0.25;
    position_01.fields.m_XMin = fVar9;
    position_01.fields.m_Height = fVar7;
    position_01.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_01,StringLiteral_8524,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15508,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).AFFAMBLJIDN;
      if (pUVar5 == (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayInterstitialAd__LoadAd(pUVar5,(MethodInfo *)0x0);
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_02.fields.m_YMin = position.fields.m_Height * 0.25;
    position_02.fields.m_XMin = fVar10;
    position_02.fields.m_Height = fVar7;
    position_02.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_02,StringLiteral_12069,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15538,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).AFFAMBLJIDN;
      if (pUVar5 == (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) goto LAB_0332c540;
      bVar2 = Unity_Services_LevelPlay_LevelPlayInterstitialAd__IsAdReady(pUVar5,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      if (bVar2) {
        UnityEngine_Debug__Log(StringLiteral_15540,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).AFFAMBLJIDN;
        if (pUVar5 == (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)0x0) goto LAB_0332c540;
        Unity_Services_LevelPlay_LevelPlayInterstitialAd__ShowAd
                  (pUVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Debug__Log(StringLiteral_15503,(MethodInfo *)0x0);
      }
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_03.fields.m_YMin = position.fields.m_Height * 0.35;
    position_03.fields.m_XMin = fVar9;
    position_03.fields.m_Height = fVar7;
    position_03.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_03,StringLiteral_8523,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15507,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).KIAJDAOCCHI;
      if (pUVar6 == (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayBannerAd__LoadAd(pUVar6,(MethodInfo *)0x0);
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    position_04.fields.m_YMin = position.fields.m_Height * 0.35;
    position_04.fields.m_XMin = fVar10;
    position_04.fields.m_Height = fVar7;
    position_04.fields.m_Width = fVar8;
    bVar2 = UnityEngine_GUI__Button(position_04,StringLiteral_7093,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_15502,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).KIAJDAOCCHI;
      if (pUVar6 == (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) goto LAB_0332c540;
      Unity_Services_LevelPlay_LevelPlayBannerAd__HideAd(pUVar6,(MethodInfo *)0x0);
    }
    if ((UnityEngine_GUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_GUI__EndGroup((MethodInfo *)0x0);
    return;
  }
LAB_0332c540:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

