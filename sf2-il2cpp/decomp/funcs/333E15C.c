// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS_Max @ RVA 0x333E15C

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS_Max(MethodInfo *method)

{
  if ((DAT_0456797c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797c = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_DCHILBEKFMP_k__BackingField;
}

