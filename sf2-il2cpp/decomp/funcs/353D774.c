// Nekki.SF2.GUI.DebugModules.ConsoleUI$$JBJJOIHNIDF @ RVA 0x353D774

void Nekki_SF2_GUI_DebugModules_ConsoleUI__JBJJOIHNIDF
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ace & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ace = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
       CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}

