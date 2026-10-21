// Nekki.SF2.Core.InputControllers.GamePadController$$get_ActiveDevice @ RVA 0x30E511C

InControl_InputDevice_o *
Nekki_SF2_Core_InputControllers_GamePadController__get_ActiveDevice
          (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  InControl_InputDevice_o *pIVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663d2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663d2 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pIVar1 = InControl_InputManager__get_ActiveDevice((MethodInfo *)0x0);
  return pIVar1;
}

