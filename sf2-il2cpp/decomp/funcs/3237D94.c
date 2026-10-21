// LBMBHDPPOOH$$NBNOEKGHMFG @ RVA 0x3237D94

void LBMBHDPPOOH__NBNOEKGHMFG(LBMBHDPPOOH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_Events_UnityAction_o *call;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o **ppNVar7;
  UnityEngine_Events_UnityEvent_o *__this_02;
  System_Collections_IEnumerator_o **ppSVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_04567036 & 1) == 0) {
    FUN_01bab630(&Method_LBMBHDPPOOH_NBNOEKGHMFG__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567036 = 1;
  }
  if ((__this->fields).KLGOFMGCGLA != false) {
    __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) goto LAB_03337f38;
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
  }
  ppNVar7 = &(__this->fields).KDLLKMPBHKC;
  if (*ppNVar7 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar7,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ(LAIGNDBNBJG,(MethodInfo *)0x0);
    if (*ppNVar7 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
      __this_02 = ((*ppNVar7)->fields)._OnHintUp;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__RemoveListener(__this_02,call,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).AIHIJKKCDNO;
        if (*ppSVar8 != (System_Collections_IEnumerator_o *)0x0) {
          pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
          if (pPVar2 == (PBAKFOBIHEG_o *)0x0) goto LAB_03337f38;
          pPVar4 = pPVar2->klass;
          pSVar9 = *ppSVar8;
          uVar1._0_1_ = (pPVar4->_2).rank;
          uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
          uVar5 = (ulong)uVar1;
          if (uVar5 != 0) {
            piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar3 = pPVar4->vtable + (*piVar6 + 1);
                goto LAB_03337ed8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03337ed8:
          (*pVVar3->methodPtr)(pPVar2,pSVar9,pVVar3->method);
          *ppSVar8 = (System_Collections_IEnumerator_o *)0x0;
          thunk_FUN_01c20e04(ppSVar8,0);
        }
        *ppNVar7 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
        thunk_FUN_01c20e04(ppNVar7,0);
        __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
          Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,false,(MethodInfo *)0x0);
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03337f38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

