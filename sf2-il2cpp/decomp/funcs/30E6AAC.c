// Nekki.SF2.Core.InputControllers.GamePadController$$get_Current @ RVA 0x30E6AAC

Nekki_SF2_Core_InputControllers_GamePadController_o *
Nekki_SF2_Core_InputControllers_GamePadController__get_Current(MethodInfo *method)

{
  if ((DAT_045663ef & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo)
    ;
    DAT_045663ef = 1;
  }
  Nekki_SF2_Core_InputControllers_GamePadController__Init(method);
  return Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI;
}

