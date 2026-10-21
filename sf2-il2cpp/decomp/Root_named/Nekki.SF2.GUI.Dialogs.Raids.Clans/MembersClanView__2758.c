// TypeDefIndex 2758
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class MembersClanView : TabView
// Fields:
//   private LabelButton _raidButton; // 0x28
//   private LabelButton _backButton; // 0x30
//   private LabelButton _joinButton; // 0x38
//   private LabelButton _leaveButton; // 0x40
//   private LabelButton _disbandButton; // 0x48
//   private MembersClanTable _tableMembers; // 0x50
//   private MembersClanCellMember _cellMemberPrefab; // 0x58
//   private MembersClanCellSeparator _cellSeparatorPrefab; // 0x60
//   private SimpleScroll _scroll; // 0x68
//   private HintBoxAutoKilled _hintPrefab; // 0x70
//   private OJEHKJHEBID FBILHKCKHEJ; // 0x78
//   private long AMEAGHFFDFI; // 0x80
//   private IDGOGBNEGAM FANGHLLLOLB; // 0x88
//   private List<SFButton> EHOJEDDANJH; // 0x90
//   private bool EDMGOFMIPEG; // 0x98

// ===== private void FCNPPKKBHEN()  [RVA 0x33F8928]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FCNPPKKBHEN @ RVA 0x33F8928

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FCNPPKKBHEN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *pNVar1;
  System_Action_IDGOGBNEGAM__o *pSVar2;
  System_Action_RectTransform__string__o *pSVar3;
  
  if ((DAT_04567fa0 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_FBMBIMMAPCI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_FLKLDPLINHL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_LHHLFBBBJLD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_NDFEHOOIKHC__);
    DAT_04567fa0 = 1;
  }
  pNVar1 = (__this->fields)._tableMembers;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__Init
              (pNVar1,(__this->fields)._scroll,(__this->fields)._cellMemberPrefab,
               (__this->fields)._cellSeparatorPrefab,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._tableMembers;
    pSVar2 = (System_Action_IDGOGBNEGAM__o *)thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnKick
                (pNVar1,pSVar2,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._tableMembers;
      pSVar2 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnKick
                  (pNVar1,pSVar2,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._tableMembers;
        pSVar2 = (System_Action_IDGOGBNEGAM__o *)
                 thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleUp
                    (pNVar1,pSVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._tableMembers;
          pSVar2 = (System_Action_IDGOGBNEGAM__o *)
                   thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnRoleUp
                      (pNVar1,pSVar2,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._tableMembers;
            pSVar2 = (System_Action_IDGOGBNEGAM__o *)
                     thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleDown
                        (pNVar1,pSVar2,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._tableMembers;
              pSVar2 = (System_Action_IDGOGBNEGAM__o *)
                       thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
              System_Action<object>___ctor();
              if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnRoleDown
                          (pNVar1,pSVar2,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._tableMembers;
                pSVar3 = (System_Action_RectTransform__string__o *)
                         thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
                System_Action<object,_object>___ctor();
                if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnShowHintRole
                            (pNVar1,pSVar3,(MethodInfo *)0x0);
                  pNVar1 = (__this->fields)._tableMembers;
                  pSVar3 = (System_Action_RectTransform__string__o *)
                           thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
                  System_Action<object,_object>___ctor();
                  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnShowHintRole
                              (pNVar1,pSVar3,(MethodInfo *)0x0);
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
  FUN_01bab8c8();
}


// ===== private void EFBLIIKCJAI()  [RVA 0x33F8B8C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$EFBLIIKCJAI @ RVA 0x33F8B8C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__EFBLIIKCJAI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  DialogsOpener__OCOOMCMIGJL((Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x33F8B98]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$.ctor @ RVA 0x33F8B98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SFButton__o *__this_00;
  System_Collections_Generic_List_SFButton__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567fa1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<SFButton>_TypeInfo);
                    /* try { // try from 034f8be0 to 035f8ceb has its CatchHandler @ 034f8be0
                       catch() { ... } // from try @ 034f8be0 with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8d90 with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8e74 with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8e7c with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8f30 with catch @ 034f8be0 */
    DAT_04567fa1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_SFButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<SFButton>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<SFButton>__ctor__);
  ppSVar1 = &(__this->fields).EHOJEDDANJH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void ELPDKEKBAMO(object IMMNELPBGIF)  [RVA 0x33F8C20]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$ELPDKEKBAMO @ RVA 0x33F8C20

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__ELPDKEKBAMO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  Il2CppObject *extraout_x1;
  IDGOGBNEGAM_o **ppIVar1;
  
  if ((DAT_04567fa2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567fa2 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  ppIVar1 = &(__this->fields).FANGHLLLOLB;
  if (*ppIVar1 == (IDGOGBNEGAM_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((*ppIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (RaidClansManager_o *)0x0)) {
    RaidClansManager__ELPDKEKBAMO
              (__this_00,((*ppIVar1)->fields).HLFBMBHOPMI,(System_Action_KEFHDOHHHML__o *)0x0,
               (MethodInfo *)0x0);
    *ppIVar1 = (IDGOGBNEGAM_o *)0x0;
    thunk_FUN_01c20e04(ppIVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OALBMLJPCKA()  [RVA 0x33F8CB8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$OALBMLJPCKA @ RVA 0x33F8CB8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__OALBMLJPCKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04567fa3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_BABOCPBBDJP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_DIMGGKIKCDB__);
                    /* try { // try from 034f8cec to 035f8d13 has its CatchHandler @ 034f8e9c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_EFBLIIKCJAI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_FGFAPJGPNMA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_LLAJCEMDFEO__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567fa3 = 1;
  }
  pLVar3 = (__this->fields)._backButton;
  if ((pLVar3 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar3 = (__this->fields)._backButton;
    if (pLVar3 != (LabelButton_o *)0x0) {
                    /* try { // try from 034f8d48 to 035f8d6f has its CatchHandler @ 034f8e98 */
      pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 034f8d88 to 035f8d8f has its CatchHandler @ 034f8e94 */
        pLVar3 = (__this->fields)._leaveButton;
                    /* try { // try from 034f8d90 to 035f8e67 has its CatchHandler @ 034f8be0 */
        if ((pLVar3 != (LabelButton_o *)0x0) &&
           (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
           pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
          pLVar3 = (__this->fields)._leaveButton;
          if (pLVar3 != (LabelButton_o *)0x0) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick
            ;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
              pLVar3 = (__this->fields)._disbandButton;
              if ((pLVar3 != (LabelButton_o *)0x0) &&
                 (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
                 pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                UnityEngine_Events_UnityEventBase__RemoveAllListeners
                          ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
                pLVar3 = (__this->fields)._disbandButton;
                if (pLVar3 != (LabelButton_o *)0x0) {
                  pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                           (pLVar3->fields).super.super.super.m_OnClick;
                  pUVar2 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                    pLVar3 = (__this->fields)._joinButton;
                    if ((pLVar3 != (LabelButton_o *)0x0) &&
                       (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
                       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
                      pLVar3 = (__this->fields)._joinButton;
                      if (pLVar3 != (LabelButton_o *)0x0) {
                    /* try { // try from 034f8e68 to 035f8e6b has its CatchHandler @ 034f8e90 */
                        pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                 (pLVar3->fields).super.super.super.m_OnClick;
                    /* try { // try from 034f8e6c to 035f8e6f has its CatchHandler @ 034f8e8c */
                    /* try { // try from 034f8e70 to 035f8e73 has its CatchHandler @ 034f8e88 */
                        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 034f8e74 to 035f8e77 has its CatchHandler @ 034f8be0 */
                    /* try { // try from 034f8e78 to 035f8e7b has its CatchHandler @ 034f8e84 */
                    /* try { // try from 034f8e7c to 035f8eab has its CatchHandler @ 034f8be0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8e78 with catch @ 034f8e84
                        */
                        UnityEngine_Events_UnityAction___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8e70 with catch @ 034f8e88
                        */
                        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8e6c with catch @ 034f8e8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8e68 with catch @ 034f8e90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8d88 with catch @ 034f8e94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8d48 with catch @ 034f8e98
                        */
                          UnityEngine_Events_UnityEvent__AddListener
                                    (pUVar4,pUVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f8cec with catch @ 034f8e9c
                        */
                          pLVar3 = (__this->fields)._raidButton;
                          if ((pLVar3 != (LabelButton_o *)0x0) &&
                             (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
                             pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    /* try { // try from 034f8eac to 035f8eaf has its CatchHandler @ 034f8ec8 */
                            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                      ((UnityEngine_Events_UnityEventBase_o *)pUVar1,
                                       (MethodInfo *)0x0);
                            pLVar3 = (__this->fields)._raidButton;
                            if (pLVar3 != (LabelButton_o *)0x0) {
                              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                       (pLVar3->fields).super.super.super.m_OnClick;
                    /* catch() { ... } // from try @ 034f8eac with catch @ 034f8ec8 */
                              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar4,pUVar2,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BNMHGMKOCNJ(MGDJPGGPDJI LCOGPHINKHN)  [RVA 0x33F8F08]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$BNMHGMKOCNJ @ RVA 0x33F8F08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__BNMHGMKOCNJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               MGDJPGGPDJI_o *LCOGPHINKHN,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034f8f08 to 035f8f2f has its CatchHandler @ 034f8f44 */
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    if (LCOGPHINKHN == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034f8f30 to 035f8f3b has its CatchHandler @ 034f8be0 */
                    /* try { // try from 034f8f3c to 035f8f43 has its CatchHandler @ 034f8f44 */
    if (((LCOGPHINKHN->fields).ANAJGHJEEOC == (__this->fields).AMEAGHFFDFI) &&
       ((LCOGPHINKHN->fields).BDPMJNBHKIJ == 1)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034f8f08 with catch @ 034f8f44
                       catch(type#2 @ 00000000) { ... } // from try @ 034f8f3c with catch @ 034f8f44
                        */
      DialogsOpener__PPDAJIKOKBE(false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private void DILNCPJMEGA(object IMMNELPBGIF)  [RVA 0x33F8F68]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$DILNCPJMEGA @ RVA 0x33F8F68

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__DILNCPJMEGA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  DialogsManager_o *__this_00;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  OJEHKJHEBID_o *pOVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04567fa4 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17773/*"dlgClanDismissed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567fa4 = 1;
  }
  bVar3 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if ((bVar3) && ((__this->fields).EDMGOFMIPEG == false)) {
    return;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    DialogsOpener__DDOCEEFBIGC((Il2CppObject *)0x0,(MethodInfo *)0x0);
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    pOVar7 = (__this->fields).FBILHKCKHEJ;
    if ((pOVar7 != (OJEHKJHEBID_o *)0x0) && (lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar5 + 0x20) = (pOVar7->fields).GJNOEAKNMOG;
      thunk_FUN_01c20e04();
      uVar2 = StringLiteral_17773/*"dlgClanDismissed"*/;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar8 = pIVar4->klass;
        uVar1._0_1_ = (pIVar8->_2).rank;
        uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
              goto LAB_034f90f4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f90f4:
        EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
        DialogsOpener__JNDPLPKDPCP
                  (StringLiteral_17756/*"dlgAlertTitle"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                   (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,false,true,true,
                   true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHHLFBBBJLD(RectTransform FPANKOCKNJA, string KLEGNFLIAPC)  [RVA 0x33F9170]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$LHHLFBBBJLD @ RVA 0x33F9170

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               UnityEngine_RectTransform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04567fa5 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04567fa5 = 1;
  }
  pNVar1 = (__this->fields)._hintPrefab;
  if (pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
    DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (FPANKOCKNJA != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)FPANKOCKNJA,(MethodInfo *)0x0);
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                         (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                          DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                          (MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(pNVar1,KLEGNFLIAPC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DIMGGKIKCDB()  [RVA 0x33F9290]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$DIMGGKIKCDB @ RVA 0x33F9290

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__DIMGGKIKCDB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  TabView__KGHLJNMCILN((TabView_o *)__this,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== private void FBMBIMMAPCI(IDGOGBNEGAM IMMNELPBGIF)  [RVA 0x33F929C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FBMBIMMAPCI @ RVA 0x33F929C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FBMBIMMAPCI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  System_String_o *KHPLLCKLJKO;
  undefined8 uVar5;
  undefined8 uVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *EHNFGMGKCHO;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar10;
  LabelButton_o *__this_00;
  Il2CppClass *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *KCFLBKINDFM;
  IDGOGBNEGAM_o **ppIVar14;
  
  if ((DAT_04567fa6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_CKFBJDMPHLA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_ELPDKEKBAMO__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17330/*"confirmRoleChange"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17815/*"dlgPromotetoLeader"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_20441/*"rateDlgBtn1Text"*/);
    DAT_04567fa6 = 1;
  }
  ppIVar14 = &(__this->fields).FANGHLLLOLB;
  *ppIVar14 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppIVar14,IMMNELPBGIF);
  KCFLBKINDFM = StringLiteral_9679/*"OK"*/;
  KHPLLCKLJKO = StringLiteral_3640/*"CANCEL"*/;
  if (*ppIVar14 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = ((*ppIVar14)->fields).LLNMDPPIGLF;
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar8 = FUN_01bab718(string___TypeInfo,1);
    if ((*ppIVar14 != (IDGOGBNEGAM_o *)0x0) && (lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar8 + 0x20) = ((*ppIVar14)->fields).JIJLBFGKNJK;
      thunk_FUN_01c20e04();
      uVar6 = StringLiteral_17815/*"dlgPromotetoLeader"*/;
      uVar5 = StringLiteral_17330/*"confirmRoleChange"*/;
      if (pIVar7 != (Il2CppObject *)0x0) {
        if (iVar1 == 2) {
          pIVar11 = pIVar7->klass;
          uVar3._0_1_ = (pIVar11->_2).rank;
          uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar3;
          if (uVar12 != 0) {
            piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar11->vtable + (*piVar13 + 0xc);
                goto LAB_034f94d4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f94d4:
          EHNFGMGKCHO = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar6,lVar8,pVVar9->method);
          KCFLBKINDFM = StringLiteral_20441/*"rateDlgBtn1Text"*/;
        }
        else {
          pIVar11 = pIVar7->klass;
          uVar4._0_1_ = (pIVar11->_2).rank;
          uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar4;
          if (uVar12 != 0) {
            piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar11->vtable + (*piVar13 + 0xc);
                goto LAB_034f9514;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f9514:
          EHNFGMGKCHO = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,lVar8,pVVar9->method);
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        pNVar10 = DialogsOpener__JNDPLPKDPCP
                            (StringLiteral_17850/*"dlgWarning"*/,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,
                             (System_Action_object__o *)0x0,0,5,false,false,StringLiteral_1/*""*/,false,
                             true,true,true,(MethodInfo *)0x0);
        if (pNVar10 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
          bVar2 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
          if (((pNVar10->klass->_2).naturalAligment < bVar2) ||
             ((pNVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
          __this_00 = (pNVar10->fields)._btnOK;
          if (__this_00 != (LabelButton_o *)0x0) {
            SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MMFCCGFDDPJ(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x33F960C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$MMFCCGFDDPJ @ RVA 0x33F960C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__MMFCCGFDDPJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  DialogsManager_o *__this_00;
  
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).EDMGOFMIPEG == false)) {
    return;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    DialogsOpener__KDKDACICNNM((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ADMKHKNFDHC(object IMMNELPBGIF)  [RVA 0x33F9654]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$ADMKHKNFDHC @ RVA 0x33F9654

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__ADMKHKNFDHC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  Il2CppObject *extraout_x1;
  IDGOGBNEGAM_o **ppIVar1;
  
  if ((DAT_04567fa7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567fa7 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  ppIVar1 = &(__this->fields).FANGHLLLOLB;
  if (*ppIVar1 == (IDGOGBNEGAM_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((*ppIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (RaidClansManager_o *)0x0)) {
    RaidClansManager__EHKLFIEEDFN
              (__this_00,((*ppIVar1)->fields).HLFBMBHOPMI,(System_Action_KEFHDOHHHML__o *)0x0,
               (MethodInfo *)0x0);
    *ppIVar1 = (IDGOGBNEGAM_o *)0x0;
    thunk_FUN_01c20e04(ppIVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FGFAPJGPNMA()  [RVA 0x33F96EC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FGFAPJGPNMA @ RVA 0x33F96EC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FGFAPJGPNMA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  System_Action_object__o *IELDNEAAPBE;
  LabelButton_o *__this_00;
  
  if ((DAT_04567fa8 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_EMCDMBIKLNE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17772/*"dlgClanDestroy"*/);
    FUN_01bab630(&StringLiteral_16811/*"btnDisband"*/);
    FUN_01bab630(&StringLiteral_17301/*"compareCloseBtn"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567fa8 = 1;
  }
  pNVar2 = DialogsOpener__JNDPLPKDPCP
                     (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17772/*"dlgClanDestroy"*/,StringLiteral_16811/*"btnDisband"*/,
                      StringLiteral_17301/*"compareCloseBtn"*/,(System_Action_object__o *)0x0,1,0,false,false,
                      StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
    if (((pNVar2->klass->_2).naturalAligment < bVar1) ||
       ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this_00 = (pNVar2->fields)._btnOK;
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (LabelButton_o *)0x0) {
      SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(long FKIGDGJPIAC, RectTransform FDLJCNLNCOC)  [RVA 0x33F9884]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$Init @ RVA 0x33F9884

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,int64_t FKIGDGJPIAC,
               UnityEngine_RectTransform_o *FDLJCNLNCOC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this_00;
  RaidClansManager_o *__this_01;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567fa9 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_BNMHGMKOCNJ__);
    DAT_04567fa9 = 1;
  }
  __this_00 = (__this->fields)._tableMembers;
  (__this->fields).AMEAGHFFDFI = FKIGDGJPIAC;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__Init
              (__this_00,(__this->fields)._scroll,(__this->fields)._cellMemberPrefab,
               (__this->fields)._cellSeparatorPrefab,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FCNPPKKBHEN(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__OALBMLJPCKA(__this,method_01);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_MGDJPGGPDJI__o *)
                  thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (RaidClansManager_o *)0x0) {
      RaidClansManager__DEGNMFHGAFB(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
      (__this->fields).EDMGOFMIPEG = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EMCDMBIKLNE(object IMMNELPBGIF)  [RVA 0x33F9988]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$EMCDMBIKLNE @ RVA 0x33F9988

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__EMCDMBIKLNE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *DJLAJBEHLKN;
  
  if ((DAT_04567faa & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_DILNCPJMEGA__);
    DAT_04567faa = 1;
  }
  DialogsOpener__HMBOKGADCGK((MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  DJLAJBEHLKN = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidClansManager_o *)0x0) {
    RaidClansManager__JODGPLBHHIA(__this_00,DJLAJBEHLKN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MCDHOIOBGFP(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x33F9A50]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$MCDHOIOBGFP @ RVA 0x33F9A50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__MCDHOIOBGFP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  DialogsManager_o *__this_00;
  RaidClansManager_o *pEVar2;
  
  if ((DAT_04567fab & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567fab = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (pEVar2 != (RaidClansManager_o *)0x0) {
      RaidClansManager__FOJEJJGMIGP(pEVar2,0,(MethodInfo *)0x0);
      pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (pEVar2 != (RaidClansManager_o *)0x0) {
        RaidClansManager__HINLKLNCNDB(pEVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CKFBJDMPHLA(object IMMNELPBGIF)  [RVA 0x33F9AFC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$CKFBJDMPHLA @ RVA 0x33F9AFC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__CKFBJDMPHLA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *value;
  LKJJCAEOJBG_o *__this_00;
  RaidClansManager_o *__this_01;
  Il2CppObject *extraout_x1;
  IDGOGBNEGAM_o **ppIVar3;
  int local_34;
  
  if ((DAT_04567fac & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KCFAKHLDKJM_var);
    FUN_01bab630(&KCFAKHLDKJM_TypeInfo);
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567fac = 1;
    IMMNELPBGIF = extraout_x1;
  }
  handle = KCFAKHLDKJM_var;
  ppIVar3 = &(__this->fields).FANGHLLLOLB;
  if (*ppIVar3 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = ((*ppIVar3)->fields).LLNMDPPIGLF + -1;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,IMMNELPBGIF);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_34 = iVar1;
    value = (Il2CppObject *)thunk_FUN_01bda448(KCFAKHLDKJM_TypeInfo,&local_34);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    bVar2 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (LKJJCAEOJBG_o *)thunk_FUN_01bda818(LKJJCAEOJBG_TypeInfo);
      LKJJCAEOJBG___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (LKJJCAEOJBG_o *)0x0) {
LAB_034f9c88:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).IGBAAAHPLAA = iVar1;
      if (*ppIVar3 == (IDGOGBNEGAM_o *)0x0) goto LAB_034f9c88;
      (__this_00->fields).MKGNDFBBANC = ((*ppIVar3)->fields).HLFBMBHOPMI;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (__this_01 == (RaidClansManager_o *)0x0) goto LAB_034f9c88;
      RaidClansManager__HHJEKOPMOKB
                (__this_01,__this_00,(System_Action_KEFHDOHHHML__o *)0x0,(MethodInfo *)0x0);
    }
    *ppIVar3 = (IDGOGBNEGAM_o *)0x0;
    thunk_FUN_01c20e04(ppIVar3,0);
  }
  return;
}


// ===== private void MPJCLFBEOGE(object IMMNELPBGIF)  [RVA 0x33F9C8C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$MPJCLFBEOGE @ RVA 0x33F9C8C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__MPJCLFBEOGE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *HNAFJMEJKEK;
  
  if ((DAT_04567fad & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_MMFCCGFDDPJ__);
    DAT_04567fad = 1;
  }
  DialogsOpener__HMBOKGADCGK((MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  HNAFJMEJKEK = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidClansManager_o *)0x0) {
    RaidClansManager__NELJDINAIOB(__this_00,HNAFJMEJKEK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDFEHOOIKHC(IDGOGBNEGAM IMMNELPBGIF)  [RVA 0x33F9D54]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$NDFEHOOIKHC @ RVA 0x33F9D54

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__NDFEHOOIKHC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  System_Action_object__o *IELDNEAAPBE;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  LabelButton_o *__this_00;
  IDGOGBNEGAM_o **ppIVar11;
  
  if ((DAT_04567fae & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_EDGHMNHEFKD__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17330/*"confirmRoleChange"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567fae = 1;
  }
  ppIVar11 = &(__this->fields).FANGHLLLOLB;
  *ppIVar11 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppIVar11,IMMNELPBGIF);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = FUN_01bab718(string___TypeInfo,1);
  if ((*ppIVar11 != (IDGOGBNEGAM_o *)0x0) && (lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(System_String_o **)(lVar5 + 0x20) = ((*ppIVar11)->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    uVar3 = StringLiteral_17330/*"confirmRoleChange"*/;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar4->klass;
      uVar2._0_1_ = (pIVar8->_2).rank;
      uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
            goto LAB_034f9efc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f9efc:
      EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar3,lVar5,pVVar6->method);
      pNVar7 = DialogsOpener__JNDPLPKDPCP
                         (StringLiteral_17850/*"dlgWarning"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,
                          (System_Action_object__o *)0x0,0,5,false,false,StringLiteral_1/*""*/,false,true,
                          true,true,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
        if (((pNVar7->klass->_2).naturalAligment < bVar1) ||
           ((pNVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_00 = (pNVar7->fields)._btnOK;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_00 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x33FA000]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$OnDestroy @ RVA 0x33FA000

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE;
  System_Action_IDGOGBNEGAM__o *pSVar1;
  System_Action_RectTransform__string__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *pNVar2;
  
  if ((DAT_04567faf & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_BNMHGMKOCNJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_FBMBIMMAPCI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_FLKLDPLINHL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_LHHLFBBBJLD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_NDFEHOOIKHC__);
    DAT_04567faf = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_MGDJPGGPDJI__o *)
                thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidClansManager_o *)0x0) {
    RaidClansManager__BLGMCMLEBDI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._tableMembers;
    pSVar1 = (System_Action_IDGOGBNEGAM__o *)thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnKick
                (pNVar2,pSVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._tableMembers;
      pSVar1 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleUp
                  (pNVar2,pSVar1,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._tableMembers;
        pSVar1 = (System_Action_IDGOGBNEGAM__o *)
                 thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleDown
                    (pNVar2,pSVar1,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._tableMembers;
          CJNHFNHJHPE_00 =
               (System_Action_RectTransform__string__o *)
               thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
          System_Action<object,_object>___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnShowHintRole
                      (pNVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            UnityEngine_EventSystems_UIBehaviour__OnDestroy
                      ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLKLDPLINHL(IDGOGBNEGAM IMMNELPBGIF)  [RVA 0x33FA214]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FLKLDPLINHL @ RVA 0x33FA214

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FLKLDPLINHL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  System_Action_object__o *IELDNEAAPBE;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  LabelButton_o *__this_00;
  IDGOGBNEGAM_o **ppIVar11;
  
  if ((DAT_04567fb0 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_ADMKHKNFDHC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17326/*"confirmKick"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567fb0 = 1;
  }
  ppIVar11 = &(__this->fields).FANGHLLLOLB;
  *ppIVar11 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppIVar11,IMMNELPBGIF);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = FUN_01bab718(string___TypeInfo,1);
  if ((*ppIVar11 != (IDGOGBNEGAM_o *)0x0) && (lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(System_String_o **)(lVar5 + 0x20) = ((*ppIVar11)->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    uVar3 = StringLiteral_17326/*"confirmKick"*/;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar4->klass;
      uVar2._0_1_ = (pIVar8->_2).rank;
      uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
            goto LAB_034fa3bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034fa3bc:
      EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar3,lVar5,pVVar6->method);
      pNVar7 = DialogsOpener__JNDPLPKDPCP
                         (StringLiteral_17850/*"dlgWarning"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,
                          (System_Action_object__o *)0x0,0,5,false,false,StringLiteral_1/*""*/,false,true,
                          true,true,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
        if (((pNVar7->klass->_2).naturalAligment < bVar1) ||
           ((pNVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_00 = (pNVar7->fields)._btnOK;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_00 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PBDGFBENHDK()  [RVA 0x33FA4C0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$PBDGFBENHDK @ RVA 0x33FA4C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__PBDGFBENHDK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_List_SFButton__o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  PlayerData_o *pEVar10;
  RaidClansManager_o *pEVar11;
  ClanRaidsController_o *__this_00;
  RaidManager_o *pCVar12;
  MGDJPGGPDJI_o *pMVar13;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *pNVar14;
  LabelButton_o *pLVar15;
  SFButton_array *pSVar16;
  OJEHKJHEBID_o *pOVar17;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar18;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567fb1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SFButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SFButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SFButton>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&StringLiteral_8373/*"LeaveClan"*/);
    FUN_01bab630(&StringLiteral_5406/*"DisbandClan"*/);
    FUN_01bab630(&StringLiteral_8271/*"KickPlayers"*/);
    FUN_01bab630(&StringLiteral_4258/*"ChangeRole"*/);
    FUN_01bab630(&StringLiteral_4855/*"CreateClanRaid"*/);
    DAT_04567fb1 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar8 = (__this->fields).EHOJEDDANJH;
  if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
             Method_System_Collections_Generic_List<SFButton>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_80,
                            Method_System_Collections_Generic_List_Enumerator<SFButton>_MoveNext__),
        bVar4) {
    if ((UnityEngine_Component_o *)local_80.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar9 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)local_80.fields._current,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<SFButton>_Dispose__);
  pSVar8 = (__this->fields).EHOJEDDANJH;
  if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
  iVar7 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
  if (0 < iVar7) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar7,(MethodInfo *)0x0);
    pSVar8 = (__this->fields).EHOJEDDANJH;
    if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
  }
  lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
  pLVar15 = (__this->fields)._backButton;
  pSVar16 = (pSVar8->fields)._items;
  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
  if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
  uVar2 = (pSVar8->fields)._size;
  if (uVar2 < (uint)pSVar16->max_length) {
    (pSVar8->fields)._size = uVar2 + 1;
    pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
    thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar10 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar10 == (PlayerData_o *)0x0) goto LAB_034faad4;
  bVar4 = PlayerData__CLJIMCDAEKO(pEVar10,(MethodInfo *)0x0);
  if (bVar4) {
    bVar4 = KFCFGKEHPNK__KAFBLLCOIFP((__this->fields).FBILHKCKHEJ,(MethodInfo *)0x0);
    if (bVar4) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if ((pEVar11 == (RaidClansManager_o *)0x0) ||
         (__this_00 = (pEVar11->fields).GMNJEBCECDA, __this_00 == (ClanRaidsController_o *)0x0))
      goto LAB_034faad4;
      bVar4 = ClanRaidsController__HOMIFFIACAC(__this_00,(MethodInfo *)0x0);
      pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if ((pEVar11 == (RaidClansManager_o *)0x0) ||
         ((pOVar17 = (pEVar11->fields).MICFEIBNOLM, pOVar17 == (OJEHKJHEBID_o *)0x0 ||
          (pGVar18 = (pOVar17->fields).MABPCBMOECE,
          pGVar18 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0))))
      goto LAB_034faad4;
      iVar1 = (pGVar18->fields).count;
      bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                        ((__this->fields).FBILHKCKHEJ,StringLiteral_5406/*"DisbandClan"*/,
                         (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
      if ((iVar1 == 1) && (bVar5)) {
        pSVar8 = (__this->fields).EHOJEDDANJH;
        if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
        pLVar15 = (__this->fields)._disbandButton;
        pSVar16 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pSVar16->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
          thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                          ((__this->fields).FBILHKCKHEJ,StringLiteral_8373/*"LeaveClan"*/,
                           (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
        if (bVar5) {
          pSVar8 = (__this->fields).EHOJEDDANJH;
          if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
          pLVar15 = (__this->fields)._leaveButton;
          pSVar16 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar16->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
            thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          iVar7 = 2;
          if (!bVar4) {
            iVar7 = 0;
          }
          LJLLAKHOFFF__JAEOMHIAHJB
                    ((UnityEngine_UI_Button_o *)(__this->fields)._leaveButton,iVar7,true,
                     (MethodInfo *)0x0);
        }
      }
      bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                        ((__this->fields).FBILHKCKHEJ,StringLiteral_4855/*"CreateClanRaid"*/,
                         (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
      if (bVar5) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar10 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar10 == (PlayerData_o *)0x0) goto LAB_034faad4;
        iVar7 = PlayerData__NJNJAECEPCP(pEVar10,(MethodInfo *)0x0);
        if (iVar7 != 3) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar12 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
          if (pCVar12 == (RaidManager_o *)0x0) goto LAB_034faad4;
          if (!bVar4 && (pCVar12->fields).CMDMECMFCIK == 0) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar12 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
            if (pCVar12 == (RaidManager_o *)0x0) goto LAB_034faad4;
            bVar4 = RaidManager__BHHNJDDGDHF(pCVar12,(MethodInfo *)0x0);
            if (!bVar4) {
              pSVar8 = (__this->fields).EHOJEDDANJH;
              if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
              pLVar15 = (__this->fields)._raidButton;
              goto LAB_034fa7c8;
            }
          }
        }
      }
    }
  }
  else {
    pSVar8 = (__this->fields).EHOJEDDANJH;
    if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
    pLVar15 = (__this->fields)._joinButton;
LAB_034fa7c8:
    lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
    pSVar16 = (pSVar8->fields)._items;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pSVar16->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
      thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar4 = DOCPIHOLNOA__BJBGLBAEIJB
                    ((__this->fields).FBILHKCKHEJ,StringLiteral_8271/*"KickPlayers"*/,(__this->fields).AMEAGHFFDFI,
                     (MethodInfo *)0x0);
  bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                    ((__this->fields).FBILHKCKHEJ,StringLiteral_4258/*"ChangeRole"*/,(__this->fields).AMEAGHFFDFI,
                     (MethodInfo *)0x0);
                    /* try { // try from 034fa998 to 035faa8f has its CatchHandler @ 034fa998
                       catch() { ... } // from try @ 034fa998 with catch @ 034fa998
                       catch() { ... } // from try @ 034fab34 with catch @ 034fa998
                       catch() { ... } // from try @ 034fabc4 with catch @ 034fa998
                       catch() { ... } // from try @ 034fabcc with catch @ 034fa998
                       catch() { ... } // from try @ 034fac78 with catch @ 034fa998 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar11 != (RaidClansManager_o *)0x0) {
    pMVar13 = RaidClansManager__MPCGKMBAHHO(pEVar11,(__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
    pOVar17 = (__this->fields).FBILHKCKHEJ;
    if (pOVar17 != (OJEHKJHEBID_o *)0x0) {
      bVar6 = OJEHKJHEBID__GIKFBFLFOCH(pOVar17,(__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
      iVar7 = 4;
      if ((pMVar13 != (MGDJPGGPDJI_o *)0x0) && (bVar6)) {
        iVar7 = (pMVar13->fields).BDPMJNBHKIJ;
      }
      pNVar14 = (__this->fields)._tableMembers;
      if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetChangableRole
                  (pNVar14,bVar5,iVar7,(MethodInfo *)0x0);
        pNVar14 = (__this->fields)._tableMembers;
        if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetKickable
                    (pNVar14,bVar4,iVar7,(MethodInfo *)0x0);
          pNVar14 = (__this->fields)._tableMembers;
          if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdateTable
                      (pNVar14,(MethodInfo *)0x0);
            pSVar8 = (__this->fields).EHOJEDDANJH;
            if (pSVar8 != (System_Collections_Generic_List_SFButton__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
                         Method_System_Collections_Generic_List<SFButton>_GetEnumerator__);
              local_80.fields._index = local_98.fields._index;
              local_80.fields._version = local_98.fields._version;
              local_80.fields._list = local_98.fields._list;
              local_80.fields._current = local_98.fields._current;
              while( true ) {
                bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_80,
                                   Method_System_Collections_Generic_List_Enumerator<SFButton>_MoveNext__
                                  );
                if (!bVar4) {
                    /* try { // try from 034faa90 to 035faab7 has its CatchHandler @ 034fabec */
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<SFButton>_Dispose__);
                  return;
                }
                if ((UnityEngine_Component_o *)local_80.fields._current ==
                    (UnityEngine_Component_o *)0x0) break;
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)local_80.fields._current,
                                    (MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
LAB_034faad4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BABOCPBBDJP()  [RVA 0x33FABAC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$BABOCPBBDJP @ RVA 0x33FABAC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__BABOCPBBDJP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *PFEFEKFHILE;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar1;
  int64_t KNPEFJLKLAL;
  
                    /* try { // try from 034fabb8 to 035fabbb has its CatchHandler @ 034fabe0 */
                    /* try { // try from 034fabbc to 035fabbf has its CatchHandler @ 034fabdc */
                    /* try { // try from 034fabc0 to 035fabc3 has its CatchHandler @ 034fabd8 */
                    /* try { // try from 034fabc4 to 035fabc7 has its CatchHandler @ 034fa998 */
                    /* try { // try from 034fabc8 to 035fabcb has its CatchHandler @ 034fabd4 */
                    /* try { // try from 034fabcc to 035fabfb has its CatchHandler @ 034fa998 */
  if ((DAT_04567fb2 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034fabc8 with catch @ 034fabd4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034fabc0 with catch @ 034fabd8
                        */
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034fabbc with catch @ 034fabdc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034fabb8 with catch @ 034fabe0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034fab2c with catch @ 034fabe4
                        */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034faaec with catch @ 034fabe8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034faa90 with catch @ 034fabec
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_MCDHOIOBGFP__);
    DAT_04567fb2 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034fabfc to 035fabff has its CatchHandler @ 034fac10 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 034fabfc with catch @ 034fac10 */
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    KNPEFJLKLAL = (pOVar1->fields).ADEIKPGDIPM;
    PFEFEKFHILE = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
                    /* try { // try from 034fac50 to 035fac77 has its CatchHandler @ 034fac8c */
    if (__this_00 != (RaidClansManager_o *)0x0) {
      RaidClansManager__FKOLNCFEANA(__this_00,KNPEFJLKLAL,PFEFEKFHILE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EDGHMNHEFKD(object IMMNELPBGIF)  [RVA 0x33FAC78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$EDGHMNHEFKD @ RVA 0x33FAC78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__EDGHMNHEFKD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *value;
  LKJJCAEOJBG_o *__this_00;
  RaidClansManager_o *__this_01;
  Il2CppObject *extraout_x1;
  IDGOGBNEGAM_o **ppIVar3;
  int local_34;
  
                    /* try { // try from 034fac78 to 035fac83 has its CatchHandler @ 034fa998 */
                    /* try { // try from 034fac84 to 035fac8b has its CatchHandler @ 034fac8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034fac50 with catch @ 034fac8c
                       catch(type#2 @ 00000000) { ... } // from try @ 034fac84 with catch @ 034fac8c
                        */
  if ((DAT_04567fb3 & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KCFAKHLDKJM_var);
    FUN_01bab630(&KCFAKHLDKJM_TypeInfo);
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567fb3 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  handle = KCFAKHLDKJM_var;
  ppIVar3 = &(__this->fields).FANGHLLLOLB;
  if (*ppIVar3 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = ((*ppIVar3)->fields).LLNMDPPIGLF + 1;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,IMMNELPBGIF);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_34 = iVar1;
    value = (Il2CppObject *)thunk_FUN_01bda448(KCFAKHLDKJM_TypeInfo,&local_34);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    bVar2 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (LKJJCAEOJBG_o *)thunk_FUN_01bda818(LKJJCAEOJBG_TypeInfo);
      LKJJCAEOJBG___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (LKJJCAEOJBG_o *)0x0) {
LAB_034fae04:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).IGBAAAHPLAA = iVar1;
      if (*ppIVar3 == (IDGOGBNEGAM_o *)0x0) goto LAB_034fae04;
      (__this_00->fields).MKGNDFBBANC = ((*ppIVar3)->fields).HLFBMBHOPMI;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (__this_01 == (RaidClansManager_o *)0x0) goto LAB_034fae04;
      RaidClansManager__HHJEKOPMOKB
                (__this_01,__this_00,(System_Action_KEFHDOHHHML__o *)0x0,(MethodInfo *)0x0);
    }
    *ppIVar3 = (IDGOGBNEGAM_o *)0x0;
    thunk_FUN_01c20e04(ppIVar3,0);
  }
  return;
}


// ===== private void LLAJCEMDFEO()  [RVA 0x33FAE08]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$LLAJCEMDFEO @ RVA 0x33FAE08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__LLAJCEMDFEO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  RaidClansManager_o *__this_00;
  MGDJPGGPDJI_o *pMVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar9;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  LabelButton_o *__this_01;
  
  if ((DAT_04567fb4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_MPJCLFBEOGE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17769/*"dlgCantLeave"*/);
    FUN_01bab630(&StringLiteral_17301/*"compareCloseBtn"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17327/*"confirmLeave"*/);
    DAT_04567fb4 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((__this_00 != (RaidClansManager_o *)0x0) &&
     (pMVar4 = RaidClansManager__MPCGKMBAHHO(__this_00,(__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0),
     pMVar4 != (MGDJPGGPDJI_o *)0x0)) {
    if ((pMVar4->fields).BDPMJNBHKIJ == 1) {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = FUN_01bab718(string___TypeInfo,2);
      pSVar7 = IDGOGBNEGAM__ONLBMMFEPOI(2,(MethodInfo *)0x0);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = pSVar7;
          thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20),pSVar7);
          pSVar7 = IDGOGBNEGAM__ONLBMMFEPOI(1,(MethodInfo *)0x0);
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(System_String_o **)(lVar6 + 0x28) = pSVar7;
            thunk_FUN_01c20e04();
            uVar3 = StringLiteral_17769/*"dlgCantLeave"*/;
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar10 = pIVar5->klass;
              uVar2._0_1_ = (pIVar10->_2).rank;
              uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
              uVar11 = (ulong)uVar2;
              if (uVar11 != 0) {
                piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar8 = pIVar10->vtable + (*piVar12 + 0xc);
                    goto LAB_034fb0fc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034fb0fc:
              pSVar7 = (System_String_o *)(*pVVar8->methodPtr)(pIVar5,uVar3,lVar6,pVVar8->method);
              DialogsOpener__JNDPLPKDPCP
                        (StringLiteral_17850/*"dlgWarning"*/,pSVar7,StringLiteral_17301/*"compareCloseBtn"*/,StringLiteral_1/*""*/,
                         (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,false,true,
                         true,true,(MethodInfo *)0x0);
              return;
            }
            goto LAB_034fb180;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      pNVar9 = DialogsOpener__JNDPLPKDPCP
                         (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17327/*"confirmLeave"*/,StringLiteral_9679/*"OK"*/,
                          StringLiteral_3640/*"CANCEL"*/,(System_Action_object__o *)0x0,1,0,false,false,
                          StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
      if (pNVar9 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
        if (((pNVar9->klass->_2).naturalAligment < bVar1) ||
           ((pNVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_01 = (pNVar9->fields)._btnOK;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)__this_01,2,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034fb180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x33FB18C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$UpdateContent @ RVA 0x33FB18C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  OJEHKJHEBID_c *pOVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04567fb5 & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_04567fb5 = 1;
  }
  pOVar1 = OJEHKJHEBID_TypeInfo;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if (IMMNELPBGIF->klass == (Il2CppClass *)OJEHKJHEBID_TypeInfo) {
      (__this->fields).FBILHKCKHEJ = (OJEHKJHEBID_o *)IMMNELPBGIF;
      if (IMMNELPBGIF->klass == (Il2CppClass *)pOVar1) goto LAB_034fb1fc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  (__this->fields).FBILHKCKHEJ = (OJEHKJHEBID_o *)0x0;
LAB_034fb1fc:
  thunk_FUN_01c20e04(&(__this->fields).FBILHKCKHEJ,IMMNELPBGIF);
  __this_00 = (__this->fields)._tableMembers;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetInfo
              (__this_00,(__this->fields).FBILHKCKHEJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__PBDGFBENHDK(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

