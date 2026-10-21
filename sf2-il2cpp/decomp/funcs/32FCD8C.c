// Nekki.SF2.GUI.Common.Hints.HintUI$$SwitchStyle @ RVA 0x32FCD8C

void Nekki_SF2_GUI_Common_Hints_HintUI__SwitchStyle
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (__this->fields)._Style;
  uVar2 = (uint)(uVar1 == 0);
  if (uVar1 == uVar2) {
    return;
  }
  (__this->fields)._Style = uVar2;
  Nekki_SF2_GUI_Common_Hints_HintUI__OLHNKIJCLJK(__this,method);
  return;
}

