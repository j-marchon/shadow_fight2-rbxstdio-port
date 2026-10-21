// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS @ RVA 0x333E1AC

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS(MethodInfo *method)

{
  if ((DAT_0456797d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797d = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_JHOFDCHHEPF_k__BackingField;
}

