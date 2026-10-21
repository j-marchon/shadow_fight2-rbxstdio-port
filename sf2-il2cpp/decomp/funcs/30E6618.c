// Nekki.SF2.Core.InputControllers.GamePadController$$get_IsInited @ RVA 0x30E6618

bool Nekki_SF2_Core_InputControllers_GamePadController__get_IsInited(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *x;
  
  if ((DAT_045663e8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045663e8 = 1;
  }
  x = Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

