// Nekki.SF2.GUI.DebugUI$$set_IsActive @ RVA 0x329141C

void Nekki_SF2_GUI_DebugUI__set_IsActive
               (Nekki_SF2_GUI_DebugUI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_04567325 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567325 = 1;
    method_00 = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE = CJNHFNHJHPE;
  Nekki_SF2_GUI_DebugUI__GICDPBACCBF(__this,method_00);
  return;
}

