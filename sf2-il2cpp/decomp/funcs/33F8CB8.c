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

