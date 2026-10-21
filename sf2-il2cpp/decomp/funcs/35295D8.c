// Nekki.SF2.GUI.DebugModules.ScreenDebug$$get_Current @ RVA 0x35295D8

Nekki_SF2_GUI_DebugModules_ScreenDebug_o *
Nekki_SF2_GUI_DebugModules_ScreenDebug__get_Current(MethodInfo *method)

{
  if ((DAT_04568a0e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
    DAT_04568a0e = 1;
  }
  return Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
}

