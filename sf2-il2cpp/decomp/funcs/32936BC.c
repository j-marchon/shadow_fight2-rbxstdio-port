// Nekki.SF2.GUI.Fight.StylePanel$$SetCurrentStyleStrip @ RVA 0x32936BC

void Nekki_SF2_GUI_Fight_StylePanel__SetCurrentStyleStrip
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).HOBABLEHLDI;
  if (iVar1 <= DPJIDNBJIBG) {
    iVar1 = DPJIDNBJIBG;
  }
  (__this->fields).HOBABLEHLDI = iVar1;
  (__this->fields).OOADLOIGCHI = DPJIDNBJIBG;
  Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel(__this,(MethodInfo *)(ulong)(uint)DPJIDNBJIBG);
  return;
}

