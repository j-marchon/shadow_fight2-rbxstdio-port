// TypeDefIndex 2376
// Namespace: Nekki.SF2.GUI.Fight
// public class ForgeMaterialsContent : MonoBehaviour
// Fields:
//   private LabelButton _buttonOk; // 0x20
//   private RewardPanel _rewardPanel; // 0x28
//   private float _animationTime; // 0x30
//   private float _forgeImageScale; // 0x34
//   private int _forgeTextSize; // 0x38
//   private IEnumerator GGEDJOJFJPP; // 0x40
//   public UnityEvent CloseEvent; // 0x48

// ===== private void AMDOHFJGJCD()  [RVA 0x332EE88]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent$$AMDOHFJGJCD @ RVA 0x332EE88

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent__AMDOHFJGJCD
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045678f2 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045678f2 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).GGEDJOJFJPP;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0342ef20;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0342ef20:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private IEnumerator CGHIPBAENFK()  [RVA 0x332EF4C]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent$$CGHIPBAENFK @ RVA 0x332EF4C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_ForgeMaterialsContent__CGHIPBAENFK
          (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678f3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_TypeInfo);
    DAT_045678f3 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void .ctor()  [RVA 0x332EFE0]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent$$.ctor @ RVA 0x332EFE0

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent___ctor
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678f4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_045678f4 = 1;
    method = extraout_x1;
  }
  (__this->fields)._animationTime = 0.8;
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).CloseEvent;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x332F058]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent$$OnDestroy @ RVA 0x332F058

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent__OnDestroy
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045678f2 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045678f2 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).GGEDJOJFJPP;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0342ef20;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0342ef20:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void Init(List<IGPDCHBJAPD.AKGCHFPLJEC> GMCEHJAIFBJ)  [RVA 0x332F05C]
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

