// TypeDefIndex 348
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class MembersClanCellMember : MembersClanCell
// Fields:
//   private Action<IDGOGBNEGAM> GHKNFLCOBON; // 0x138
//   private Action<IDGOGBNEGAM> APMAMLEKGIM; // 0x140
//   private Action<IDGOGBNEGAM> EKPABHKOHLJ; // 0x148
//   private Action<RectTransform, string> JDMBKBAKOFA; // 0x150
//   private Image _background; // 0x158
//   private ResolutionImage _playerPointer; // 0x160
//   private LabelAlias _memberPlace; // 0x168
//   private ResolutionImage _leaderIcon; // 0x170
//   private ResolutionImage _status; // 0x178
//   private ResolutionImage _danIcon; // 0x180
//   private LabelAlias _danNumber; // 0x188
//   private SFButton _playerNameButton; // 0x190
//   private LabelAlias _playerNameText; // 0x198
//   private SFButton _roleButton; // 0x1A0
//   private LabelAlias _roleText; // 0x1A8
//   private LabelAlias _ratingNumber; // 0x1B0
//   private ResolutionButton _down; // 0x1B8
//   private ResolutionButton _up; // 0x1C0
//   private ResolutionButton _kick; // 0x1C8
//   private RectTransform _hintPos; // 0x1D0
//   private bool DGNFDMNJKJM; // 0x1D8
//   private IDGOGBNEGAM PAAIEEFEBKK; // 0x1E0

// ===== private void MLIDFAMHJKI()  [RVA 0x3354260]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$MLIDFAMHJKI @ RVA 0x3354260

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__MLIDFAMHJKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool_conflict bVar5;
  bool bVar6;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar7;
  UnityEngine_UI_Image_o *pUVar8;
  
  if ((DAT_04567a31 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567a31 = 1;
    method = extraout_x1;
  }
  pUVar8 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar8 = (__this->fields)._background;
    bVar5 = (__this->fields).DGNFDMNJKJM;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
      bVar6 = bVar5 != false;
      lVar1 = 0xe4;
      if (bVar6) {
        lVar1 = 0xd4;
      }
      lVar2 = 0xe0;
      if (bVar6) {
        lVar2 = 0xd0;
      }
      lVar3 = 0xdc;
      if (bVar6) {
        lVar3 = 0xcc;
      }
      pBVar7 = BHEDGAKGKPO_TypeInfo->static_fields;
      lVar4 = 0xd8;
      if (bVar6) {
        lVar4 = 200;
      }
                    /* WARNING: Could not recover jumptable at 0x03454350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                (*(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar4),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar3),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar2),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar1),pUVar8,
                 (pUVar8->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void add_OnRoleUp(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3354364]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$add_OnRoleUp @ RVA 0x3354364

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnRoleUp
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *a;
  
  if ((DAT_04567a32 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a32 = 1;
  }
  a = (__this->fields).APMAMLEKGIM;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(&(__this->fields).APMAMLEKGIM,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void remove_OnRoleDown(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3354418]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$remove_OnRoleDown @ RVA 0x3354418

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnRoleDown
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *source;
  
  if ((DAT_04567a33 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a33 = 1;
  }
  source = (__this->fields).EKPABHKOHLJ;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)
             FUN_01c07368(&(__this->fields).EKPABHKOHLJ,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== protected override void NOPJKPNLKNA(DPDNFOCBGGD DKMMBMBMJBO)  [RVA 0x33544CC]
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
    FUN_01bab630(&StringLiteral_10923/*"RaidMisc.button_up_pressed"*/);
    FUN_01bab630(&StringLiteral_10922/*"RaidMisc.button_down_pressed"*/);
    FUN_01bab630(&StringLiteral_10921/*"RaidMisc.button_cross_pressed"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_8942/*"MembersClanCellMember::SetInfo: _info == null"*/);
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
    UnityEngine_Debug__LogError(StringLiteral_8942/*"MembersClanCellMember::SetInfo: _info == null"*/,(MethodInfo *)0x0);
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
                          (pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10922/*"RaidMisc.button_down_pressed"*/,(MethodInfo *)0x0);
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
                                  (pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10923/*"RaidMisc.button_up_pressed"*/,(MethodInfo *)0x0)
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
                                          (pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10921/*"RaidMisc.button_cross_pressed"*/,
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


// ===== private void KPNGAJDJHBH()  [RVA 0x3354AF4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$KPNGAJDJHBH @ RVA 0x3354AF4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__KPNGAJDJHBH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  System_Action_IDGOGBNEGAM__o *pSVar1;
  
  pSVar1 = (__this->fields).EKPABHKOHLJ;
  if (pSVar1 != (System_Action_IDGOGBNEGAM__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).PAAIEEFEBKK,
               (pSVar1->fields).super.super.method);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OGCLDPJPKKO()  [RVA 0x3354B28]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$OGCLDPJPKKO @ RVA 0x3354B28

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__OGCLDPJPKKO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  IDGOGBNEGAM_o *pIVar2;
  undefined8 *puVar3;
  System_Action_RectTransform__string__o *pSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04567a35 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7112/*"HintOfficer"*/);
    FUN_01bab630(&StringLiteral_7111/*"HintNovice"*/);
    FUN_01bab630(&StringLiteral_7105/*"HintAdept"*/);
    auVar5 = FUN_01bab630(&StringLiteral_7109/*"HintLeader"*/);
    DAT_04567a35 = 1;
  }
  pIVar2 = (__this->fields).PAAIEEFEBKK;
  if (pIVar2 == (IDGOGBNEGAM_o *)0x0) goto LAB_03454c10;
  switch((pIVar2->fields).LLNMDPPIGLF) {
  case 1:
    puVar3 = &StringLiteral_7109/*"HintLeader"*/;
    break;
  case 2:
    puVar3 = &StringLiteral_7112/*"HintOfficer"*/;
    break;
  case 3:
    puVar3 = &StringLiteral_7105/*"HintAdept"*/;
    break;
  case 4:
    puVar3 = &StringLiteral_7111/*"HintNovice"*/;
    break;
  default:
    uVar1 = 0;
    goto LAB_03454be0;
  }
  uVar1 = *puVar3;
