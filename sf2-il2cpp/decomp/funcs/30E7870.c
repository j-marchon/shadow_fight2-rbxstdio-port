// Nekki.SF2.Core.InputControllers.GamePadController$$get_Devices @ RVA 0x30E7870

System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *
Nekki_SF2_Core_InputControllers_GamePadController__get_Devices
          (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045663fa & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663fa = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  return InControl_InputManager_TypeInfo->static_fields->Devices;
}

