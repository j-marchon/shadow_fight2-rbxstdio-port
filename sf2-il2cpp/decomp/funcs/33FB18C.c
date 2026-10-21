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

