// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$Init @ RVA 0x33F9884

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,int64_t FKIGDGJPIAC,
               UnityEngine_RectTransform_o *FDLJCNLNCOC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this_00;
  EEOMEMBBGNA_o *__this_01;
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
    if (__this_01 != (EEOMEMBBGNA_o *)0x0) {
      EEOMEMBBGNA__DEGNMFHGAFB(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
      (__this->fields).EDMGOFMIPEG = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

