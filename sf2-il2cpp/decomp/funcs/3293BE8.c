// Nekki.SF2.GUI.Fight.StylePanel$$SetAllStyleValue @ RVA 0x3293BE8

void Nekki_SF2_GUI_Fight_StylePanel__SetAllStyleValue
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  
  __this_00 = (__this->fields)._styleBar;
                    /* try { // try from 03393bf0 to 03493bff has its CatchHandler @ 03393d3c */
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
    Nekki_SF2_GUI_Fight_StyleBar__SetValue(__this_00,CJNHFNHJHPE,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

