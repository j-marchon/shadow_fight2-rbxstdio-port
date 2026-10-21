// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$OJGLIBHMOIE @ RVA 0x32DC9CC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).DKPPMJCLNAB;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033dc9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

