// TypeDefIndex 1430
// Namespace: Nekki.SF2.GUI.Fight
// public class VsScreen : MonoBehaviour
// Fields:
//   private Vector2 playerLeftFinishPos; // 0x20
//   private Vector2 playerRightFinishPos; // 0x28
//   private Vector2 vsImageFinishScale; // 0x30
//   private float vsImageFinishAlpha; // 0x38
//   private float vsStripeFinishFillAmount; // 0x3C
//   private float moveAvatarTime; // 0x40
//   private float afterMoveAvatarPause; // 0x44
//   private float vsImageScaleTime; // 0x48
//   private float afterVsImageScalePause; // 0x4C
//   private float vsStripeFillTime; // 0x50
//   private float afterVsStripeFillPause; // 0x54
//   private float afterNameShowPause; // 0x58
//   private ResolutionImageAvatar playerLeft; // 0x60
//   private ResolutionImageAvatar playerRight; // 0x68
//   private ResolutionImage vsImage; // 0x70
//   private ResolutionImage leftStripe; // 0x78
//   private ResolutionImage rightStripe; // 0x80
//   protected LabelAlias nameLeft; // 0x88
//   protected LabelAlias nameRight; // 0x90
//   private Color pvpColorLeft; // 0x98
//   private Color pvpColorRight; // 0xA8
//   private UnityEvent DALFPNPJBCO; // 0xB8
//   private UnityEvent NOHDCBBOPMJ; // 0xC0
//   private float ACFFOAPPNBD; // 0xC8
//   private string OOKEKJMFKPE; // 0xD0

// ===== public UnityEvent get_AnimationEnd()  [RVA 0x31839C8]
// Nekki.SF2.GUI.Fight.VsScreen$$get_AnimationEnd @ RVA 0x31839C8

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Fight_VsScreen__get_AnimationEnd
          (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  return (__this->fields).DALFPNPJBCO;
}


// ===== private void DAMPMJOKAOE()  [RVA 0x31839D0]
// Nekki.SF2.GUI.Fight.VsScreen$$DAMPMJOKAOE @ RVA 0x31839D0

void Nekki_SF2_GUI_Fight_VsScreen__DAMPMJOKAOE
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).DALFPNPJBCO;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void FMONKFODIAA()  [RVA 0x31839EC]
// Nekki.SF2.GUI.Fight.VsScreen$$FMONKFODIAA @ RVA 0x31839EC

void Nekki_SF2_GUI_Fight_VsScreen__FMONKFODIAA
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields).nameLeft;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).nameRight;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3183A3C]
// Nekki.SF2.GUI.Fight.VsScreen$$.ctor @ RVA 0x3183A3C

void Nekki_SF2_GUI_Fight_VsScreen___ctor(Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityEvent_o **ppUVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045669ce & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_045669ce = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).DALFPNPJBCO;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).NOHDCBBOPMJ;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
  (__this->fields).OOKEKJMFKPE = pSVar3;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MLACGDNINBK()  [RVA 0x3183B10]
// Nekki.SF2.GUI.Fight.VsScreen$$MLACGDNINBK @ RVA 0x3183B10

void Nekki_SF2_GUI_Fight_VsScreen__MLACGDNINBK
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).NOHDCBBOPMJ;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMJGMHJEGON()  [RVA 0x3183B2C]
// Nekki.SF2.GUI.Fight.VsScreen$$FMJGMHJEGON @ RVA 0x3183B2C

void Nekki_SF2_GUI_Fight_VsScreen__FMJGMHJEGON
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x03283b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_FMONKFODIAA.methodPtr)
            (__this,(__this->klass->vtable)._4_FMONKFODIAA.method);
  return;
}


// ===== public virtual void Init(ModelParameters BAKIMFMMFMP, ModelParameters JALKELIHLPC, bool HIOHGCIKLNF = False)  [RVA 0x3183B38]
// Nekki.SF2.GUI.Fight.VsScreen$$Init @ RVA 0x3183B38

void Nekki_SF2_GUI_Fight_VsScreen__Init
               (Nekki_SF2_GUI_Fight_VsScreen_o *__this,ModelParameters_o *BAKIMFMMFMP,
               ModelParameters_o *JALKELIHLPC,bool HIOHGCIKLNF,MethodInfo *method)

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
    if ((BAKIMFMMFMP == (ModelParameters_o *)0x0) ||
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
    if ((JALKELIHLPC == (ModelParameters_o *)0x0) ||
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
    if ((BAKIMFMMFMP == (ModelParameters_o *)0x0) ||
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
    if ((JALKELIHLPC == (ModelParameters_o *)0x0) ||
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


// ===== public float get_AnimationTime()  [RVA 0x31840D0]
// Nekki.SF2.GUI.Fight.VsScreen$$get_AnimationTime @ RVA 0x31840D0

float Nekki_SF2_GUI_Fight_VsScreen__get_AnimationTime
                (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  return (__this->fields).ACFFOAPPNBD;
}


// ===== public UnityEvent get_SequenceEnd()  [RVA 0x31840D8]
// Nekki.SF2.GUI.Fight.VsScreen$$get_SequenceEnd @ RVA 0x31840D8

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Fight_VsScreen__get_SequenceEnd
          (Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  return (__this->fields).NOHDCBBOPMJ;
}

