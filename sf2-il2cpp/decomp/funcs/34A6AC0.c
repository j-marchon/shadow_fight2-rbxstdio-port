// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$Init @ RVA 0x34A6AC0

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,
               System_String_o *BANLPNAAHPH,System_String_o *KLLIEOKKCFA,
               Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *PBDIPLHDHHD,MethodInfo *method)

{
  JMDPBFOCHHP_HJLEKMDIDPO_o **ppJVar1;
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar3;
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
    if (__this_01 != (JMDPBFOCHHP_o *)0x0) {
      pJVar3 = JMDPBFOCHHP__FPPDGOEOJCH
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
              if ((pJVar3 == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) ||
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

