// Nekki.SF2.Core.ApplicationController$$get_LowMemoryCount @ RVA 0x30C160C

int32_t Nekki_SF2_Core_ApplicationController__get_LowMemoryCount(MethodInfo *method)

{
  if ((DAT_04566284 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566284 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_PGODJKMFNOJ_k__BackingField;
}

