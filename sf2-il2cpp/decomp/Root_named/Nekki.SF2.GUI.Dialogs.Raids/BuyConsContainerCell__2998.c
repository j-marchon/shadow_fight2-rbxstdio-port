// TypeDefIndex 2998
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class BuyConsContainerCell : BaseScrollItem
// Fields:
//   private const float OAIPLEKJMEF = 1;
//   private ResolutionImage _consumablePicture; // 0x130
//   private ResolutionImage _consumableCountBack; // 0x138
//   private ResolutionImage _consumableGlow; // 0x140
//   private LabelAlias _consumableCountText; // 0x148
//   private InfoButton _hintDescriptionButton; // 0x150
//   private string <FDBOKOGOEEG>k__BackingField; // 0x158
//   private RaidConfig.HJLEKMDIDPO PPJALGIONOI; // 0x160
//   private Sequence MCLDLFHFMGO; // 0x168
//   private BuyConsContainer EKNAKFAPEGK; // 0x170
//   private int JCIDLNABHMN; // 0x178
//   private Transform PJINIFIOINE; // 0x180
//   private Color GKOENMEMANO; // 0x188
//   private Sequence KAFGHOPAMGP; // 0x198

// ===== public void .ctor()  [RVA 0x34A622C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$.ctor @ RVA 0x34A622C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  (__this->fields).JCIDLNABHMN = -1;
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void DBPCHLNOOBP()  [RVA 0x34A623C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$DBPCHLNOOBP @ RVA 0x34A623C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__DBPCHLNOOBP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  undefined8 uVar2;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar3 [16];
  
  pNVar1 = (__this->fields)._consumableCountText;
  uVar2 = 0;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    auVar3 = (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                       ((__this->fields).GKOENMEMANO.fields.r,(__this->fields).GKOENMEMANO.fields.g,
                        (__this->fields).GKOENMEMANO.fields.b,(__this->fields).GKOENMEMANO.fields.a,
                        pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    __this_00 = (__this->fields).PJINIFIOINE;
    if (DAT_0455fa7f == '\0') {
      auVar3 = FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    method = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_00,
                 (UnityEngine_Vector3_o)
                 (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,method);
}


// ===== public void SetCount(int DFIBGGDJPLM, bool FMIGJGPPDCD = True)  [RVA 0x34A62C8]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$SetCount @ RVA 0x34A62C8

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCount
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,int32_t DFIBGGDJPLM,
               bool FMIGJGPPDCD,MethodInfo *method)

{
  System_String_o *pSVar1;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar3;
  DG_Tweening_TweenCallback_o *pDVar4;
  Il2CppObject *t_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  UnityEngine_Transform_o *target;
  UnityEngine_Vector3_o punch;
  int32_t local_34;
  
                    /* try { // try from 035a62ec to 036a62f3 has its CatchHandler @ 035a63f4 */
  local_34 = DFIBGGDJPLM;
  if ((DAT_045684f2 & 1) == 0) {
                    /* try { // try from 035a62fc to 036a6303 has its CatchHandler @ 035a63f0 */
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_DBPCHLNOOBP__);
                    /* try { // try from 035a6310 to 036a6317 has its CatchHandler @ 035a63ec */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 035a6320 to 036a6327 has its CatchHandler @ 035a63e4 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnKill<Sequence>__);
    DAT_045684f2 = 1;
  }
  if ((__this->fields).JCIDLNABHMN != DFIBGGDJPLM) {
    pNVar6 = (__this->fields)._consumableCountText;
    (__this->fields).JCIDLNABHMN = DFIBGGDJPLM;
    pSVar1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 035a636c to 036a638f has its CatchHandler @ 035a63dc */
    (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
              (pNVar6,pSVar1,(pNVar6->klass->vtable)._75_set_text.method);
    DG_Tweening_TweenExtensions__Kill
              ((DG_Tweening_Tween_o *)(__this->fields).KAFGHOPAMGP,false,(MethodInfo *)0x0);
                    /* try { // try from 035a6390 to 036a63cb has its CatchHandler @ 035a6128 */
    if (FMIGJGPPDCD) {
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      target = (__this->fields).PJINIFIOINE;
      if (DAT_0455fa7f == '\0') {
                    /* try { // try from 035a63cc to 036a63cf has its CatchHandler @ 035a63e8 */
                    /* try { // try from 035a63d0 to 036a63d7 has its CatchHandler @ 035a63e0 */
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    /* try { // try from 035a63d8 to 036a640b has its CatchHandler @ 035a6128 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a636c with catch @ 035a63dc
                        */
        DAT_0455fa7f = '\x01';
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a63d0 with catch @ 035a63e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6320 with catch @ 035a63e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a63cc with catch @ 035a63e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6310 with catch @ 035a63ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a62fc with catch @ 035a63f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a62ec with catch @ 035a63f4
                        */
      pUVar5 = UnityEngine_Vector3_TypeInfo->static_fields;
                    /* try { // try from 035a640c to 036a640f has its CatchHandler @ 035a6438 */
      punch.fields.x = (pUVar5->oneVector).fields.x * 0.5;
                    /* try { // try from 035a6410 to 036a6447 has its CatchHandler @ 035a6128 */
      punch.fields.y = (pUVar5->oneVector).fields.y * 0.5;
      punch.fields.z = (pUVar5->oneVector).fields.z * 0.5;
      t = DG_Tweening_ShortcutExtensions__DOPunchScale(target,punch,0.5,1,1.0,(MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar2,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a640c with catch @ 035a6438 */
      pNVar6 = (__this->fields)._consumableCountText;
                    /* try { // try from 035a6448 to 036a644f has its CatchHandler @ 035a6464 */
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a6450 to 036a645b has its CatchHandler @ 035a6128 */
        thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
      }
                    /* try { // try from 035a645c to 036a6463 has its CatchHandler @ 035a6464 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a6448 with catch @ 035a6464
                       catch(type#2 @ 00000000) { ... } // from try @ 035a645c with catch @ 035a6464
                        */
      pDVar3 = DG_Tweening_DOTweenModuleUI__DOColor
                         ((UnityEngine_UI_Text_o *)pNVar6,
                          (UnityEngine_Color_o)
                          (BHEDGAKGKPO_TypeInfo->static_fields->KPJHDEIJPAN).fields,0.25,
                          (MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__Join
                         (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_DOTweenModuleUI__DOColor
                         ((UnityEngine_UI_Text_o *)(__this->fields)._consumableCountText,
                          (UnityEngine_Color_o)(__this->fields).GKOENMEMANO.fields,0.25,
                          (MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
      pDVar4 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      t_00 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                       ((Il2CppObject *)pDVar2,pDVar4,
                        Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
                    /* try { // try from 035a6510 to 036a65bb has its CatchHandler @ 035a6510
                       catch() { ... } // from try @ 035a6510 with catch @ 035a6510
                       catch() { ... } // from try @ 035a65e4 with catch @ 035a6510
                       catch() { ... } // from try @ 035a662c with catch @ 035a6510
                       catch() { ... } // from try @ 035a6654 with catch @ 035a6510
                       catch() { ... } // from try @ 035a6690 with catch @ 035a6510 */
      pDVar4 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      pDVar2 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__OnKill<object>
                         (t_00,pDVar4,Method_DG_Tweening_TweenSettingsExtensions_OnKill<Sequence>__)
      ;
      (__this->fields).KAFGHOPAMGP = pDVar2;
      thunk_FUN_01c20e04(&(__this->fields).KAFGHOPAMGP,pDVar2);
    }
  }
  return;
}


// ===== public string get_ConsumableName()  [RVA 0x34A656C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$get_ConsumableName @ RVA 0x34A656C

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__get_ConsumableName
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._FDBOKOGOEEG_k__BackingField;
}


// ===== private void OnClick()  [RVA 0x34A6574]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$OnClick @ RVA 0x34A6574

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this_00;
  
  __this_00 = (__this->fields).EKNAKFAPEGK;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollForward(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFEBDHOEPIP(string CJNHFNHJHPE)  [RVA 0x34A6594]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$HFEBDHOEPIP @ RVA 0x34A6594

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__HFEBDHOEPIP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,
               System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FDBOKOGOEEG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._FDBOKOGOEEG_k__BackingField);
  return;
}


// ===== public void VisibleGlow(bool CCOCAIEPCOJ)  [RVA 0x34A65A4]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$VisibleGlow @ RVA 0x34A65A4

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  
  pNVar2 = (__this->fields)._consumableGlow;
                    /* try { // try from 035a65bc to 036a65c3 has its CatchHandler @ 035a6638 */
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 035a65d4 to 036a65e3 has its CatchHandler @ 035a6630 */
    if (bVar1 == CCOCAIEPCOJ) {
      return;
    }
    pNVar2 = (__this->fields)._consumableGlow;
                    /* try { // try from 035a65e4 to 036a6627 has its CatchHandler @ 035a6510 */
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
      if (CCOCAIEPCOJ) {
        Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__HNFDMDOJNKO(__this,method_00);
        return;
      }
                    /* try { // try from 035a6628 to 036a662b has its CatchHandler @ 035a6634 */
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a662c to 036a664f has its CatchHandler @ 035a6510 */
  FUN_01bab8c8();
}


// ===== private void HNFDMDOJNKO()  [RVA 0x34A6630]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$HNFDMDOJNKO @ RVA 0x34A6630

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__HNFDMDOJNKO
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a65d4 with catch @ 035a6630
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6628 with catch @ 035a6634
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a65bc with catch @ 035a6638
                        */
                    /* try { // try from 035a6650 to 036a6653 has its CatchHandler @ 035a6680 */
  if ((DAT_045684f3 & 1) == 0) {
                    /* try { // try from 035a6654 to 036a6687 has its CatchHandler @ 035a6510 */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_045684f3 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035a6650 with catch @ 035a6680 */
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH(__this,method);
                    /* try { // try from 035a6688 to 036a668f has its CatchHandler @ 035a66a4 */
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a6690 to 036a669b has its CatchHandler @ 035a6510 */
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                    /* try { // try from 035a669c to 036a66a3 has its CatchHandler @ 035a66a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a6688 with catch @ 035a66a4
                       catch(type#2 @ 00000000) { ... } // from try @ 035a669c with catch @ 035a66a4
                        */
                    /* try { // try from 035a66a8 to 036a6773 has its CatchHandler @ 035a66a8
                       catch() { ... } // from try @ 035a66a8 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a67b8 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a6804 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a6834 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a686c with catch @ 035a66a8 */
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar1,0.2,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._consumableGlow,0.4,0.9,
                      (MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                     (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._consumableGlow,1.0,0.9,
                      (MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                     (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar1 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                     ((Il2CppObject *)pDVar1,-1,
                      Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  (__this->fields).MCLDLFHFMGO = pDVar1;
  thunk_FUN_01c20e04(&(__this->fields).MCLDLFHFMGO);
  return;
}


// ===== public void SetCountVisible(bool CCOCAIEPCOJ)  [RVA 0x34A6774]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$SetCountVisible @ RVA 0x34A6774

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCountVisible
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
                    /* try { // try from 035a6774 to 036a677b has its CatchHandler @ 035a6818 */
  pNVar2 = (__this->fields)._consumableCountBack;
                    /* try { // try from 035a6794 to 036a6797 has its CatchHandler @ 035a6808 */
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1 != CCOCAIEPCOJ) {
                    /* try { // try from 035a67b0 to 036a67b7 has its CatchHandler @ 035a6814 */
      pNVar2 = (__this->fields)._consumableCountBack;
                    /* try { // try from 035a67b8 to 036a67fb has its CatchHandler @ 035a66a8 */
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035a6830;
      UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields)._consumableCountText;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1 == CCOCAIEPCOJ) {
        return;
      }
                    /* try { // try from 035a67fc to 036a67ff has its CatchHandler @ 035a6810 */
      pNVar4 = (__this->fields)._consumableCountText;
                    /* try { // try from 035a6800 to 036a6803 has its CatchHandler @ 035a680c */
                    /* try { // try from 035a6804 to 036a682f has its CatchHandler @ 035a66a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6794 with catch @ 035a6808
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6800 with catch @ 035a680c
                        */
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a67fc with catch @ 035a6810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a67b0 with catch @ 035a6814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6774 with catch @ 035a6818
                        */
        UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_035a6830:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a6830 to 036a6833 has its CatchHandler @ 035a685c */
  FUN_01bab8c8();
}


// ===== private void MFIEPLJIGNP(object IMMNELPBGIF)  [RVA 0x34A6834]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$MFIEPLJIGNP @ RVA 0x34A6834

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__MFIEPLJIGNP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  bool bVar1;
  Roster_o *__this_00;
  Nekki_SF2_GUI_InfoButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this_02;
  RaidConfig_HJLEKMDIDPO_o *pJVar2;
  
                    /* try { // try from 035a6834 to 036a6863 has its CatchHandler @ 035a66a8 */
  if ((DAT_045684f4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 035a6830 with catch @ 035a685c */
    DAT_045684f4 = 1;
  }
  pJVar2 = (__this->fields).PPJALGIONOI;
                    /* try { // try from 035a6864 to 036a686b has its CatchHandler @ 035a6880 */
                    /* try { // try from 035a686c to 036a6877 has its CatchHandler @ 035a66a8 */
  if ((pJVar2 != (RaidConfig_HJLEKMDIDPO_o *)0x0) &&
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pJVar2->fields).super.EJEPJCHIGFE,(MethodInfo *)0x0), !bVar1
     )) {
                    /* try { // try from 035a6884 to 036a6a23 has its CatchHandler @ 035a6884
                       catch() { ... } // from try @ 035a6884 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6be8 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6c84 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6ce8 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6d28 with catch @ 035a6884 */
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
    pJVar2 = (__this->fields).PPJALGIONOI;
    if ((pJVar2 != (RaidConfig_HJLEKMDIDPO_o *)0x0) &&
       (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
       __this_00 != (Roster_o *)0x0)) {
      Roster__PLEHMNAALGE(__this_00,(pJVar2->fields).super.JIJLBFGKNJK,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._hintDescriptionButton;
      if (__this_01 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
        Nekki_SF2_GUI_InfoButton__set_HighlightEnabled(__this_01,false,(MethodInfo *)0x0);
        __this_02 = (__this->fields).EKNAKFAPEGK;
        if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ShowConsumableHint
                    (__this_02,(__this->fields).PPJALGIONOI,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035a6878 to 036a687f has its CatchHandler @ 035a6880 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a6864 with catch @ 035a6880
                       catch(type#2 @ 00000000) { ... } // from try @ 035a6878 with catch @ 035a6880
                        */
  return;
}


// ===== public void OnSelectCell()  [RVA 0x34A6924]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$OnSelectCell @ RVA 0x34A6924

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__OnSelectCell
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_InfoButton_o *__this_00;
  RaidConfig_HJLEKMDIDPO_o *pJVar2;
  Roster_o *pAVar3;
  LPAPAMPGDFN_o *pLVar4;
  
  if ((DAT_045684f5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045684f5 = 1;
  }
  pJVar2 = (__this->fields).PPJALGIONOI;
  if ((pJVar2 == (RaidConfig_HJLEKMDIDPO_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pJVar2->fields).super.EJEPJCHIGFE,(MethodInfo *)0x0), bVar1)
     ) {
    return;
  }
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
  if ((pAVar3 != (Roster_o *)0x0) &&
     (pLVar4 = (pAVar3->fields).LMCDOMHENMC, pLVar4 != (LPAPAMPGDFN_o *)0x0)) {
    if ((pLVar4->fields).AMIMEMOELHE == 10) {
      return;
    }
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
    pJVar2 = (__this->fields).PPJALGIONOI;
    if ((pJVar2 != (RaidConfig_HJLEKMDIDPO_o *)0x0) &&
       (pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
       pAVar3 != (Roster_o *)0x0)) {
                    /* try { // try from 035a6a24 to 036a6a2b has its CatchHandler @ 035a6ccc */
      bVar1 = Roster__EICGOCNDMNI(pAVar3,(pJVar2->fields).super.JIJLBFGKNJK,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
                    /* try { // try from 035a6a40 to 036a6a43 has its CatchHandler @ 035a6c94 */
      __this_00 = (__this->fields)._hintDescriptionButton;
      if (__this_00 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
        Nekki_SF2_GUI_InfoButton__set_HighlightEnabled(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a6a5c to 036a6a63 has its CatchHandler @ 035a6cc0 */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x34A6A60]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$OnDestroy @ RVA 0x34A6A60

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH(__this,method);
                    /* try { // try from 035a6a6c to 036a6a73 has its CatchHandler @ 035a6ca8 */
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void EnableVisibility(bool CJNHFNHJHPE)  [RVA 0x34A6A7C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$EnableVisibility @ RVA 0x34A6A7C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__EnableVisibility
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_InfoButton_o *__this_00;
  
                    /* try { // try from 035a6a7c to 036a6a83 has its CatchHandler @ 035a6cac */
  if (!CJNHFNHJHPE) {
    __this_00 = (__this->fields)._hintDescriptionButton;
                    /* try { // try from 035a6a94 to 036a6a9b has its CatchHandler @ 035a6c8c */
    if (__this_00 == (Nekki_SF2_GUI_InfoButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_InfoButton__set_HighlightEnabled(__this_00,false,(MethodInfo *)0x0);
  }
                    /* try { // try from 035a6ab4 to 036a6ab7 has its CatchHandler @ 035a6c88 */
                    /* try { // try from 035a6ab8 to 036a6afb has its CatchHandler @ 035a6cb8 */
  Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(string BANLPNAAHPH, string KLLIEOKKCFA, BuyConsContainer PBDIPLHDHHD)  [RVA 0x34A6AC0]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$Init @ RVA 0x34A6AC0

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,
               System_String_o *BANLPNAAHPH,System_String_o *KLLIEOKKCFA,
               Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *PBDIPLHDHHD,MethodInfo *method)

{
  RaidConfig_HJLEKMDIDPO_o **ppJVar1;
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  RaidConfig_o *__this_01;
  RaidConfig_HJLEKMDIDPO_o *pJVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_InfoButton_o *pNVar6;
  UnityEngine_GameObject_o *__this_03;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Events_UnityEvent_o *__this_04;
  float fVar7;
  float in_s1;
  float in_s2;
  float in_s3;
  
  if ((DAT_045684f6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_MFIEPLJIGNP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_OnClick__);
                    /* try { // try from 035a6b0c to 036a6b4b has its CatchHandler @ 035a6cb4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045684f6 = 1;
  }
  (__this->fields).EKNAKFAPEGK = PBDIPLHDHHD;
  thunk_FUN_01c20e04(&(__this->fields).EKNAKFAPEGK,PBDIPLHDHHD);
  (__this->fields)._FDBOKOGOEEG_k__BackingField = BANLPNAAHPH;
  thunk_FUN_01c20e04(&(__this->fields)._FDBOKOGOEEG_k__BackingField,BANLPNAAHPH);
  __this_00 = (__this->fields)._consumablePicture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,KLLIEOKKCFA,(MethodInfo *)0x0);
                    /* try { // try from 035a6b70 to 036a6b97 has its CatchHandler @ 035a6c98 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (__this_01 != (RaidConfig_o *)0x0) {
      pJVar3 = RaidConfig__FPPDGOEOJCH
                         (__this_01,(__this->fields)._FDBOKOGOEEG_k__BackingField,(MethodInfo *)0x0)
      ;
      ppJVar1 = &(__this->fields).PPJALGIONOI;
      (__this->fields).PPJALGIONOI = pJVar3;
      thunk_FUN_01c20e04(ppJVar1,pJVar3);
      pNVar4 = (__this->fields)._consumableCountText;
                    /* try { // try from 035a6ba8 to 036a6bcf has its CatchHandler @ 035a6ca0 */
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar7 = (float)(*(pNVar4->klass->vtable)._22_get_color.methodPtr)
                                 (pNVar4,(pNVar4->klass->vtable)._22_get_color.method);
        pNVar4 = (__this->fields)._consumableCountText;
        (__this->fields).GKOENMEMANO.fields.r = fVar7;
        (__this->fields).GKOENMEMANO.fields.g = in_s1;
        (__this->fields).GKOENMEMANO.fields.b = in_s2;
        (__this->fields).GKOENMEMANO.fields.a = in_s3;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 035a6bd4 to 036a6be7 has its CatchHandler @ 035a6c90 */
          pUVar5 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          (__this->fields).PJINIFIOINE = pUVar5;
                    /* try { // try from 035a6be8 to 036a6c33 has its CatchHandler @ 035a6884 */
          thunk_FUN_01c20e04(&(__this->fields).PJINIFIOINE);
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH(__this,method_00);
          __this_02 = (__this->fields).super.super.m_OnClick;
          if (__this_02 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
            __this_04 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 035a6c34 to 036a6c37 has its CatchHandler @ 035a6cc8 */
            if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 035a6c38 to 036a6c3b has its CatchHandler @ 035a6cc4 */
                    /* try { // try from 035a6c3c to 036a6c43 has its CatchHandler @ 035a6cbc */
                    /* try { // try from 035a6c44 to 036a6c47 has its CatchHandler @ 035a6cb0 */
              UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
                    /* try { // try from 035a6c48 to 036a6c4b has its CatchHandler @ 035a6c9c */
              pJVar3 = *ppJVar1;
                    /* try { // try from 035a6c4c to 036a6c4f has its CatchHandler @ 035a6ca4 */
                    /* try { // try from 035a6c50 to 036a6c53 has its CatchHandler @ 035a6cb0 */
                    /* try { // try from 035a6c54 to 036a6c5f has its CatchHandler @ 035a6cbc */
              if ((pJVar3 == (RaidConfig_HJLEKMDIDPO_o *)0x0) ||
                 (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                                    ((pJVar3->fields).super.EJEPJCHIGFE,(MethodInfo *)0x0), bVar2))
              {
                    /* try { // try from 035a6c60 to 036a6c6b has its CatchHandler @ 035a6ca4 */
                pNVar6 = (__this->fields)._hintDescriptionButton;
                    /* try { // try from 035a6c6c to 036a6c77 has its CatchHandler @ 035a6cb0 */
                if ((pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0) &&
                   (__this_03 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                   __this_03 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 035a6c78 to 036a6c83 has its CatchHandler @ 035a6c9c */
                    /* try { // try from 035a6c84 to 036a6ce3 has its CatchHandler @ 035a6884 */
                    /* catch() { ... } // from try @ 035a6ab4 with catch @ 035a6c88 */
                  UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                    /* catch() { ... } // from try @ 035a6a94 with catch @ 035a6c8c */
                pNVar6 = (__this->fields)._hintDescriptionButton;
                    /* catch() { ... } // from try @ 035a6bd4 with catch @ 035a6c90 */
                if (pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
                    /* catch() { ... } // from try @ 035a6a40 with catch @ 035a6c94 */
                  SFButton__RemoveAllEventListener((SFButton_o *)pNVar6,method_01);
                    /* catch() { ... } // from try @ 035a6b70 with catch @ 035a6c98 */
                    /* catch() { ... } // from try @ 035a6c48 with catch @ 035a6c9c
                       catch() { ... } // from try @ 035a6c78 with catch @ 035a6c9c */
                  pNVar6 = (__this->fields)._hintDescriptionButton;
                    /* catch() { ... } // from try @ 035a6ba8 with catch @ 035a6ca0 */
                    /* catch() { ... } // from try @ 035a6c4c with catch @ 035a6ca4
                       catch() { ... } // from try @ 035a6c60 with catch @ 035a6ca4 */
                    /* catch() { ... } // from try @ 035a6a6c with catch @ 035a6ca8 */
                  IELDNEAAPBE = (System_Action_object__o *)
                                thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* catch() { ... } // from try @ 035a6a7c with catch @ 035a6cac */
                    /* catch() { ... } // from try @ 035a6c44 with catch @ 035a6cb0
                       catch() { ... } // from try @ 035a6c50 with catch @ 035a6cb0
                       catch() { ... } // from try @ 035a6c6c with catch @ 035a6cb0 */
                    /* catch() { ... } // from try @ 035a6b0c with catch @ 035a6cb4 */
                    /* catch() { ... } // from try @ 035a6ab8 with catch @ 035a6cb8 */
                  method_02 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 035a6c3c with catch @ 035a6cbc
                       catch() { ... } // from try @ 035a6c54 with catch @ 035a6cbc */
                    /* catch() { ... } // from try @ 035a6a5c with catch @ 035a6cc0 */
                    /* catch() { ... } // from try @ 035a6c38 with catch @ 035a6cc4 */
                  System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 035a6c34 with catch @ 035a6cc8 */
                  if (pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
                    /* catch() { ... } // from try @ 035a6a24 with catch @ 035a6ccc */
                    /* try { // try from 035a6ce4 to 036a6ce7 has its CatchHandler @ 035a6d10 */
                    SFButton__AddEventListener((SFButton_o *)pNVar6,2,IELDNEAAPBE,method_02);
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
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a6ce8 to 036a6d1f has its CatchHandler @ 035a6884 */
  FUN_01bab8c8();
}


// ===== private void BJEJCCMFMJH()  [RVA 0x34A6738]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$BJEJCCMFMJH @ RVA 0x34A6738

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).MCLDLFHFMGO;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).MCLDLFHFMGO;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

