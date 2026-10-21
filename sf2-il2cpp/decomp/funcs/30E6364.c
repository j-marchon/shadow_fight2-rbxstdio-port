// Nekki.SF2.Core.InputControllers.GamePadController$$set_IsFightZone @ RVA 0x30E6364

void Nekki_SF2_Core_InputControllers_GamePadController__set_IsFightZone
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  
  if ((__this->fields).LNEACLECIGO == CJNHFNHJHPE) {
    return;
  }
  pSVar1 = (__this->fields).NJPDHIPEMOG;
  (__this->fields).LNEACLECIGO = CJNHFNHJHPE;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e63a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,CJNHFNHJHPE,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

