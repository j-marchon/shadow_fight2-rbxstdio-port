// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog.ELICPGLNCBN$$BLOFGINLIFA @ RVA 0x358E958

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN__BLOFGINLIFA
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *BaseEventData,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).dlg;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

