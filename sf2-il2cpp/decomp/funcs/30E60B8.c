// Nekki.SF2.Core.InputControllers.GamePadController$$get_IsDualMode @ RVA 0x30E60B8

bool Nekki_SF2_Core_InputControllers_GamePadController__get_IsDualMode
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_045663df & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663df = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_0456647d == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647d = '\x01';
    method = extraout_x1_01;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  return InControl_InputManager_TypeInfo->static_fields->isDualMode;
}

