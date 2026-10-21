// Nekki.SF2.GUI.TextDebugger$$JELBJIIOFDK @ RVA 0x35A7668

void Nekki_SF2_GUI_TextDebugger__JELBJIIOFDK
               (Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TextPic_o *__this_00;
  
                    /* try { // try from 036a7668 to 037a766b has its CatchHandler @ 036a767c */
  Nekki_SF2_GUI_TextDebugger__Clear(__this,method);
  __this_00 = *(Nekki_SF2_GUI_TextPic_o **)&(__this->fields).MLLLAEJFHLL;
  if (__this_00 != (Nekki_SF2_GUI_TextPic_o *)0x0) {
                    /* catch() { ... } // from try @ 036a7668 with catch @ 036a767c */
    Nekki_SF2_GUI_TextPic__Invalidate(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

