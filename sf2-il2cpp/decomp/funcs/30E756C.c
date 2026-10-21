// Nekki.SF2.Core.InputControllers.GamePadController$$OnDestroy @ RVA 0x30E756C

void Nekki_SF2_Core_InputControllers_GamePadController__OnDestroy
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  System_Action_InputDevice__o *pSVar1;
  System_Action_ulong__float__o *value;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663f6 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_HFGFAAAMDBL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_KCBIIMDDFAO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NDMKMCNKGLB__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NODNHJBCKDK__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NPBHCDHGBEI__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663f6 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Action_InputDevice__o *)
           thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo,method);
  System_Action<object>___ctor();
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__remove_OnDeviceAttached(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  InControl_InputManager__remove_OnDeviceDetached(pSVar1,(MethodInfo *)0x0);
  value = (System_Action_ulong__float__o *)thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo);
  System_Action<ulong,_float>___ctor();
  InControl_InputManager__remove_OnUpdate(value,(MethodInfo *)0x0);
  pSVar1 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  InControl_InputManager__remove_OnDevicePartWasDetached(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  InControl_InputManager__remove_OnDeviceStyleChanged(pSVar1,(MethodInfo *)0x0);
  return;
}

