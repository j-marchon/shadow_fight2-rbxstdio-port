// Nekki.SF2.GUI.DebugUI$$AEKEGMAOOHO @ RVA 0x32913A8

void Nekki_SF2_GUI_DebugUI__AEKEGMAOOHO
               (Nekki_SF2_GUI_DebugUI_o *__this,int32_t DEEHPBCLFHC,MethodInfo *method)

{
  if (DEEHPBCLFHC == 0x2e) {
    if (DAT_045673fe == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
      DAT_045673fe = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_DebugUI__set_IsActive
              (__this,Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE == false,method);
    return;
  }
  return;
}

