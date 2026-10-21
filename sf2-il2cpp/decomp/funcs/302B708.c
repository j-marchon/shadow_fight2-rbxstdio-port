// Nekki.SF2.GUI.SimpleScroll$$DANJIKFLOAJ @ RVA 0x302B708

bool Nekki_SF2_GUI_SimpleScroll__DANJIKFLOAJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.m_Vertical != false) {
    return (__this->fields).KFDLOCBGNEA.fields.y < 0.0;
  }
  if ((__this->fields).super.m_Horizontal != false) {
    return 0.0 < (__this->fields).KFDLOCBGNEA.fields.x;
  }
  return false;
}

