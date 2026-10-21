// Nekki.SF2.GUI.Tutorial.TutorialCanvas$$set_BlockOn @ RVA 0x318FF30

void Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn
               (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0328ff30 to 0338ff97 has its CatchHandler @ 0328ffac */
  if ((__this->fields).DBNNMLAONOF == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).DBNNMLAONOF = CJNHFNHJHPE;
  if (CJNHFNHJHPE) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__OMGKLOIPHAJ(__this,(MethodInfo *)0x1);
    return;
  }
  Nekki_SF2_GUI_Tutorial_TutorialCanvas__IPHOIPPCIGE(__this,(MethodInfo *)0x0);
  return;
}

