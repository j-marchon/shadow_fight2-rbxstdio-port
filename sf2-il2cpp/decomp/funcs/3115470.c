// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$IOAHHMFLNOL @ RVA 0x3115470

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__IOAHHMFLNOL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_Action_IDGOGBNEGAM__o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
                    /* try { // try from 03215484 to 0331548b has its CatchHandler @ 03215504 */
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).GHKNFLCOBON;
                    /* try { // try from 03215498 to 033154b3 has its CatchHandler @ 03215508 */
  if (pSVar2 != (System_Action_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032154b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 032154b4 to 033154f7 has its CatchHandler @ 032153d8 */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

