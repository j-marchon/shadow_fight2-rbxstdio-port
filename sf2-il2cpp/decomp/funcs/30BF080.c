// Nekki.SF2.Core.ApplicationController$$get_Instance @ RVA 0x30BF080

Nekki_SF2_Core_ApplicationController_o *
Nekki_SF2_Core_ApplicationController__get_Instance(MethodInfo *method)

{
  if ((DAT_04566269 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566269 = 1;
  }
  Nekki_SF2_Core_ApplicationController__Init(method);
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->KNOHKIKFEBL;
}

