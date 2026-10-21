// Nekki.SF2.Core.ApplicationController$$get_MaxTotalMemory @ RVA 0x30BEF40

float Nekki_SF2_Core_ApplicationController__get_MaxTotalMemory(MethodInfo *method)

{
  if ((DAT_04566266 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566266 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_OCOFJPFONAH_k__BackingField;
}

