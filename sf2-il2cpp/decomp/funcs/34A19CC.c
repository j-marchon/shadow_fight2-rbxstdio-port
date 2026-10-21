// Nekki.SF2.GUI.Map.MapButton$$get_NotificatorEnabled @ RVA 0x34A19CC

bool Nekki_SF2_GUI_Map_MapButton__get_NotificatorEnabled
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *pNVar1;
  
  pNVar1 = (__this->fields)._indicator;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    return (pNVar1->fields).ONCKKFAODHL != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