LAB_03454be0:
  pSVar4 = (__this->fields).JDMBKBAKOFA;
  if (pSVar4 != (System_Action_RectTransform__string__o *)0x0) {
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,(__this->fields)._hintPos,uVar1,
               (pSVar4->fields).super.super.method);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
LAB_03454c10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
}


// ===== public void .ctor()  [RVA 0x3354C14]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$.ctor @ RVA 0x3354C14

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  System_Action_IDGOGBNEGAM__o **ppSVar1;
  System_Action_RectTransform__string__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_IDGOGBNEGAM__o *pSVar3;
  System_Action_RectTransform__string__o *pSVar4;
  
  if ((DAT_04567a36 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_EOMPONIDJNB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_MLPBJFPCNAA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_OHPFGFKHBFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_OOKIPLBALJH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo);
    DAT_04567a36 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished == 0
     ) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields->
           __9__42_0;
  if (pSVar3 == (System_Action_IDGOGBNEGAM__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished ==
        0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo,method
                        );
    }
    pSVar3 = (System_Action_IDGOGBNEGAM__o *)thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields->
               __9__42_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) {
    (__this->fields).GHKNFLCOBON = pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).GHKNFLCOBON,pSVar3);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished ==
        0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields->
             __9__42_1;
    if (pSVar3 == (System_Action_IDGOGBNEGAM__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished
          == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields
                 ->__9__42_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    (__this->fields).APMAMLEKGIM = pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).APMAMLEKGIM,pSVar3);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished ==
        0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields->
             __9__42_2;
    if (pSVar3 == (System_Action_IDGOGBNEGAM__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished
          == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields
                 ->__9__42_2;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    (__this->fields).EKPABHKOHLJ = pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).EKPABHKOHLJ,pSVar3);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished ==
        0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields->
             __9__42_3;
    if (pSVar4 == (System_Action_RectTransform__string__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->_2).cctor_finished
          == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_RectTransform__string__o *)
               thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
      System_Action<object,_object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_<>c_TypeInfo->static_fields
                 ->__9__42_3;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    (__this->fields).JDMBKBAKOFA = pSVar4;
    thunk_FUN_01c20e04(&(__this->fields).JDMBKBAKOFA,pSVar4);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell___ctor
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnRoleUp(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3354ED4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$remove_OnRoleUp @ RVA 0x3354ED4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnRoleUp
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *source;
  
  if ((DAT_04567a37 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a37 = 1;
  }
  source = (__this->fields).APMAMLEKGIM;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)
             FUN_01c07368(&(__this->fields).APMAMLEKGIM,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void KHLMEONLGMD()  [RVA 0x3354F88]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$KHLMEONLGMD @ RVA 0x3354F88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__KHLMEONLGMD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  System_Action_IDGOGBNEGAM__o *pSVar1;
  
  pSVar1 = (__this->fields).APMAMLEKGIM;
  if (pSVar1 != (System_Action_IDGOGBNEGAM__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).PAAIEEFEBKK,
               (pSVar1->fields).super.super.method);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FDFHMHPOHKA()  [RVA 0x3354FBC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$FDFHMHPOHKA @ RVA 0x3354FBC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__FDFHMHPOHKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  undefined8 uVar2;
  IDGOGBNEGAM_o *pIVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04567a38 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9089/*"MiscSprites.indicatorRed"*/);
    FUN_01bab630(&StringLiteral_9085/*"MiscSprites.indicatorGreen"*/);
    auVar5 = FUN_01bab630(&StringLiteral_10932/*"RaidMisc.swords"*/);
    DAT_04567a38 = 1;
  }
  uVar2 = auVar5._0_8_;
  pIVar3 = (__this->fields).PAAIEEFEBKK;
  if (pIVar3 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = (pIVar3->fields).HHJIJKJCEOF;
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        __this_00 = (__this->fields)._status;
        uVar2 = 0;
        if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0345507c;
        puVar4 = &StringLiteral_9085/*"MiscSprites.indicatorGreen"*/;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        __this_00 = (__this->fields)._status;
        uVar2 = 0;
        if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0345507c;
        puVar4 = &StringLiteral_9089/*"MiscSprites.indicatorRed"*/;
      }
LAB_0345505c:
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (__this->fields)._status;
    uVar2 = 0;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      puVar4 = &StringLiteral_10932/*"RaidMisc.swords"*/;
      goto LAB_0345505c;
    }
  }
