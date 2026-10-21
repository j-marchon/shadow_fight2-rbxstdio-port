// Nekki.SF2.GUI.SimpleScroll$$ODFPBOOHGJE @ RVA 0x302B6D0

bool Nekki_SF2_GUI_SimpleScroll__ODFPBOOHGJE
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.m_Vertical != false) {
    return 0.0 < (__this->fields).KFDLOCBGNEA.fields.y;
  }
  if ((__this->fields).super.m_Horizontal != false) {
    return (__this->fields).KFDLOCBGNEA.fields.x < 0.0;
  }
  return false;
}

