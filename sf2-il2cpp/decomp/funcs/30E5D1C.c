// Nekki.SF2.Core.InputControllers.GamePadController$$Start @ RVA 0x30E5D1C

void Nekki_SF2_Core_InputControllers_GamePadController__Start
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  InControl_InControlManager_o *pIVar1;
  System_Action_InputDevice__o *pSVar2;
  System_Action_ulong__float__o *value;
  InControl_InControlManager_o **ppIVar3;
  
  if ((DAT_045663dd & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<InControlManager>__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_HFGFAAAMDBL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_KCBIIMDDFAO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NDMKMCNKGLB__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NODNHJBCKDK__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NPBHCDHGBEI__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&InControl_TwoAxisInputControl_TypeInfo);
    DAT_045663dd = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = (InControl_InControlManager_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<InControlManager>__);
    ppIVar3 = &(__this->fields).CLPBAPCJJLK;
    *ppIVar3 = pIVar1;
    thunk_FUN_01c20e04(ppIVar3,pIVar1);
    pIVar1 = *ppIVar3;
    if (pIVar1 != (InControl_InControlManager_o *)0x0) {
      (pIVar1->fields).logDebugInfo = true;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar1,true,(MethodInfo *)0x0);
      InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold = 0.3;
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      InControl_InputManager__add_OnDeviceAttached(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      InControl_InputManager__add_OnDeviceDetached(pSVar2,(MethodInfo *)0x0);
      value = (System_Action_ulong__float__o *)
              thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo);
      System_Action<ulong,_float>___ctor();
      InControl_InputManager__add_OnUpdate(value,(MethodInfo *)0x0);
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      InControl_InputManager__add_OnDevicePartWasDetached(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      InControl_InputManager__add_OnDeviceStyleChanged(pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

