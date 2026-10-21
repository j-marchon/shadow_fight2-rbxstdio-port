// Nekki.SF2.Core.ApplicationController$$get_LastTotalMemory @ RVA 0x30BFE1C

float Nekki_SF2_Core_ApplicationController__get_LastTotalMemory(MethodInfo *method)

{
  if ((DAT_04566276 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566276 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_KEDJGPDGOLI_k__BackingField;
}

