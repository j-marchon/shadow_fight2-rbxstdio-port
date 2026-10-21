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

