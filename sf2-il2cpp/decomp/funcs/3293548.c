// Nekki.SF2.GUI.Fight.StylePanel$$GetStyleValue @ RVA 0x3293548

float Nekki_SF2_GUI_Fight_StylePanel__GetStyleValue
                (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._styleBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* try { // try from 03393558 to 0349355b has its CatchHandler @ 03393584 */
                    /* try { // try from 0339355c to 03493593 has its CatchHandler @ 03393214 */
    fVar1 = Nekki_SF2_GUI_Fight_StyleBar__GetValue
                      (__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

