// Nekki.SF2.Core.InputControllers.GamePadController$$set_IsDualMode @ RVA 0x30E52A8

void Nekki_SF2_Core_InputControllers_GamePadController__set_IsDualMode
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  if ((DAT_045663d4 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663d4 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__set_IsDualMode(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

