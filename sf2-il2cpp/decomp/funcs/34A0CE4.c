// Nekki.SF2.GUI.Map.MapButton$$set_NotificatorEnabled @ RVA 0x34A0CE4

void Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled
               (Nekki_SF2_GUI_Map_MapButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  
  __this_00 = (__this->fields)._indicator;
  if (__this_00 == (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields).ONCKKFAODHL == -(uint)CJNHFNHJHPE) {
    return;
  }
  (__this_00->fields).ONCKKFAODHL = -(uint)CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Indicator__LPNCEHPFOAF(__this_00,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}

