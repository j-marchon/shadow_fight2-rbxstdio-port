// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$OnDestroy @ RVA 0x33FA000

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
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
  if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
    EEOMEMBBGNA__BLGMCMLEBDI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
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

