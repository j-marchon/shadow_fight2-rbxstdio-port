// Nekki.SF2.GUI.Pvp.PhaseBox$$ShowPhase @ RVA 0x32D8314

void Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhase
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t EEMJJBMLJFO,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).NLPOEKINGJI != false) {
    return;
  }
  Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,EEMJJBMLJFO,method);
  EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList(__this,method_00);
  return;
}

