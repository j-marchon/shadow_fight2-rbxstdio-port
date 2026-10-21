// Nekki.SF2.Core.InputControllers.GamePadController$$OnDeviceCountChanged @ RVA 0x30E6894

void Nekki_SF2_Core_InputControllers_GamePadController__OnDeviceCountChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045663ec & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663ec = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__OnDeviceCountChanged((MethodInfo *)0x0);
  return;
}

