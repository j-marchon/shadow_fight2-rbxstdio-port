// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$BPKMFPHJDPM @ RVA 0x326F3D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BPKMFPHJDPM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,int32_t FBEGCBIAPPK,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  IIHMKHNLJKD_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  LabelButton_o *pLVar11;
  OHDDKGHEEPA_o *pOVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_Events_UnityEvent_o *pUVar16;
  
  if ((DAT_04567225 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_ADNEBFLKAPN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_GPONFGNPPIB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_ONHDLLLAFOF__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12054);
    FUN_01bab630(&StringLiteral_2431);
    FUN_01bab630(&StringLiteral_19370);
    FUN_01bab630(&StringLiteral_10840);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567225 = 1;
  }
  if ((__this->fields).HHPCAHMCPGD == FBEGCBIAPPK) {
    return;
  }
  pLVar11 = (__this->fields)._btnSkipCooldown;
  (__this->fields).HHPCAHMCPGD = FBEGCBIAPPK;
  if ((pLVar11 != (LabelButton_o *)0x0) &&
     (pUVar4 = (pLVar11->fields).super.super.super.m_OnClick,
     pUVar4 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar4,(MethodInfo *)0x0);
    pLVar11 = (__this->fields)._btnAdvertSkipCooldown;
    if ((pLVar11 != (LabelButton_o *)0x0) &&
       (pUVar4 = (pLVar11->fields).super.super.super.m_OnClick,
       pUVar4 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar4,(MethodInfo *)0x0);
      if (FBEGCBIAPPK == 2) {
        pLVar11 = (__this->fields)._btnSkipCooldown;
        if (pLVar11 == (LabelButton_o *)0x0) goto LAB_0336f838;
        LabelButton__set_Alias(pLVar11,StringLiteral_12054,(MethodInfo *)0x0);
        pLVar11 = (__this->fields)._btnSkipCooldown;
        if (pLVar11 == (LabelButton_o *)0x0) goto LAB_0336f838;
        LabelButton__set_ButtonColor(pLVar11,1,(MethodInfo *)0x0);
        pLVar11 = (__this->fields)._btnSkipCooldown;
        if (pLVar11 == (LabelButton_o *)0x0) goto LAB_0336f838;
        pUVar16 = (UnityEngine_Events_UnityEvent_o *)(pLVar11->fields).super.super.super.m_OnClick;
        pUVar5 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar16 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0336f838;
        UnityEngine_Events_UnityEvent__AddListener(pUVar16,pUVar5,(MethodInfo *)0x0);
      }
      else {
        if (FBEGCBIAPPK != 1) {
          return;
        }
        pLVar11 = (__this->fields)._btnSkipCooldown;
        if (pLVar11 == (LabelButton_o *)0x0) goto LAB_0336f838;
        LabelButton__set_ButtonColor(pLVar11,4,(MethodInfo *)0x0);
        pLVar11 = (__this->fields)._btnSkipCooldown;
        if (pLVar11 == (LabelButton_o *)0x0) goto LAB_0336f838;
        pUVar16 = (UnityEngine_Events_UnityEvent_o *)(pLVar11->fields).super.super.super.m_OnClick;
        pUVar5 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar16 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0336f838;
        UnityEngine_Events_UnityEvent__AddListener(pUVar16,pUVar5,(MethodInfo *)0x0);
        pOVar12 = (__this->fields).LGHANMDEKPA;
        if (pOVar12 == (OHDDKGHEEPA_o *)0x0) goto LAB_0336f838;
        if ((pOVar12->fields)._PLEKIDHFFPB_k__BackingField != false) {
          if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b86 == '\0') {
            FUN_01bab630(&ACHLOMELAJE_TypeInfo);
            DAT_04565b86 = '\x01';
          }
          if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
          if (__this_00 == (IIHMKHNLJKD_o *)0x0) goto LAB_0336f838;
          bVar3 = IIHMKHNLJKD__LCLIGIJPCOD(__this_00,StringLiteral_10840,(MethodInfo *)0x0);
          if (bVar3) {
            pLVar11 = (__this->fields)._btnAdvertSkipCooldown;
            if ((pLVar11 != (LabelButton_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
              pLVar11 = (__this->fields)._btnAdvertSkipCooldown;
              if (pLVar11 != (LabelButton_o *)0x0) {
                LabelButton__set_Color
                          (pLVar11,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                           (MethodInfo *)0x0);
                pLVar11 = (__this->fields)._btnAdvertSkipCooldown;
                pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                   (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                lVar8 = FUN_01bab718(string___TypeInfo,2);
                if (lVar8 != 0) {
                  if (*(int *)(lVar8 + 0x18) != 0) {
                    *(undefined8 *)(lVar8 + 0x20) = StringLiteral_2431;
                    thunk_FUN_01c20e04((undefined8 *)(lVar8 + 0x20));
                    if (1 < *(uint *)(lVar8 + 0x18)) {
                      *(undefined8 *)(lVar8 + 0x28) = StringLiteral_1;
                      thunk_FUN_01c20e04();
                      uVar2 = StringLiteral_19370;
                      if (pIVar7 != (Il2CppObject *)0x0) {
                        pIVar13 = pIVar7->klass;
                        uVar1._0_1_ = (pIVar13->_2).rank;
                        uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
                        uVar14 = (ulong)uVar1;
                        if (uVar14 != 0) {
                          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType
                                == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                              goto LAB_0336f7b0;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0336f7b0:
                        pSVar10 = (System_String_o *)
                                  (*pVVar9->methodPtr)(pIVar7,uVar2,lVar8,pVVar9->method);
                        if ((pSVar10 != (System_String_o *)0x0) &&
                           (pSVar10 = System_String__Trim(pSVar10,(MethodInfo *)0x0),
                           pLVar11 != (LabelButton_o *)0x0)) {
                          LabelButton__set_Text(pLVar11,pSVar10,(MethodInfo *)0x0);
                          pLVar11 = (__this->fields)._btnAdvertSkipCooldown;
                          if (pLVar11 != (LabelButton_o *)0x0) {
                            pUVar16 = (UnityEngine_Events_UnityEvent_o *)
                                      (pLVar11->fields).super.super.super.m_OnClick;
                            pUVar5 = (UnityEngine_Events_UnityAction_o *)
                                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                            UnityEngine_Events_UnityAction___ctor();
                            if (pUVar16 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (pUVar16,pUVar5,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                      goto LAB_0336f838;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
              }
            }
            goto LAB_0336f838;
          }
        }
      }
      pLVar11 = (__this->fields)._btnAdvertSkipCooldown;
      if ((pLVar11 != (LabelButton_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0336f838:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

