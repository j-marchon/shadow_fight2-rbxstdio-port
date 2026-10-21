// Nekki.SF2.GUI.Fight.VsScreen$$Init @ RVA 0x3183B38

void Nekki_SF2_GUI_Fight_VsScreen__Init
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,PJKHAJKEHEL_o *BAKIMFMMFMP,
               PJKHAJKEHEL_o *JALKELIHLPC,bool HIOHGCIKLNF,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *s;
  UnityEngine_Transform_o *pUVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar3;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar4;
  DG_Tweening_TweenCallback_o *pDVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  
  if ((DAT_045669cf & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo,BAKIMFMMFMP,JALKELIHLPC,HIOHGCIKLNF);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_VsScreen_DAMPMJOKAOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_VsScreen_FMJGMHJEGON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_VsScreen_MLACGDNINBK__);
    DAT_045669cf = 1;
  }
  pNVar7 = (__this->fields).playerLeft;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).playerLeft;
    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) goto LAB_032840cc;
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar7,(MethodInfo *)0x0);
    pNVar7 = (__this->fields).playerLeft;
    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) goto LAB_032840cc;
    *(System_String_o **)&(pNVar7->fields).super.super.m_PixelsPerUnitMultiplier =
         (__this->fields).OOKEKJMFKPE;
    thunk_FUN_01c20e04(&(pNVar7->fields).super.super.m_PixelsPerUnitMultiplier);
    if ((BAKIMFMMFMP == (PJKHAJKEHEL_o *)0x0) ||
       (pNVar7 = (__this->fields).playerLeft, pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0
       )) goto LAB_032840cc;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar7,(BAKIMFMMFMP->fields).NILOEHGNJNL,
               (MethodInfo *)0x0);
    pNVar7 = (__this->fields).playerLeft;
    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) goto LAB_032840cc;
    (*(pNVar7->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar7,(pNVar7->klass->vtable)._45_SetNativeSize.method);
  }
  pNVar7 = (__this->fields).playerRight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).playerRight;
    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) goto LAB_032840cc;
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar7,(MethodInfo *)0x0);
    pNVar7 = (__this->fields).playerRight;
    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) goto LAB_032840cc;
    *(System_String_o **)&(pNVar7->fields).super.super.m_PixelsPerUnitMultiplier =
         (__this->fields).OOKEKJMFKPE;
    thunk_FUN_01c20e04(&(pNVar7->fields).super.super.m_PixelsPerUnitMultiplier);
                    /* try { // try from 03283c88 to 03383d47 has its CatchHandler @ 03283c88
                       catch() { ... } // from try @ 03283c88 with catch @ 03283c88
                       catch() { ... } // from try @ 03283d50 with catch @ 03283c88
                       catch() { ... } // from try @ 03283db4 with catch @ 03283c88
                       catch() { ... } // from try @ 03283dd8 with catch @ 03283c88
                       catch() { ... } // from try @ 03283e18 with catch @ 03283c88 */
    if ((JALKELIHLPC == (PJKHAJKEHEL_o *)0x0) ||
       (pNVar7 = (__this->fields).playerRight,
       pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)) goto LAB_032840cc;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar7,(JALKELIHLPC->fields).NILOEHGNJNL,
               (MethodInfo *)0x0);
    pNVar7 = (__this->fields).playerRight;
    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) goto LAB_032840cc;
    (*(pNVar7->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar7,(pNVar7->klass->vtable)._45_SetNativeSize.method);
  }
  pNVar8 = (__this->fields).nameLeft;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((BAKIMFMMFMP == (PJKHAJKEHEL_o *)0x0) ||
       (pNVar8 = (__this->fields).nameLeft, pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    goto LAB_032840cc;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar8,(BAKIMFMMFMP->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields).nameRight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((JALKELIHLPC == (PJKHAJKEHEL_o *)0x0) ||
       (pNVar8 = (__this->fields).nameRight, pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    goto LAB_032840cc;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar8,(JALKELIHLPC->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
  }
  pNVar7 = (__this->fields).playerLeft;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03283d48 to 03383d4f has its CatchHandler @ 03283dbc */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03283d50 to 03383daf has its CatchHandler @ 03283c88 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).playerRight;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields).nameLeft;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 03283db0 to 03383db3 has its CatchHandler @ 03283db8 */
                    /* try { // try from 03283db4 to 03383dd3 has its CatchHandler @ 03283c88 */
        pNVar8 = (__this->fields).nameRight;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03283db0 with catch @ 03283db8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03283d48 with catch @ 03283dbc
                        */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* try { // try from 03283dd4 to 03383dd7 has its CatchHandler @ 03283e00 */
        if (bVar1) {
                    /* try { // try from 03283dd8 to 03383e0f has its CatchHandler @ 03283c88 */
          pNVar6 = (__this->fields).vsImage;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar1) {
                    /* catch() { ... } // from try @ 03283dd4 with catch @ 03283e00 */
            pNVar6 = (__this->fields).leftStripe;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03283e10 to 03383e17 has its CatchHandler @ 03283e2c */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03283e18 to 03383e23 has its CatchHandler @ 03283c88 */
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
                    /* try { // try from 03283e24 to 03383e2b has its CatchHandler @ 03283e2c */
            if (bVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03283e10 with catch @ 03283e2c
                       catch(type#2 @ 00000000) { ... } // from try @ 03283e24 with catch @ 03283e2c
                        */
              pNVar6 = (__this->fields).rightStripe;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar1) {
                if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                pNVar7 = (__this->fields).playerLeft;
                if (pNVar7 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                  endValue.fields.z = 0.0;
                  endValue.fields._0_8_ = (__this->fields).playerLeftFinishPos.fields;
                  pDVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove
                                     (pUVar2,endValue,(__this->fields).moveAvatarTime,false,
                                      (MethodInfo *)0x0);
                  DG_Tweening_TweenSettingsExtensions__Append
                            (s,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
                  pNVar7 = (__this->fields).playerRight;
                  if (pNVar7 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    pUVar2 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                    endValue_00.fields.z = 0.0;
                    endValue_00.fields._0_8_ = (__this->fields).playerRightFinishPos.fields;
                    pDVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove
                                       (pUVar2,endValue_00,(__this->fields).moveAvatarTime,false,
                                        (MethodInfo *)0x0);
                    DG_Tweening_TweenSettingsExtensions__Join
                              (s,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
                    DG_Tweening_TweenSettingsExtensions__AppendInterval
                              (s,(__this->fields).afterMoveAvatarPause,(MethodInfo *)0x0);
                    pNVar6 = (__this->fields).vsImage;
                    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                      pUVar2 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
                      endValue_01.fields.z = 0.0;
                      endValue_01.fields._0_8_ = (__this->fields).vsImageFinishScale.fields;
                      pDVar3 = DG_Tweening_ShortcutExtensions__DOScale
                                         (pUVar2,endValue_01,(__this->fields).vsImageScaleTime,
                                          (MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__Append
                                (s,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
                      t = DG_Tweening_DOTweenModuleUI__DOFade
                                    ((UnityEngine_UI_Image_o *)(__this->fields).vsImage,
                                     (__this->fields).vsImageFinishAlpha,
                                     (__this->fields).vsImageScaleTime,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__Join
                                (s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__AppendInterval
                                (s,(__this->fields).afterVsImageScalePause,(MethodInfo *)0x0);
                      pDVar4 = DG_Tweening_DOTweenModuleUI__DOFillAmount
                                         ((UnityEngine_UI_Image_o *)(__this->fields).leftStripe,
                                          (__this->fields).vsStripeFinishFillAmount,
                                          (__this->fields).vsStripeFillTime * 0.5,(MethodInfo *)0x0)
                      ;
                      DG_Tweening_TweenSettingsExtensions__Append
                                (s,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
                      pDVar4 = DG_Tweening_DOTweenModuleUI__DOFillAmount
                                         ((UnityEngine_UI_Image_o *)(__this->fields).rightStripe,
                                          (__this->fields).vsStripeFinishFillAmount,
                                          (__this->fields).vsStripeFillTime * 0.5,(MethodInfo *)0x0)
                      ;
                      DG_Tweening_TweenSettingsExtensions__Append
                                (s,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__AppendInterval
                                (s,(__this->fields).afterVsStripeFillPause,(MethodInfo *)0x0);
                      pDVar5 = (DG_Tweening_TweenCallback_o *)
                               thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                      DG_Tweening_TweenCallback___ctor();
                      DG_Tweening_TweenSettingsExtensions__AppendCallback
                                (s,pDVar5,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.1,(MethodInfo *)0x0);
                      pDVar5 = (DG_Tweening_TweenCallback_o *)
                               thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                      DG_Tweening_TweenCallback___ctor();
                      DG_Tweening_TweenSettingsExtensions__AppendCallback
                                (s,pDVar5,(MethodInfo *)0x0);
                      DG_Tweening_TweenSettingsExtensions__AppendInterval
                                (s,(__this->fields).afterNameShowPause,(MethodInfo *)0x0);
                      pDVar5 = (DG_Tweening_TweenCallback_o *)
                               thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                      DG_Tweening_TweenCallback___ctor();
                      DG_Tweening_TweenSettingsExtensions__AppendCallback
                                (s,pDVar5,(MethodInfo *)0x0);
                      (__this->fields).ACFFOAPPNBD =
                           (__this->fields).moveAvatarTime + (__this->fields).afterMoveAvatarPause +
                           (__this->fields).vsImageScaleTime +
                           (__this->fields).afterVsImageScalePause +
                           (__this->fields).vsStripeFillTime +
                           (__this->fields).afterVsStripeFillPause +
                           (__this->fields).afterNameShowPause;
                      return;
                    }
                  }
                }
LAB_032840cc:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            }
          }
        }
      }
    }
  }
  return;
}

