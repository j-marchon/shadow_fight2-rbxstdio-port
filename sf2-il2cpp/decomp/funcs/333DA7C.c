// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS_Min @ RVA 0x333DA7C

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS_Min(MethodInfo *method)

{
  if ((DAT_04567978 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_04567978 = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HOAGAALGFNP_k__BackingField;
}

