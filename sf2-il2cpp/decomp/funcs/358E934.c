// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog.ELICPGLNCBN$$NOOFOPIMFLO @ RVA 0x358E934

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN__NOOFOPIMFLO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *BaseEventData,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).dlg;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 0368e940 to 0378e94b has its CatchHandler @ 0368e3f4 */
                    /* try { // try from 0368e94c to 0378e953 has its CatchHandler @ 0368e954 */
                    /* WARNING: Could not recover jumptable at 0x0368e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368e8d8 with catch @ 0368e954
                       catch() { ... } // from try @ 0368e94c with catch @ 0368e954 */
  FUN_01bab8c8();
}

