// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$MGOANPBKOCK @ RVA 0x353B75C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__MGOANPBKOCK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               NLFLMJPNOLF_o *DKMMBMBMJBO,MethodInfo *method)

{
  GCIFMNHADDF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568ac4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04568ac4 = 1;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    JJPNLEPEAFM__LKDGKEJFPLL(DKMMBMBMJBO,method_00);
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363b7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._18_Close.methodPtr)
                (pNVar1,(pNVar1->klass->vtable)._18_Close.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