LAB_0345507c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar5._8_8_);
}


// ===== public void add_OnRoleDown(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3355080]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$add_OnRoleDown @ RVA 0x3355080

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnRoleDown
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *a;
  
  if ((DAT_04567a39 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a39 = 1;
  }
  a = (__this->fields).EKPABHKOHLJ;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(&(__this->fields).EKPABHKOHLJ,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void remove_OnKick(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3355134]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$remove_OnKick @ RVA 0x3355134

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnKick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *source;
  
  if ((DAT_04567a3a & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a3a = 1;
  }
  source = (__this->fields).GHKNFLCOBON;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)
             FUN_01c07368(&(__this->fields).GHKNFLCOBON,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void UpdateDanAndStatus()  [RVA 0x33551E8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$UpdateDanAndStatus @ RVA 0x33551E8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateDanAndStatus
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IDGOGBNEGAM_o *pIVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  pIVar2 = (__this->fields).PAAIEEFEBKK;
  if (pIVar2 != (IDGOGBNEGAM_o *)0x0) {
    pNVar3 = (__this->fields)._danNumber;
    pSVar1 = System_Int32__ToString((int)pIVar2 + 0x2c,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar1,(pNVar3->klass->vtable)._75_set_text.method);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__FDFHMHPOHKA(__this,method_00);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NLBPEFENJIK(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGNBJLLJHOC()  [RVA 0x33552F0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$KGNBJLLJHOC @ RVA 0x33552F0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  IDGOGBNEGAM_o *pIVar1;
  
  if ((DAT_04567a3b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567a3b = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pIVar1 = (__this->fields).PAAIEEFEBKK;
  if ((pIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (PEEIMHCMDND_o *)0x0)) {
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(pIVar1->fields).HLFBMBHOPMI,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnKick(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x335536C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$add_OnKick @ RVA 0x335536C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnKick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *a;
  
  if ((DAT_04567a3c & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a3c = 1;
  }
  a = (__this->fields).GHKNFLCOBON;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(&(__this->fields).GHKNFLCOBON,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void DNFIBMGKICI()  [RVA 0x3355420]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$DNFIBMGKICI @ RVA 0x3355420

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__DNFIBMGKICI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  System_Action_IDGOGBNEGAM__o *pSVar1;
  
  pSVar1 = (__this->fields).GHKNFLCOBON;
  if (pSVar1 != (System_Action_IDGOGBNEGAM__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).PAAIEEFEBKK,
               (pSVar1->fields).super.super.method);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnShowHintRole(Action<RectTransform, string> CJNHFNHJHPE)  [RVA 0x3355454]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$add_OnShowHintRole @ RVA 0x3355454

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnShowHintRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_RectTransform__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RectTransform__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RectTransform__string__o *pSVar5;
  System_Action_RectTransform__string__o *a;
  
  if ((DAT_04567a3d & 1) == 0) {
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    DAT_04567a3d = 1;
  }
  a = (__this->fields).JDMBKBAKOFA;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RectTransform,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RectTransform,_string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RectTransform__string__o *)
             FUN_01c07368(&(__this->fields).JDMBKBAKOFA,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void NLBPEFENJIK()  [RVA 0x3355244]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$NLBPEFENJIK @ RVA 0x3355244

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NLBPEFENJIK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  PLIIGOCLJDL_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  IDGOGBNEGAM_o *pIVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  
  if ((DAT_04567a3e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04567a3e = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  pIVar1 = (__this->fields).PAAIEEFEBKK;
  if (((pIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (PLIIGOCLJDL_o *)0x0)) &&
     (__this_01 = PLIIGOCLJDL__INONDJFCPHI(__this_00,(pIVar1->fields).HLFBMBHOPMI,(MethodInfo *)0x0)
     , __this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
    __this_02 = (__this->fields)._danIcon;
    CJNHFNHJHPE = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,0,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetEven(bool ECHNGCOEOEB)  [RVA 0x3355508]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$SetEven @ RVA 0x3355508

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__SetEven
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,bool ECHNGCOEOEB,
               MethodInfo *method)

{
  (__this->fields).DGNFDMNJKJM = ECHNGCOEOEB;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__MLIDFAMHJKI
            (__this,(MethodInfo *)(ulong)ECHNGCOEOEB);
  return;
}


// ===== public void remove_OnShowHintRole(Action<RectTransform, string> CJNHFNHJHPE)  [RVA 0x3355514]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$remove_OnShowHintRole @ RVA 0x3355514

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnShowHintRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_RectTransform__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RectTransform__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RectTransform__string__o *pSVar5;
  System_Action_RectTransform__string__o *source;
  
  if ((DAT_04567a3f & 1) == 0) {
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    DAT_04567a3f = 1;
  }
  source = (__this->fields).JDMBKBAKOFA;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RectTransform,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RectTransform,_string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RectTransform__string__o *)
             FUN_01c07368(&(__this->fields).JDMBKBAKOFA,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void UpdateAll()  [RVA 0x33548B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$UpdateAll @ RVA 0x33548B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateAll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  int iVar1;
  int32_t OJDBABKBAFA;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IDGOGBNEGAM_o *pIVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  
  if ((DAT_04567a40 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04567a40 = 1;
  }
  pIVar6 = (__this->fields).PAAIEEFEBKK;
  if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
    pSVar2 = System_Int32__ToString((int)pIVar6 + 0x14,(MethodInfo *)0x0);
    pNVar7 = (__this->fields)._memberPlace;
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
      pIVar6 = (__this->fields).PAAIEEFEBKK;
      if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
         (pNVar7 = (__this->fields)._memberPlace, pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        iVar1 = (pIVar6->fields).LLNMDPPIGLF;
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar3,iVar1 != 1,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._leaderIcon;
          if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,iVar1 == 1,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__FDFHMHPOHKA(__this,method_00);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NLBPEFENJIK(__this,method_01);
            pIVar6 = (__this->fields).PAAIEEFEBKK;
            if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
              pNVar7 = (__this->fields)._danNumber;
              pSVar2 = System_Int32__ToString((int)pIVar6 + 0x2c,(MethodInfo *)0x0);
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                          (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
                pIVar6 = (__this->fields).PAAIEEFEBKK;
                if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                   (pNVar7 = (__this->fields)._playerNameText,
                   pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                  (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                            (pNVar7,(pIVar6->fields).JIJLBFGKNJK,
                             (pNVar7->klass->vtable)._75_set_text.method);
                  pIVar6 = (__this->fields).PAAIEEFEBKK;
                  if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
                    pNVar7 = (__this->fields)._ratingNumber;
                    OJDBABKBAFA = (pIVar6->fields).HHOPNIKFJNE;
                    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar2 = LPGPNBGHDBD__LLOLNNDDPFM(OJDBABKBAFA,(MethodInfo *)0x0);
                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                                (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
                      pIVar6 = (__this->fields).PAAIEEFEBKK;
                      if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
                        pNVar7 = (__this->fields)._roleText;
                        pSVar2 = IDGOGBNEGAM__NPAOCMPEILP
                                           ((pIVar6->fields).LLNMDPPIGLF,(MethodInfo *)0x0);
                        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar7,pSVar2,(MethodInfo *)0x0);
                          pNVar5 = (__this->fields)._kick;
                          if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                            pUVar3 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0)
                            ;
                            pIVar6 = (__this->fields).PAAIEEFEBKK;
                            if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                               (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                              UnityEngine_GameObject__SetActive
                                        (pUVar3,(pIVar6->fields).GDFDBJCDBJE,(MethodInfo *)0x0);
                              pNVar5 = (__this->fields)._up;
                              if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                                pUVar3 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pNVar5,
                                                    (MethodInfo *)0x0);
                                pIVar6 = (__this->fields).PAAIEEFEBKK;
                                if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                                   (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive
                                            (pUVar3,(pIVar6->fields).KIKDLMBJEEG,(MethodInfo *)0x0);
                                  pNVar5 = (__this->fields)._down;
                                  if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                                    pUVar3 = UnityEngine_Component__get_gameObject
                                                       ((UnityEngine_Component_o *)pNVar5,
                                                        (MethodInfo *)0x0);
                                    pIVar6 = (__this->fields).PAAIEEFEBKK;
                                    if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                                       (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                                      UnityEngine_GameObject__SetActive
                                                (pUVar3,(pIVar6->fields).PGDEOIHFHCI,
                                                 (MethodInfo *)0x0);
                                      pNVar4 = (__this->fields)._playerPointer;
                                      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                                        pUVar3 = UnityEngine_Component__get_gameObject
                                                           ((UnityEngine_Component_o *)pNVar4,
                                                            (MethodInfo *)0x0);
                                        pIVar6 = (__this->fields).PAAIEEFEBKK;
                                        if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                                           (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__SetActive
                                                    (pUVar3,(pIVar6->fields).KGCEKHGKGFP,
                                                     (MethodInfo *)0x0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

