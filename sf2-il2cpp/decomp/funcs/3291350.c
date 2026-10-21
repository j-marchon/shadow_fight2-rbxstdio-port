// Nekki.SF2.GUI.DebugUI$$get_IsActive @ RVA 0x3291350

bool Nekki_SF2_GUI_DebugUI__get_IsActive(Nekki_SF2_GUI_DebugUI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567321 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567321 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugUI_TypeInfo,method);
  }
  return Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE;
}

