// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$CHCADLEFDHN @ RVA 0x31156C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__CHCADLEFDHN
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
  pSVar2 = (__this->fields).APMAMLEKGIM;
  if (pSVar2 != (System_Action_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03215704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03215708 to 0331570f has its CatchHandler @ 032157bc */
  FUN_01bab8c8();
}

