// Nekki.SF2.GUI.TimerLabel$$NAHNHOFPIDO @ RVA 0x33BBC40

void Nekki_SF2_GUI_TimerLabel__NAHNHOFPIDO(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *param_2)

{
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).SecondsString;
  if (0 < (long)pSVar1) {
    (__this->fields).SecondsString = (System_String_o *)&pSVar1[-1].fields.field_0x7;
    Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(__this,param_2);
    return;
  }
  return;
}

