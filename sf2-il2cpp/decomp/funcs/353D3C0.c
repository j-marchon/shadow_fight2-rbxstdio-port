// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnSubmit @ RVA 0x353D3C0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnSubmit
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  UnityEngine_UI_InputField_o *pUVar2;
  
  if ((DAT_04568acc & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04568acc = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._Input;
  if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((pUVar2->fields).m_Text,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._Input;
    if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__FIKOIBAMMEO(__this,(pUVar2->fields).m_Text,in_x2);
      pUVar2 = (__this->fields)._Input;
      if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__set_text(pUVar2,StringLiteral_1,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._Input;
        if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

