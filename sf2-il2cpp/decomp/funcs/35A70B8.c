// Nekki.SF2.GUI.TextDebugger$$set_GenerateLineBounds @ RVA 0x35A70B8

void Nekki_SF2_GUI_TextDebugger__set_GenerateLineBounds(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e1c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e1c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextDebugger_TypeInfo,method);
  }
  Nekki_SF2_GUI_TextDebugger__DJAEEGIEDIO
            (&Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->DOLEAAFOLFC,CJNHFNHJHPE,in_x2);
  return;
}

