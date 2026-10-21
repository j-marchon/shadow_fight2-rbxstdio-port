// TypeDefIndex 1055
// Namespace: Nekki.SF2.GUI.Fight
// public class RaidFinalFightChestContent : RaidEndFightBaseContent
// Fields:
//   private ResolutionImage _picChest; // 0x28
//   private ResolutionImage _bottomStar1; // 0x30
//   private ResolutionImage _bottomStar2; // 0x38
//   private CocosAnimation _chestAnimation; // 0x40
//   private Button _buttonOk; // 0x48
//   private float _rotationAngle; // 0x50
//   private float _scaleMin; // 0x54
//   private float _scaleMax; // 0x58
//   private float _scaleDuration; // 0x5C
//   private float _scaleDelay; // 0x60
//   private float _chestMinScale; // 0x64
//   private float _chestMaxScale; // 0x68
//   private float _chestScaleDuration; // 0x6C
//   private RaidConfig.FNILDHLJBBJ KBMOPEKFNNN; // 0x70
//   private string DOIPCIFCPBH; // 0x78

// ===== public void .ctor()  [RVA 0x30D672C]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$.ctor @ RVA 0x30D672C

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent___ctor
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  (__this->fields)._scaleMax = 1.0;
  (__this->fields)._scaleDuration = 1.0;
  (__this->fields)._rotationAngle = -0.25;
  (__this->fields)._scaleMin = 0.5;
  (__this->fields)._chestMaxScale = 1.0;
  (__this->fields)._chestScaleDuration = 0.3;
  (__this->fields)._scaleDelay = 0.1;
  (__this->fields)._chestMinScale = 0.5;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FixedUpdate()  [RVA 0x30D6748]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$FixedUpdate @ RVA 0x30D6748

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FixedUpdate
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_04566333 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566333 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._bottomStar1;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._bottomStar1;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031d6878;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar4 = (__this->fields)._bottomStar1;
      if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_031d6878;
      UnityEngine_Transform__Rotate
                (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0x3f800000) << 0x40),
                 (__this->fields)._rotationAngle,(MethodInfo *)0x0);
    }
  }
  pNVar4 = (__this->fields)._bottomStar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields)._bottomStar2;
  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar4 = (__this->fields)._bottomStar2;
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__Rotate
                (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0x3f800000) << 0x40),
                 (__this->fields)._rotationAngle,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d6878:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KPDBPHNOALH()  [RVA 0x30D687C]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$KPDBPHNOALH @ RVA 0x30D687C

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__KPDBPHNOALH
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).super.NHNIOGOEAJB;
                    /* try { // try from 031d6884 to 032d6a2f has its CatchHandler @ 031d6884
                       catch() { ... } // from try @ 031d6884 with catch @ 031d6884
                       catch() { ... } // from try @ 031d6d8c with catch @ 031d6884
                       catch() { ... } // from try @ 031d6dd4 with catch @ 031d6884
                       catch() { ... } // from try @ 031d6f6c with catch @ 031d6884
                       catch() { ... } // from try @ 031d6f7c with catch @ 031d6884
                       catch() { ... } // from try @ 031d7068 with catch @ 031d6884 */
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ECNGJBGEMAO()  [RVA 0x30D6898]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$ECNGJBGEMAO @ RVA 0x30D6898

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__ECNGJBGEMAO
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *EIJDDKJONFO;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  RaidConfig_FNILDHLJBBJ_o *pJVar2;
  CocosAnimation_o *pCVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04566334 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_FMCAPKDNGLH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12922/*"Textures/Sequences/"*/);
    DAT_04566334 = 1;
    method = extraout_x1;
  }
  pCVar3 = (__this->fields)._chestAnimation;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pJVar2 = (__this->fields).KBMOPEKFNNN;
  if (pJVar2 != (RaidConfig_FNILDHLJBBJ_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((pJVar2->fields).ICGHMKGHKEH,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pJVar2 = (__this->fields).KBMOPEKFNNN;
    if (pJVar2 != (RaidConfig_FNILDHLJBBJ_o *)0x0) {
      pCVar3 = (__this->fields)._chestAnimation;
      EIJDDKJONFO = System_String__Concat
                              (StringLiteral_12922/*"Textures/Sequences/"*/,(pJVar2->fields).ICGHMKGHKEH,(MethodInfo *)0x0);
      if (pCVar3 != (CocosAnimation_o *)0x0) {
        CocosAnimation__Init(pCVar3,EIJDDKJONFO,0,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._chestAnimation;
        if (pCVar3 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFramesRange(pCVar3,0,-1,(MethodInfo *)0x0);
          pCVar3 = (__this->fields)._chestAnimation;
          if (pCVar3 != (CocosAnimation_o *)0x0) {
            __this_00 = (pCVar3->fields).OnAnimationComplete;
            (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.081;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FMCAPKDNGLH(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MNHPOELABEN()  [RVA 0x30D6A4C]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$MNHPOELABEN @ RVA 0x30D6A4C

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__MNHPOELABEN
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *EIJDDKJONFO;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  RaidConfig_FNILDHLJBBJ_o *pJVar2;
  CocosAnimation_o *pCVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04566334 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_FMCAPKDNGLH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12922/*"Textures/Sequences/"*/);
    DAT_04566334 = 1;
    method = extraout_x1;
  }
  pCVar3 = (__this->fields)._chestAnimation;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pJVar2 = (__this->fields).KBMOPEKFNNN;
  if (pJVar2 != (RaidConfig_FNILDHLJBBJ_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((pJVar2->fields).ICGHMKGHKEH,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pJVar2 = (__this->fields).KBMOPEKFNNN;
    if (pJVar2 != (RaidConfig_FNILDHLJBBJ_o *)0x0) {
      pCVar3 = (__this->fields)._chestAnimation;
      EIJDDKJONFO = System_String__Concat
                              (StringLiteral_12922/*"Textures/Sequences/"*/,(pJVar2->fields).ICGHMKGHKEH,(MethodInfo *)0x0);
      if (pCVar3 != (CocosAnimation_o *)0x0) {
        CocosAnimation__Init(pCVar3,EIJDDKJONFO,0,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._chestAnimation;
        if (pCVar3 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFramesRange(pCVar3,0,-1,(MethodInfo *)0x0);
          pCVar3 = (__this->fields)._chestAnimation;
          if (pCVar3 != (CocosAnimation_o *)0x0) {
            __this_00 = (pCVar3->fields).OnAnimationComplete;
            (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.081;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FMCAPKDNGLH(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMCAPKDNGLH()  [RVA 0x30D6A00]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$FMCAPKDNGLH @ RVA 0x30D6A00

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FMCAPKDNGLH
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pCVar1 = (__this->fields)._chestAnimation;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFirstFrame(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._chestAnimation;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
                    /* try { // try from 031d6a30 to 032d6a57 has its CatchHandler @ 031d6fb8 */
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(RaidConfig.FNILDHLJBBJ GDGBNEPJEOO)  [RVA 0x30D6A50]
// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$Init @ RVA 0x30D6A50

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__Init
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,
               RaidConfig_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityAction_o *call;
  RaidConfig_FNILDHLJBBJ_o **ppJVar6;
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
    FUN_01bab630(&StringLiteral_21095/*"snd_"*/);
    FUN_01bab630(&StringLiteral_16226/*"_sound"*/);
    DAT_04566335 = 1;
  }
  ppJVar6 = &(__this->fields).KBMOPEKFNNN;
  *ppJVar6 = GDGBNEPJEOO;
                    /* try { // try from 031d6afc to 032d6b03 has its CatchHandler @ 031d6fac */
  thunk_FUN_01c20e04(ppJVar6,GDGBNEPJEOO);
  if (*ppJVar6 == (RaidConfig_FNILDHLJBBJ_o *)0x0) goto LAB_031d6e10;
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
  if (*ppJVar6 == (RaidConfig_FNILDHLJBBJ_o *)0x0) goto LAB_031d6e10;
                    /* try { // try from 031d6c58 to 032d6c5b has its CatchHandler @ 031d6da8 */
  pSVar2 = System_String__Concat
                     (StringLiteral_21095/*"snd_"*/,((*ppJVar6)->fields).HILNENCJHMI,StringLiteral_16226/*"_sound"*/,
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

