// Nekki.SF2.GUI.DebugModules.ConsoleUI$$get_Current @ RVA 0x353D274

Nekki_SF2_GUI_DebugModules_ConsoleUI_o *
Nekki_SF2_GUI_DebugModules_ConsoleUI__get_Current(MethodInfo *method)

{
  if ((DAT_04568ac9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ac9 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
}

