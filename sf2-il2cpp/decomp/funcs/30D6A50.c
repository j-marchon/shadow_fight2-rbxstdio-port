// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$Init @ RVA 0x30D6A50

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__Init
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityAction_o *call;
  JMDPBFOCHHP_FNILDHLJBBJ_o **ppJVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o **ppSVar8;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar9;
  
  if ((DAT_04566335 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 031d6a8c to 032d6ab7 has its CatchHandler @ 031d6fb4 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_KPDBPHNOALH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_MNHPOELABEN__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_21095);
    FUN_01bab630(&StringLiteral_16226);
    DAT_04566335 = 1;
  }
  ppJVar6 = &(__this->fields).KBMOPEKFNNN;
  *ppJVar6 = GDGBNEPJEOO;
                    /* try { // try from 031d6afc to 032d6b03 has its CatchHandler @ 031d6fac */
  thunk_FUN_01c20e04(ppJVar6,GDGBNEPJEOO);
  if (*ppJVar6 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_031d6e10;
  ppSVar8 = &(__this->fields).DOIPCIFCPBH;
  *ppSVar8 = ((*ppJVar6)->fields).HILNENCJHMI;
                    /* try { // try from 031d6b20 to 032d6b23 has its CatchHandler @ 031d6f9c */
  thunk_FUN_01c20e04(ppSVar8);
  pNVar9 = (__this->fields)._picChest;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar9 = (__this->fields)._picChest;
                    /* try { // try from 031d6b5c to 032d6b83 has its CatchHandler @ 031d6dbc */
    pSVar2 = OFFIONDOEPM__BNMJCGDECGI((__this->fields).DOIPCIFCPBH,(MethodInfo *)0x0);
    if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031d6e10;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar9,pSVar2,(MethodInfo *)0x0);
    pNVar9 = (__this->fields)._picChest;
    if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031d6e10;
    (*(pNVar9->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar9,(pNVar9->klass->vtable)._45_SetNativeSize.method);
    pNVar9 = (__this->fields)._picChest;
    if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031d6e10;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale
              (pUVar3,(__this->fields)._chestMinScale,(MethodInfo *)0x0);
                    /* try { // try from 031d6bb8 to 032d6be3 has its CatchHandler @ 031d6db8 */
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    pNVar9 = (__this->fields)._picChest;
    if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031d6e10;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
    pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                       (pUVar3,(__this->fields)._chestMaxScale,(__this->fields)._chestScaleDuration,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar4,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
                    /* try { // try from 031d6c18 to 032d6c27 has its CatchHandler @ 031d6dac */
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar4,callback,(MethodInfo *)0x0);
  }
                    /* try { // try from 031d6c38 to 032d6c3f has its CatchHandler @ 031d6db0 */
  if (*ppJVar6 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_031d6e10;
                    /* try { // try from 031d6c58 to 032d6c5b has its CatchHandler @ 031d6da8 */
  pSVar2 = System_String__Concat
                     (StringLiteral_21095,((*ppJVar6)->fields).HILNENCJHMI,StringLiteral_16226,
                      (MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031d6c7c to 032d6c8b has its CatchHandler @ 031d6d94 */
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
  }
  PNLFHHJGDLI__CJKCKACIIHK(pSVar2,false,1.0,1.0,(MethodInfo *)0x0);
  pNVar9 = (__this->fields)._bottomStar2;
                    /* try { // try from 031d6ca4 to 032d6cab has its CatchHandler @ 031d6da0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031d6cac to 032d6cbf has its CatchHandler @ 031d6d9c */
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031d6cd8 to 032d6d47 has its CatchHandler @ 031d6fbc */
      thunk_FUN_01ba7564();
    }
    pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    pNVar9 = (__this->fields)._bottomStar2;
    if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031d6e10;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
    pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                       (pUVar3,(__this->fields)._scaleMin,(__this->fields)._scaleDuration,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar4,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__AppendInterval
              (pDVar4,(__this->fields)._scaleDelay,(MethodInfo *)0x0);
    pNVar9 = (__this->fields)._bottomStar2;
    if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031d6e10;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
    pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                       (pUVar3,(__this->fields)._scaleMax,(__this->fields)._scaleDuration,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar4,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
                    /* try { // try from 031d6d60 to 032d6d67 has its CatchHandler @ 031d6f94 */
    DG_Tweening_TweenSettingsExtensions__AppendInterval
              (pDVar4,(__this->fields)._scaleDelay,(MethodInfo *)0x0);
                    /* try { // try from 031d6d6c to 032d6d73 has its CatchHandler @ 031d6db4 */
                    /* try { // try from 031d6d78 to 032d6d7b has its CatchHandler @ 031d6da4 */
    DG_Tweening_TweenSettingsExtensions__SetLoops<object>
              ((Il2CppObject *)pDVar4,-1,
               Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  }
                    /* try { // try from 031d6d80 to 032d6d83 has its CatchHandler @ 031d6d98 */
  pUVar7 = (__this->fields)._buttonOk;
                    /* try { // try from 031d6d88 to 032d6d8b has its CatchHandler @ 031d6d90 */
                    /* try { // try from 031d6d8c to 032d6dcf has its CatchHandler @ 031d6884 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031d6d88 with catch @ 031d6d90 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031d6c7c with catch @ 031d6d94 */
                    /* catch() { ... } // from try @ 031d6d80 with catch @ 031d6d98 */
                    /* catch() { ... } // from try @ 031d6cac with catch @ 031d6d9c */
                    /* catch() { ... } // from try @ 031d6ca4 with catch @ 031d6da0 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031d6d78 with catch @ 031d6da4 */
  if (!bVar1) {
    return;
  }
                    /* catch() { ... } // from try @ 031d6c58 with catch @ 031d6da8 */
  pUVar7 = (__this->fields)._buttonOk;
                    /* catch() { ... } // from try @ 031d6c18 with catch @ 031d6dac */
  if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                    /* catch() { ... } // from try @ 031d6c38 with catch @ 031d6db0 */
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                    /* catch() { ... } // from try @ 031d6d6c with catch @ 031d6db4 */
                    /* catch() { ... } // from try @ 031d6bb8 with catch @ 031d6db8 */
                    /* catch() { ... } // from try @ 031d6b5c with catch @ 031d6dbc */
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 031d6dd0 to 032d6dd3 has its CatchHandler @ 031d6f84 */
                    /* try { // try from 031d6dd4 to 032d6ecf has its CatchHandler @ 031d6884 */
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d6e10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

