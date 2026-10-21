// Nekki.SF2.Core.InputControllers.KeyboardController$$get_Current @ RVA 0x3097034

Nekki_SF2_Core_InputControllers_KeyboardController_o *
Nekki_SF2_Core_InputControllers_KeyboardController__get_Current(MethodInfo *method)

{
  if ((DAT_045660e6 & 1) == 0) {
    method = (MethodInfo *)
             FUN_01bab630(&Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo);
    DAT_045660e6 = 1;
  }
  Nekki_SF2_Core_InputControllers_KeyboardController__Init(method);
  return Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields->CNMHHKAMGPI;
}

