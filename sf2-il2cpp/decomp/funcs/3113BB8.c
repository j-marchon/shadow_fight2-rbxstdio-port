// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$DFNDNMLDABJ @ RVA 0x3113BB8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DFNDNMLDABJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_Action_IDGOGBNEGAM__o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).EKPABHKOHLJ;
  if (pSVar2 != (System_Action_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03213bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

