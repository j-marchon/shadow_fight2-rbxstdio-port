// Nekki.SF2.GUI.SimpleScroll$$GetScrollPos @ RVA 0x302CF08

float Nekki_SF2_GUI_SimpleScroll__GetScrollPos
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if ((__this->fields).super.m_Vertical != false) {
    fVar1 = Nekki_SF2_GUI_SimpleScroll__GetScrollY(__this,method);
    return fVar1;
  }
  if ((__this->fields).super.m_Horizontal != false) {
                    /* try { // try from 0312cf1c to 0322cf83 has its CatchHandler @ 0312ce30 */
    fVar1 = Nekki_SF2_GUI_SimpleScroll__GetScrollX(__this,method);
    return fVar1;
  }
  return 0.0;
}

