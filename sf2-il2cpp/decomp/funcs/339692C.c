// Nekki.SF2.GUI.Profile.ProfileScene$$CLNAOMIIBLH @ RVA 0x339692C

void Nekki_SF2_GUI_Profile_ProfileScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *__this_00;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *__this_02;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_03;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  LabelButton_o *__this_04;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar5;
  Nekki_SF2_GUI_Profile_TricksController_o *pNVar6;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar7;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar8;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_05;
  System_Collections_IEnumerator_o *pSVar12;
  
  if ((DAT_04567c5a & 1) == 0) {
                    /* try { // try from 03496954 to 0359695f has its CatchHandler @ 03496ed0 */
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 03496970 to 0359697f has its CatchHandler @ 03496e90 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_EFNENLMNEII__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_CLNAOMIIBLH__);
    DAT_04567c5a = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,
             Method_Nekki_SF2_GUI_Scene<ProfileScene>_CLNAOMIIBLH__);
  pNVar5 = (__this->fields)._PerksController;
  if ((pNVar5 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) &&
     (__this_00 = (pNVar5->fields)._OnCellSelected,
     __this_00 != (Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._PerksController;
    if (pNVar5 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
                    /* try { // try from 034969c0 to 035969cb has its CatchHandler @ 03496ed8 */
      (*(pNVar5->klass->vtable)._41_Free.methodPtr)(pNVar5,(pNVar5->klass->vtable)._41_Free.method);
      pNVar6 = (__this->fields)._TricksController;
      if ((pNVar6 != (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) &&
         (__this_01 = (pNVar6->fields)._OnCellSelected,
         __this_01 != (Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        pNVar6 = (__this->fields)._TricksController;
        if (pNVar6 != (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) {
                    /* try { // try from 034969e4 to 035969f7 has its CatchHandler @ 03496e8c */
          (*(pNVar6->klass->vtable)._41_Free.methodPtr)
                    (pNVar6,(pNVar6->klass->vtable)._41_Free.method);
          pNVar7 = (__this->fields)._AchievementsController;
          if ((pNVar7 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) &&
             (__this_02 = (pNVar7->fields)._OnCellSelected,
             __this_02 != (Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._AchievementsController;
            if (pNVar7 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) {
              (*(pNVar7->klass->vtable)._41_Free.methodPtr)
                        (pNVar7,(pNVar7->klass->vtable)._41_Free.method);
              pNVar8 = (__this->fields)._SealsController;
              if ((pNVar8 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) &&
                 (__this_03 = (pNVar8->fields)._OnCellSelected,
                 __this_03 != (Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *)0x0)) {
                    /* try { // try from 03496a38 to 03596a43 has its CatchHandler @ 03496ea8 */
                UnityEngine_Events_UnityEventBase__RemoveAllListeners
                          ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._SealsController;
                if (pNVar8 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                    /* try { // try from 03496a54 to 03596a63 has its CatchHandler @ 03496ee8 */
                  (*(pNVar8->klass->vtable)._41_Free.methodPtr)
                            (pNVar8,(pNVar8->klass->vtable)._41_Free.method);
                  __this_05 = (__this->fields)._ModelContainer;
                  CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                                thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
                  System_Action<object>___ctor();
                  if (__this_05 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
                    /* try { // try from 03496a94 to 03596a9f has its CatchHandler @ 03496ef4 */
                    Nekki_SF2_Core_Fights_ModelContainer__remove_OnAnimationEnd
                              (__this_05,CJNHFNHJHPE,(MethodInfo *)0x0);
                    __this_04 = (__this->fields)._ShowAchievementButton;
                    if (__this_04 != (LabelButton_o *)0x0) {
                      SFButton__RemoveAllEventListener((SFButton_o *)__this_04,(MethodInfo *)0x0);
                      if ((__this->fields).NMKGGFKBHID == (System_Collections_IEnumerator_o *)0x0) {
                        return;
                      }
                    /* try { // try from 03496ab0 to 03596abf has its CatchHandler @ 03496e98 */
                      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                      if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
                        pPVar9 = pPVar3->klass;
                        ppSVar1 = &(__this->fields).NMKGGFKBHID;
                        pSVar12 = *ppSVar1;
                        uVar2._0_1_ = (pPVar9->_2).rank;
                        uVar2._1_1_ = (pPVar9->_2).minimumAlignment;
                        uVar10 = (ulong)uVar2;
                        if (uVar10 != 0) {
                          piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
                          do {
                    /* try { // try from 03496af0 to 03596afb has its CatchHandler @ 03496ec4 */
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType
                                == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                              pVVar4 = pPVar9->vtable + (*piVar11 + 1);
                              goto LAB_03496b30;
                            }
                            uVar10 = uVar10 - 1;
                            piVar11 = piVar11 + 4;
                          } while (uVar10 != 0);
                        }
                        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
                    /* try { // try from 03496b0c to 03596b1b has its CatchHandler @ 03496ea0 */
LAB_03496b30:
                        (*pVVar4->methodPtr)(pPVar3,pSVar12,pVVar4->method);
                        *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 03496b4c to 03596b57 has its CatchHandler @ 03496e80 */
                        thunk_FUN_01c20e04(ppSVar1,0);
                        *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 03496b68 to 03596b77 has its CatchHandler @ 03496e9c */
                        thunk_FUN_01c20e04(ppSVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

