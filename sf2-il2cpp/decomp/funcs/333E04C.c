// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS_Average @ RVA 0x333E04C

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS_Average(MethodInfo *method)

{
  if ((DAT_0456797b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797b = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HFLINEMELAF_k__BackingField;
}

