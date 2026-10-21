// Nekki.SF2.Core.InputControllers.GamePadController$$NDMKMCNKGLB @ RVA 0x30E5F64

void Nekki_SF2_Core_InputControllers_GamePadController__NDMKMCNKGLB
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  COOJKPHHMCD_o *pCVar1;
  
  pCVar1 = (__this->fields).ENCJPJEBMKJ;
  if (pCVar1 != (COOJKPHHMCD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e5f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,GIDJIIFPHJK,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

