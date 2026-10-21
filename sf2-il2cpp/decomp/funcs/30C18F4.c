// Nekki.SF2.Core.ApplicationController$$get_IsPaused @ RVA 0x30C18F4

bool Nekki_SF2_Core_ApplicationController__get_IsPaused(MethodInfo *method)

{
  if ((DAT_0456628a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456628a = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NHDGMLJJAOA_k__BackingField;
}

