// Nekki.SF2.Core.InputControllers.GamePadController$$NODNHJBCKDK @ RVA 0x30E6444

void Nekki_SF2_Core_InputControllers_GamePadController__NODNHJBCKDK
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  COOJKPHHMCD_o *pCVar1;
  
  pCVar1 = (__this->fields).MNOACHLDOPH;
  if (pCVar1 != (COOJKPHHMCD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e6460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,GIDJIIFPHJK,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

