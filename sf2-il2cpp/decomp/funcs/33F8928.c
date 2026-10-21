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

