// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$NOPJKPNLKNA @ RVA 0x33544CC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NOPJKPNLKNA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               DPDNFOCBGGD_o *DKMMBMBMJBO,MethodInfo *method)

{
  byte bVar1;
  IDGOGBNEGAM_c *pIVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar5;
  MethodInfo *method_00;
  SFButton_o *pSVar6;
  IDGOGBNEGAM_o *pIVar7;
  UnityEngine_Events_UnityEvent_o *pUVar8;
  IDGOGBNEGAM_o **ppIVar9;
  
  if ((DAT_04567a34 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IDGOGBNEGAM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_DNFIBMGKICI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_KGNBJLLJHOC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_KHLMEONLGMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_KPNGAJDJHBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_OGCLDPJPKKO__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10923);
    FUN_01bab630(&StringLiteral_10922);
    FUN_01bab630(&StringLiteral_10921);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_8942);
    DAT_04567a34 = 1;
  }
  pIVar2 = IDGOGBNEGAM_TypeInfo;
  if (DKMMBMBMJBO == (DPDNFOCBGGD_o *)0x0) {
    DKMMBMBMJBO = (DPDNFOCBGGD_o *)0x0;
    (__this->fields).PAAIEEFEBKK = (IDGOGBNEGAM_o *)0x0;
  }
  else {
    bVar1 = (IDGOGBNEGAM_TypeInfo->_2).naturalAligment;
    if ((DKMMBMBMJBO->klass->_2).naturalAligment < bVar1) {
      pIVar7 = (IDGOGBNEGAM_o *)0x0;
    }
    else {
      pIVar7 = (IDGOGBNEGAM_o *)DKMMBMBMJBO;
      if ((DKMMBMBMJBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)IDGOGBNEGAM_TypeInfo) {
        pIVar7 = (IDGOGBNEGAM_o *)0x0;
      }
    }
    (__this->fields).PAAIEEFEBKK = pIVar7;
    if ((DKMMBMBMJBO->klass->_2).naturalAligment < bVar1) {
      DKMMBMBMJBO = (DPDNFOCBGGD_o *)0x0;
    }
    else if ((DKMMBMBMJBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pIVar2) {
      DKMMBMBMJBO = (DPDNFOCBGGD_o *)0x0;
    }
  }
  ppIVar9 = &(__this->fields).PAAIEEFEBKK;
  thunk_FUN_01c20e04(ppIVar9,DKMMBMBMJBO);
  if (*ppIVar9 == (IDGOGBNEGAM_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8942,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateAll(__this,method_00);
  pSVar6 = (__this->fields)._roleButton;
  if ((pSVar6 != (SFButton_o *)0x0) &&
     (pUVar3 = (pSVar6->fields).super.m_OnClick,
     pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._roleButton;
    if (pSVar6 != (SFButton_o *)0x0) {
      pUVar8 = (UnityEngine_Events_UnityEvent_o *)(pSVar6->fields).super.m_OnClick;
      pUVar4 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar8 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar8,pUVar4,(MethodInfo *)0x0);
        pSVar6 = (__this->fields)._playerNameButton;
        if ((pSVar6 != (SFButton_o *)0x0) &&
           (pUVar3 = (pSVar6->fields).super.m_OnClick,
           pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
          pSVar6 = (__this->fields)._playerNameButton;
          if (pSVar6 != (SFButton_o *)0x0) {
            pUVar8 = (UnityEngine_Events_UnityEvent_o *)(pSVar6->fields).super.m_OnClick;
            pUVar4 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar8 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar8,pUVar4,(MethodInfo *)0x0);
              pNVar5 = (__this->fields)._down;
              if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                          (pNVar5,StringLiteral_14092,StringLiteral_10922,(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._down;
                if ((pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
                   (pUVar3 = (pNVar5->fields).super.super.m_OnClick,
                   pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
                  pNVar5 = (__this->fields)._down;
                  if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    pUVar8 = (UnityEngine_Events_UnityEvent_o *)
                             (pNVar5->fields).super.super.m_OnClick;
                    pUVar4 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar8 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(pUVar8,pUVar4,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields)._up;
                      if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                  (pNVar5,StringLiteral_14092,StringLiteral_10923,(MethodInfo *)0x0)
                        ;
                        pNVar5 = (__this->fields)._up;
                        if ((pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
                           (pUVar3 = (pNVar5->fields).super.super.m_OnClick,
                           pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                    ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0
                                    );
                          pNVar5 = (__this->fields)._up;
                          if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                            pUVar8 = (UnityEngine_Events_UnityEvent_o *)
                                     (pNVar5->fields).super.super.m_OnClick;
                            pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                            UnityEngine_Events_UnityAction___ctor();
                            if (pUVar8 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (pUVar8,pUVar4,(MethodInfo *)0x0);
                              pNVar5 = (__this->fields)._kick;
                              if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                          (pNVar5,StringLiteral_14092,StringLiteral_10921,
                                           (MethodInfo *)0x0);
                                pNVar5 = (__this->fields)._kick;
                                if ((pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
                                   (pUVar3 = (pNVar5->fields).super.super.m_OnClick,
                                   pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                            ((UnityEngine_Events_UnityEventBase_o *)pUVar3,
                                             (MethodInfo *)0x0);
                                  pNVar5 = (__this->fields)._kick;
                                  if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                                    pUVar8 = (UnityEngine_Events_UnityEvent_o *)
                                             (pNVar5->fields).super.super.m_OnClick;
                                    pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                    UnityEngine_Events_UnityAction___ctor();
                                    if (pUVar8 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                      UnityEngine_Events_UnityEvent__AddListener
                                                (pUVar8,pUVar4,(MethodInfo *)0x0);
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

