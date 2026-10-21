// Nekki.SF2.Core.ApplicationController$$get_LastMonoMemory @ RVA 0x30C1794

float Nekki_SF2_Core_ApplicationController__get_LastMonoMemory(MethodInfo *method)

{
  if ((DAT_04566287 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566287 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_DBKGHANCIKN_k__BackingField;
}

