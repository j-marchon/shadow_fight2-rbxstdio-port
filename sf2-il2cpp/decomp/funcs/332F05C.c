// Nekki.SF2.GUI.Fight.ForgeMaterialsContent$$Init @ RVA 0x332F05C

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent__Init
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *__this,
               System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *GMCEHJAIFBJ,
               MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_02;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  LabelButton_o *pLVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  
  if ((DAT_045678f5 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045678f5 = 1;
  }
  pLVar5 = (__this->fields)._buttonOk;
  if ((pLVar5 != (LabelButton_o *)0x0) &&
     (__this_00 = (pLVar5->fields).super.super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pLVar5 = (__this->fields)._buttonOk;
    if ((pLVar5 != (LabelButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._rewardPanel;
      if (__this_02 != (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
        Nekki_SF2_GUI_Fight_RewardPanel__Init
                  (__this_02,GMCEHJAIFBJ,(__this->fields)._animationTime,
                   (__this->fields)._forgeImageScale,(__this->fields)._forgeTextSize,
                   (MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_ForgeMaterialsContent__AMDOHFJGJCD(__this,method_00);
        pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
        pSVar3 = Nekki_SF2_GUI_Fight_ForgeMaterialsContent__CGHIPBAENFK(__this,method_01);
        if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
          pPVar6 = pPVar2->klass;
          uVar1._0_1_ = (pPVar6->_2).rank;
          uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar4 = pPVar6->vtable + *piVar8;
                goto LAB_0342f158;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0342f158:
          pSVar3 = (System_Collections_IEnumerator_o *)
                   (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
          ppSVar9 = &(__this->fields).GGEDJOJFJPP;
          *ppSVar9 = pSVar3;
          thunk_FUN_01c20e04(ppSVar9,pSVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

