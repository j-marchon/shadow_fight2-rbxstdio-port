// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$POJFLABIGPH @ RVA 0x30E2038

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__POJFLABIGPH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  System_Action_RaidViewContainer__o *pSVar1;
  
  pSVar1 = (__this->fields).CKNOFAMLBDE;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e2058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

