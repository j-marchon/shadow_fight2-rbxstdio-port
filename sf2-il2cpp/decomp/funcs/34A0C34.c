// Nekki.SF2.GUI.Map.MapButton$$SetIndicatorLabelState @ RVA 0x34A0C34

void Nekki_SF2_GUI_Map_MapButton__SetIndicatorLabelState
               (Nekki_SF2_GUI_Map_MapButton_o *__this,bool HJEBKCDDBAB,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  
  __this_00 = (__this->fields)._indicator;
  if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    Nekki_SF2_GUI_Common_Indicator__SetLabelState(__this_00,HJEBKCDDBAB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

