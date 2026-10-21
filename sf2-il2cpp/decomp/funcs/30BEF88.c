// Nekki.SF2.Core.ApplicationController$$get_MaxMonoMemory @ RVA 0x30BEF88

float Nekki_SF2_Core_ApplicationController__get_MaxMonoMemory(MethodInfo *method)

{
  if ((DAT_04566267 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566267 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_IOBAFBHOHHC_k__BackingField;
}

